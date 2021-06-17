.. This is a template rst file (.rst) within the Vera C. Rubin Observatory Documentation for Data Preview 0.1 (DP0.1) documentation project. This template can be used for a directory's index.rst or other pages within the directory. This comment and proceeding blank line may be deleted after the file is copied and renamed within the destination directory.

.. Review the README on instructions to contribute.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
	- If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name"  -- Spaces should be replaced by hyphens.
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

.. _Examples-DP0-1-Portal-Advanced:

############################################
Advanced TAP/ADQL Usage in the Portal Aspect
############################################

Now that you have seen the basic functionality of the Portal Aspect and some demonstrations of ADQL queries (in :ref:`Data-Access-Analysis-Tools-Portal-Intro`), we turn to some more advanced usage of the Portal Aspect.

.. _Portal-Advanced-Table-Join:

Complex ADQL Queries: Joining Multiple Tables
=============================================

In this section, we demonstrate how to do the analysis from the tutorial notebook 06_Comparing_Object_and_Truth_Tables in :ref:`Examples-DP0-1-Notebooks`, but using the ADQL query capability of the Portal Aspect rather than a Jupyter Notebook. We will extract data from a small region of sky in the `object` table, and simultaneously join this together with the `truth-match` table to enable comparison of the simulated and measured properties of some stars and galaxies.

We assume that you have read the basic intro to the Portal Aspect in :ref:`Data-Access-Analysis-Tools-Portal-Intro`.

After logging into the Portal Aspect, select 'ADQL' to query via the ADQL interface. Let's begin by executing a query on a single table. The following illustrates a selection from the `object` table in a circular region of 0.1 degree radius centered on (RA, Dec) = (62.0, -37.0) degrees:

.. code-block:: SQL

   SELECT objectId, ra, dec, mag_g, mag_r,
          mag_i, mag_g_cModel, mag_r_cModel, mag_i_cModel,
          psFlux_g, psFlux_r, psFlux_i, cModelFlux_g,
          cModelFlux_r, cModelFlux_i, tract, patch,
          extendedness, good, clean
   FROM dp01_dc2_catalogs.object
   WHERE CONTAINS(
   POINT('ICRS', ra, dec),
   CIRCLE('ICRS', 62.0, -37.0, 0.1)) = 1

Type the above query into the ADQL Query block and click on the 'Search' button in the bottom left corner to execute. The search results will populate the Results View, which should look similar to the image below. The query returns 15670 results, with the 19 data columns we specified in the query.

.. figure:: /_static/Portal_Advanced_Single_Query.png
    :name: portal_example_search

    Results from a 0.1-degree query of the DP0.1 Object catalog.

In the tutorial notebook, we executed the same query as above, and then queried the `truth_match` table for the same region of sky, like this:

.. code-block:: SQL
				     
   SELECT ra, dec, mag_r, match_objectId,
          flux_g, flux_r, flux_i, truth_type, match_sep, is_variable
   FROM dp01_dc2_catalogs.truth_match
   WHERE CONTAINS(
   POINT('ICRS', ra, dec),
   CIRCLE('ICRS', 62.0, -37.0, 0.1)) = 1
   AND match_objectId >= 0
   AND is_good_match = 1

Notice that we have included additional constraints in the last two lines. Objects in the `truth-match` table that do not have matches in the `object` table have "match_objectId = -1," while those with legitimate matches contain the 'objectId' of the corresponding object from the `object` table in "match_objectId." By requiring this to be greater than or equal to zero, we extract only objects with matches. We also keep only sources satisfying the "is_good_match" flag, which is described in the schema as being "True if this object--truth matching pair satisfies all matching criteria."

In our notebook exploration, we continued by creating Python dataframes of the two tables, then matching them based on the IDs. But in ADQL, you can do the matching of tables directly by joining on the requirement that "match_objectId" in the `truth-match` table equals the "objectId" from the `object` table. This is how the JOIN is done:

.. code-block:: SQL

   SELECT obj.objectId, obj.ra, obj.dec, obj.mag_g, obj.mag_r,
          obj.mag_i, obj.mag_g_cModel, obj.mag_r_cModel, obj.mag_i_cModel,
          obj.psFlux_g, obj.psFlux_r, obj.psFlux_i, obj.cModelFlux_g,
          obj.cModelFlux_r, obj.cModelFlux_i, obj.tract, obj.patch,
          obj.extendedness, obj.good, obj.clean,
	  truth.ra, truth.dec, truth.mag_r, truth.match_objectId,
          truth.flux_g, truth.flux_r, truth.flux_i, truth.truth_type,
	  truth.match_sep, truth.is_variable
   FROM dp01_dc2_catalogs.object as obj
   JOIN dp01_dc2_catalogs.truth_match as truth
   ON truth.match_objectId = obj.objectId
   WHERE CONTAINS(
   POINT('ICRS', ra, dec),
   CIRCLE('ICRS', 62.0, -37.0, 0.1))=1
   AND truth.match_objectid >= 0
   AND truth.is_good_match = 'true'

Try the above query in the ADQL window -- you should retrieve 14425 results.

Compare the measurements from the Object table to the "true" values for some objects.
To do this, we will separate the "stars" and "galaxies" using the truth_type column from the Truth-Match table. Simulated stars have truth_type = 2, and galaxies, truth_type = 1.

After separating stars and galaxies, we'll compare the recovered flux to the "true" value that was simulated for each object (as a ratio of the fluxes).

Just to confirm that things look like we expect, let's plot a color-magnitude (g vs. g-i) and color-color (r-i vs. g-r) diagram.

Now let's compare the fluxes:

.. _Another-Portal-Demo:

Another Demonstration?
======================

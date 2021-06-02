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


.. _Data-Access-Analysis-Tools-Portal-Intro:

#####################################
Introduction to the RSP Portal Aspect
#####################################

Log in to the Portal Aspect by clicking on the "Portal" panel of the main landing page at `data.lsst.cloud`_. 

.. figure:: /_static/portal_default_view.png
    :width: 400
    :name: portal_default_view

    This is the default view upon entering the Portal Aspect.


The Portal's User Interface
===========================

Across the top is a menu bar of interface options, but the DP0 data set is only accessed via the **LSST TAP** service.
Under **TAP Searches** there are four options.

**1. TAP Service**: Leave this as the default to access DP0 data.

**2. Select Query Type**: Option to query via the single-table interface (default) or ADQL.


Single Table Queries
====================

**3. Select Table**: Drop down menus of available tables.
For DP0 data, choose the "Schema: dp01_dc2_catalogs", and then choose the table to query (see the :ref:`DP0-1-Data-Products-DPDD` for a reminder of what tables are available).
The table view at lower right will automatically update to match the selected table.

**4. Select Contraints**: Only Spatial constraints apply for DP0.1.
The longitude and latitude columns will automatically update to be the correct column names for right ascencion and declination for the selected table (usually `ra` and `dec` or `coord_ra` and `coord_dec`).
If a non-existent column name is entered the box will highlight red in indication of the error.
Choose the desired search method, `Cone` or `Polygon`, and the appropriate instructions for the search terms will appear.
Keeping the search area to a minimum will keep processing times short and returned subsets small and manageable.

*Note: Although there are two options for Constraints, Spatial and Temporal, for DP0.1 all of the catalog data that is available through the Portal is from the coadded DC2 images, and does not contain time-domain information.*

**Table View**: The table to the right of "Select Constraints" enables additional search constraints.
Use the leftmost boxes select the columns to be returned by the query.
Use the funnel icon to only view selected columns. 

.. figure:: /_static/portal_table_view.png
    :width: 400
    :name: portal_table_view

    The table view offers additional query options.

Some tables have a lot of columns.
Search for desired columns by entering terms in the boxes underneath "column_name" or "description".
Additional constraints on column data can be included in the query by specifying them under "constraints".
Mouse-over to view pop-up boxes with instructions.
Remove filters and reset the table view at any time using the buttons above the upper right corner of the table.

If desired, convert table view queries to `ADQL Queries` using the "Populate and Edit ADQL" button at lower left.

**Search:** Press the search button at lower left when ready to execute.

**Results View**: 

*(MLG error RSP NCSA: Unable to get error from https://lsst-lsp-stable.ncsa.illinois.edu/api/tap/async/yabvqy722yl8rlx9 Unauthorized)*.

ADQL Queries
============

 

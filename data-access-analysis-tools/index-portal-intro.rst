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

Log in to the Portal Aspect by clicking on the "Portal" panel of the main landing page at `data.lsst.cloud <https://data.lsst.cloud>`_. 

.. figure:: /_static/portal_default_view.png
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

*Note: The examples under the box for coordinates are object names are examples of the formatting only. Those examples are not guaranteed to be in the accessible data sets. The central coordinates for DC2, in decimal degrees, are: 61.863 -35.790. (See Table 2 of `The LSST DESC DC2 Simulated Sky Survey <https://ui.adsabs.harvard.edu/abs/2021ApJS..253...31L/abstract>`_.)*

*Note: Although there are two options for Constraints, Spatial and Temporal, for DP0.1 all of the catalog data that is available through the Portal is from the coadded DC2 images, and does not contain time-domain information.*

**Table View**: The table to the right of "Select Constraints" enables additional search constraints.
Use the leftmost boxes select the columns to be returned by the query.
Use the funnel icon to only view selected columns. 

.. figure:: /_static/portal_table_view.png
    :name: portal_table_view

    The table view offers additional query options.

Some tables have a lot of columns.
Search for desired columns by entering terms in the boxes underneath "column_name" or "description".
Additional constraints on column data can be included in the query by specifying them under "constraints".
Mouse-over to view pop-up boxes with instructions.
Remove filters and reset the table view at any time using the buttons above the upper right corner of the table (not shown in image above).

If desired, convert table view queries to `ADQL Queries` using the "Populate and Edit ADQL" button at the bottom of the page.

**Search:** Press the search button at lower left when ready to execute.
The example in the image below queries the dp01_dc2_catalogs.object table using a cone search centered on 61.863 -35.790 in decimal degrees (the approximate center of the DC2 region) with a 200 arcsecond radius.
The search will return data in columns ra, dec, mag_g, and mag_i for all objects with mag_g and mag_i brighter than 24th magnitude.

.. figure:: /_static/portal_example_search.png
    :name: portal_example_search
    
    An example query of the DC2 Object catalog.

.. figure:: /_static/portal_search_working.png
    :name: portal_search_working
    :width: 200

    This will show while the search is executing.

**Results View**: The search results will populate the results view, as shown below.
Across the top of the results view are many icons that control the display settings; hover over the icons and a statement about their functionality will appear at upper right.
Also at upper right, under the user name, are the options "tri-view", "img-tbl", "img-xy", and "xy-tbl".
These control how the results view is partitioned, and the default is "tri-view".
In the "tri-view", at top left is a sky image with the search results overplotted, but note that this is *not* a simulated DC2 images, but a 2MASS image.
Select "HiPS" and a "Change HiPS" button will appear with options for sky images to use, but none of the options are relevant for the DC2 simulated sky data.
Thus for DP0, the "xy-tbl" is the most relevant view for results.
  
.. figure:: /_static/portal_search_results.png
    :name: portal_search_results

    The default view of the search results. 

To manipulate the plotted data, select the two-gears "settings" icon above the xy plot and a pop-up window will open (see below).
Select other columns to use, change the symbol type and color, and so forth, and click Apply.

.. figure:: /_static/portal_results_xy_settings.png
    :name: portal_results_xy_settings
    :width: 200

    The plot settings pop-up window.

Additional cuts can be applied to the plotted data using the table query boxes, such as in the image below where a limit of mag_g brighter than 22 mag is used.
Note that corresponding plot point for the selected row in the table is differently colored, and that hovering the mouse over the plotted data will show the x and y values in a pop-up window.

.. figure:: /_static/portal_results_final.png
    :name: portal_results_final

    An updated results view in which the xy plot uses the magnitude columns.

See also the :ref:`Examples-DP0-1-Notebooks` for additional demonstrations of how to use the Portal's Single Table Query.

ADQL Queries
============

 

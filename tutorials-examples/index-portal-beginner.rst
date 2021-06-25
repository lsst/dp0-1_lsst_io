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


.. _Examples-DP0-1-Portal-Beginner:

###############################################################
Beginner TAP Tutorial - Single Table Usage in the Portal Aspect
##############################################################

This brief tutorial will show you how to perform the same data retrieval and analysis that is shown in the first of the :ref:`Examples-DP0-1-Notebooks` (titled "Intro to DP0") by using the Portal Aspect's Single Table TAP search function.

In this tutorial we will extract data from a small region of sky in the ``object`` table and build a Color-Magnitude Diagram.

We assume that you have read the basic intro to the Portal Aspect in :ref:`Data-Access-Analysis-Tools-Portal-Intro`.


.. _TAP_Single_Table_Beginner_Tutorial_Step_1:

Select Portal Aspect from RSP
=============================

After logging into the Portal Aspect, select Single Table (UI assisted) from the **Select Query Type**, then select the ``dp01_dc2_catalogs`` (left) and ``dp01_dc2_catalogs.object`` (right) from the **Select Table** drop down menu.  (See figure below.)

.. figure:: /_static/Portal_aspect.png
	:name: Single_Table

Next select the Spatial check box, the "Longitude Column" and "Latitude Column" should automatically populate with "ra" and "dec".  Enter the coordinates of 62.0, -37.0 in the "Coordinates or Object Name:" area.  Choose a radius of 1 degree and select a row limit of 10,000 as shown in the photo below.   

.. figure:: /_static/Spacial_data.png
    :name: Spatial_data


.. _TAP_Single_Table_Beginner_Tutorial_Step_2:

Select Columns for Analysis
===========================

In the Output Column Selection and Constraints window on the lower right hand side of the screen, select the following items: clean, dec, extendedness, good, mag_g, mag_i, mag_r, magerr_g, magerr_i, magerr_r, and ra.
Use the search box under "column_name" to quickly find columns of interest: for example, type "mag" into that box and press enter to see only column names that contain "mag".
(See figure below.)

.. figure:: /_static/Table_column_selection.png
    :name: Table_column_selection
    
Then press the filter icon to select only those items for analysis.

.. figure:: /_static/Table_column_filter.png 
    :name: Table_column_filter
    
    
.. _TAP_Single_Table_Beginner_Tutorial_Step_3:

Select Columns Constraints
==========================

After you press the filter button you should have only those items you selected shown in the table.  You may now add your column constaints to the table.  For this example, use the following values: clean = 1, dec (leave blank), extendedness = 0, good = 1, mag_g <24, mag_i <24, mag_r <24, magerr_g < 0.1, magerr_i < 0.1, magerr_r < 0.1, ra (leave blank).

Then press the Search button as shown in the figure below.

.. figure:: /_static/Search_with_selected_parameters.png
    :name: Search_with_selected_parameters


.. _TAP_Single_Table_Beginner_Tutorial_Step_4:

Select Configure the Graph to Create a Color Magnitude Diagram
=============================================  

This figure shows the results of the search.
The gaps in the spatial coverage of the returned catalog objects is due to the limit of 10000.
The gaps for your search might be different from what is shown below.

.. figure:: /_static/Results_tri_view.png
    :name: Results_tri_view
    

Next, click on the double gear icon on the upper right hand window.

.. figure:: /_static/Select_double_gear.png
    :name: Select_double_gear


Finally, change the parameters in the selection box.  The **X** should be "mag_r - mag_i" and the **Y** should be "mag_g".  Click on **Chart Options** and select **reverse** under the Y-Label.  


.. figure:: /_static/Edit_chart_data.png
    :name: Edit_chart_data
    
    
Then hit Apply.  The plot that you make will be slightly different from what is shown below, and different from the plot in the first of the :ref:`Examples-DP0-1-Notebooks` due to random sampling and the 10000 maximum that we used.
    

.. figure:: /_static/Final_data.png
    :name: Final_data





    
    


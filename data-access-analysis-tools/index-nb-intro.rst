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


.. _Data-Access-Analysis-Tools-NB-Intro:

#######################################
Introduction to the RSP Notebook Aspect
#######################################

Most RSP users will find Jupyter Notebooks to be the most efficient and powerful way to interact with the DP0.1 data set.
For DP0.1, Jupyter Notebooks will be the primary way to access images. 


.. _NB-Intro-Login:

Log In and Out of JupyterLab
============================

From the RSP landing page at `data.lsst.cloud <https://data.lsst.cloud/>`_ click on the central panel for Notebooks.

**Software Version and Server Size:**
The first page offers a choice of software environment version (left) and server size (right), as in the figure below.
Most users will choose the recommended software version and a medium server size. 

.. figure:: /_static/RSP_NB_select_a_server.png
    :width: 400
    :name: RSP_NB_select_a_server

    Most users will choose the recommended software version and a medium size.

The term "image" atop the left box refers to a "Docker image" that defines the software packages and their versions which will be automatically loaded in the server environment.
The "recommended" image will be updated on a monthly basis during DP0.1 to encourage users to adapt to using software that is in active development, and to benefit from the bug fixes and updates made by Rubin staff.
Older images will remain accessible to users.

RSP users who are doing a lot of image processing might need to select a large server, and those who are working with small subsets of catalog data can use a small server.

**Start the Server:**
Pressing the orange start button to start the server returns this page with a blue progress bar.

.. figure:: /_static/RSP_NB_progress_bar.png
    :width: 400
    :name: RSP_NB_progress_bar

    Be patient. Sometimes it takes a couple of minutes to start a server.

**JupyterLab Navigation:**
The JupyterLab landing page in the figure below is the launch pad for all JupyterLab functionality (e.g., Notebook, Terminal).
Return to this launch pad at any time by clicking the plus symbol at upper left.
For DP0.1, most users will prefer using the Notebook or Terminal, but there is also a Python Console available.
In order to duplicate catalog queries executed in the Portal, re-execute the query using the TAP client available in the Notebook

.. figure:: /_static/RSP_NB_launcher_options.png
    :width: 400
    :name: RSP_NB_launcher_options

    The JupyterLab landing page from which several tools can be launched and the file system can be browsed (left sidebar).

In the very left-most vertical sidebar of icons, the top icon is a file folder, and that is the default view.
The left sidebar lists folders in the user's home directory (e.g., DATA, WORK, and notebooks).
Launching a terminal (the default is a linux bash terminal) and using the command "ls" will return the same list.
Navigate the file system and open files by double-clicking on folders and files in the left sidebar.
All users will find a set of tutorial notebooks provided in the notebooks directory (:ref:`Examples-DP0-1-Notebooks`).
Jupyter Notebooks can be identified by their suffix ".ipynb". 

**Using a Terminal:**
The DP0.1 data sets and the LSST Science Pipelines tools can both be accessed from the command line of a terminal.
As described in the default message that appears in all newly-launched terminals, to create a Rubin Observatory environment in a terminal session and set up the full set of packages, users must first execute:

.. code-block:: bash

   source ${LOADSTACK}
   setup lsst_distrib 

For example, to query and retrieve DP0.1 data sets using the Butler (see below), command-line tools are available as documented `here <https://pipelines.lsst.io/v/weekly/modules/lsst.daf.butler/scripts/butler.html>`_.
Type ``butler --help`` in any terminal to see a list of available butler functionality.

**Safely Log Out of JupyterLab:**
Use the File item in the top menu bar.
To safely shut down a Notebook, choose Close and Shutdown Notebook.
To safely shut down a JupyterLab server and log out of the RSP, choose Save all, Exit, and Log Out.
We recomend you log out every time you are finished with a session in order to both preserve resources for other users and to ensure you re-enter the RSP in a known state every time.


.. _NB-Intro-Use-A-NB:

How to Use a Jupyter Notebook
=============================

The best way to learn how to use a Jupyter Notebook is to open the first of the tutorial notebooks which are provided in all users' home directories, and also available in the `tutorial-notebooks <https://github.com/rubin-dp0/tutorial-notebooks>`_ repository in the ``rubin-dp0`` GitHub Organization (see also :ref:`Examples-DP0-1-Notebooks`). 

**Executing code in a Notebook:**
Jupyter notebooks provide "cells" within which you type either Python code or markdown language (for formatted text).
Choose the cell to execute by clicking in it with your mouse (the cursor must be in the desired cell).
Hold down the `shift` key and press either `enter` or `return` (depending on your keyboard type), and the contents of the cell will be executed.
If the cell type is code, and the cell contains python code, the code will be executed.
If the cell type is markdown, then it will be rendered upon execution to yield nicely formatted text.
(For some handy markdown tips, see `this blog post <https://medium.com/analytics-vidhya/the-ultimate-markdown-guide-for-jupyter-notebook-d5e5abf728fd>`_ or the `relevant section from the JupyterLab documentation <https://jupyter-notebook.readthedocs.io/en/latest/examples/Notebook/Working%20With%20Markdown%20Cells.html#Markdown-Cells>`_). 

.. figure:: /_static/notebook.png
    :name: notebook_aspect

    An example of what users see in the Notebook Aspect. The left panel is a file tree from which you can access your personal files, and which will come pre-populated with a handful of tutorial notebooks that users can execute on their own. The largest panel is the Jupyter notebook, where markdown and code can be entered and executed. You can also see that one can have multiple notebooks open in separate tabs.

**What is a kernel?**
In the RSP Notebook Aspect, your notebooks will be operating in a kernel that has access to the full Rubin Science Pipelines, including the "Butler" (see below) that will be your main access tool to extract images and catalogs from the DP0.1 data.
Many standard Python libraries and modules will be available, and users can `install <https://nb.lsst.io/environment/python.html>`_ additional Python tools they wish to use.

**Is all the code in Python?**
Yes, the RSP Notebook Aspect will only have python environments for DP0.
To access DP0.1 data from the Notebook Aspect, users will need to use Python commands and code.
Much of the LSST Science Pipelines code is in Python, and the DP0 :ref:`Examples-DP0-1-Notebooks` use Python as well.
These tutorials contain executable examples of the commands required to access and analyze data.
All DP0 delegates should feel free to copy and paste from the provided tutorials.
Anyone new to Python and looking to learn more might benefit from this `Python for Beginners <https://www.python.org/about/gettingstarted>`_ website (which includes links to tutorial in a variety of languages).
Web searches for "python *(thing you want to do)*" are usually pretty successful too. 

**What is the Butler?**
The Butler is a middleware component of the Data Management System (DMS) for persisting and retrieving datasets from the DP0.1 data repository.
The only way to access DP0.1 images is via the Butler from a Jupyter Notebook.
The third generation "Gen3" Butler is the version being used for DP0.1.
Full `Butler documentation <https://pipelines.lsst.io/modules/lsst.daf.butler/index.html>`_ is available, and one of the :ref:`Examples-DP0-1-Notebooks` focuses on Butler use as well. 

**Where to get support with using DP0 Notebooks.**
Keep in mind that if you are not experienced at accessing data via Jupyter notebooks, or using a Science Platform more generally, you are not alone!
Most of the DP0 delegates are new to this environment, and all of your questions and feedback will help us improve both the documentation and the tools.
The `DP0 Delegate Homepage <https://dp0-1.lsst.io>`_ provides information about the biweekly :ref:`Delegate-Homepage-DP0-Delegate-Assemblies` which will feature live tutorials and question-and-answer time, and about :ref:`Delegate-Homepage-Getting-Support` at any time via the `Rubin Observatory Community forum <https://community.lsst.org/>`_. 

**JupyterLab Tips and Tricks**
The file broswer was mentioned before and is a handy way to navigate your user home space.
However, it does not allow you to navigate to e.g. the shared data space.
One way to make other spaces available in the file browser is to create a sympolic link using the Terminal to the desired space somewhere in your home area.

You can have multiple notebooks and terminals open in your viewer at a time.
This is very handy, but you can also arrange both notebooks and terminals next to or on top of each other by dragging the notebook or terminal around by the top bar.
Arranging the windows can be convenient when working in both a terminal and notebook at the same time, or when using another notebook as a reference.


.. _NB-Intro-Other_Docs:

Additional RSP Notebook Documentation
=====================================

Additional documentation for the RSP Notebook Aspect is available at `nb.lsst.io <https://nb.lsst.io/>`_.

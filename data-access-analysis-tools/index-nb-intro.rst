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

**THIS PAGE IS A DRAFT**

| Provide instructions for:
| - how to login/logout
| - how to select, start, and stop a server
| - where to find example notebooks
| - available types of processing (i.e., no batch)
| - how to scale algorithm performance to ops-era RSP

Include DP0.1 specific information. No need to repeat what is already in the :ref:`Data-Access-Analysis-Tools-RSP-Warnings`.

When you log into the Notebook Aspect, you will be taken to a JupyterLab environment from which you can create notebooks and execute Python code to perform actions on DP0.1 data products. The Notebook Aspect will provide some limited command-line access via a terminal, but most data access will be through notebooks. Jupyter notebooks provide "cells" within which you type either Python code or markdown. When you execute the cell (by either typing _Return_ while simultaneously holding down the _Shift_ key, or by clicking a button), the contents of the cell will be executed. If you typed Python code in the cell, then the code will be executed. If you entered markdown, then it will be rendered upon execution to yield nicely formatted text (for some handy markdown tips, see `this blog post <https://medium.com/analytics-vidhya/the-ultimate-markdown-guide-for-jupyter-notebook-d5e5abf728fd>`_ or the `relevant section from the JupyterLab documentation <https://jupyter-notebook.readthedocs.io/en/latest/examples/Notebook/Working%20With%20Markdown%20Cells.html#Markdown-Cells>`_). 

In the RSP Notebook Aspect, your notebooks will be operating in a kernel that has access to the full Rubin Science Pipelines, including the "Butler" (ADD SOME LINK/REFERENCE?) that will be your main access tool to extract images and catalogs from the DP0.1 data. Many standard Python libraries and modules will be available, and users can install additional Python tools they wish to use. In DP0.1, the Notebook Aspect will not offer access to queries from the :ref:`Tools-RSP-Portal`. 

To access DP0.1 data from the Notebook Aspect, users will need to use Python commands and code. We have provided many tutorial notebooks to help you get started. One feature of Jupyter notebooks is that these tutorials are not just text that you read, but contain executable examples of the commands required to access and analyze data. Thus they are a resource not only for learning how to use Rubin tools and science pipelines, but can serve as "seeds" from which you can borrow lines of code and alter them to suit your purposes. Because some facility with programming -- and in particular with Python -- will be necessary to make use of the Notebook Aspect, we recommend that users who are unfamiliar with Python learn some basics. There are countless resources on the internet to help you learn Python -- here are a few that we recommend:

LINKS TO PYTHON BASICS

If you are not experienced at accessing data via Jupyter notebooks, or using a Science Platform more generally, you are not alone. The `Rubin Observatory Community forum <https://community.lsst.org/>`_ provides a searchable, community-based discussion platform that you can use as a resource to ask questions of the worldwide Rubin user community, to share your own tips and analyses, and discuss all aspects of Rubin Observatory, including using the RSP and the Rubin Science Pipelines, understanding the data products, and discussing Rubin-related science.

.. figure:: /_static/notebook.png
    :name: notebook_aspect

    An example of what users see in the Notebook Aspect. The left panel is a file tree from which you can access your personal files, and which will come pre-populated with a handful of tutorial notebooks that users can execute on their own. The largest panel is the Jupyter notebook, where markdown and code can be entered and executed. You can also see that one can have multiple notebooks open in separate tabs.

.. For the Notebook Aspect, only python notebooks and the terminal interface are supported, and RSP users will not be able to access their Portal queries from the Notebook Aspect for DP0.1. In DP0.1 the Notebook Aspect of the RSP will offer image access via the Butler (a middleware component of the DMS for persisting and retrieving image datasets) through a python interface in the Notebook Aspect.

For more information on the RSP Notebook Aspect, see https://nb.lsst.io/.


*MLG notes: start with an overview of what is Jupyter Hub. For the Notebook aspect, only python notebooks and the terminal interface are supported, and RSP users will not be able to access their Portal queries from the Notebook aspect for DP0.1. In DP0.1 the Notebook Aspect of the RSP will offer image access via the Butler (a middleware component of the DMS for persisting and retrieving image datasets) through a python interface in the Notebook aspect.*

 

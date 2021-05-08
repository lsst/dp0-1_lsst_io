.. Review the README on instructions to contribute.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
	- If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name"  -- Spaces should be replaced by hyphens.
.. _Data-Access-Analysis-Tools:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

##############################
Data Access and Analysis Tools
##############################

.. This section should provide a brief, top-level description of the page.

This page includes the various tools to access and analyze the data products in DP0.1.

.. _Data-Access-Analysis-Tools-RSP:

Rubin Science Platform (RSP)
============================

This section includes information on using the RSP.

.. _Tools-RSP-Notebook:

Notebook aspect
---------------

The Notebook aspect of the RSP provides an environment from which users can access and manipulate Rubin data products on the same machines where those data products reside (i.e., "next-to-the-data"; no downloading of data to your local machine). In particular, the Notebook aspect offers Python-based access to DP0.1 data products via a custom implementation of web-based JupyterLab notebooks. 

The Notebook aspect is built on JupyterLab; see the extensive `documentation of JupyterLab <https://jupyterlab.readthedocs.io/en/stable/index.html>`_ for details. Within the RSP Notebook aspect, you will be able to query Rubin data, extract images and catalogs of many different types, manipulate and display images, interact with catalogs, and most other actions you can imagine performing with Python on astronomical images and catalogs.

Give a little more into to Jupyter (notebooks), with links for how to use it

Note that you will need to use Python -- offer some resources for beginners?

SHOW AN IMAGE ILLUSTRATING WHAT THE NOTEBOOK ASPECT LOOKS LIKE?

For the Notebook aspect, only python notebooks and the terminal interface are supported, and RSP users will not be able to access their Portal queries from the Notebook aspect for DP0.1. In DP0.1 the Notebook Aspect of the RSP will offer image access via the Butler (a middleware component of the DMS for persisting and retrieving image datasets) through a python interface in the Notebook aspect.

The stack is already loaded/set up. Different stack versions are accessible.

Provides direct access to data products, butler, etc.

This section includes information on using notebooks in the RSP.

Link to https://nb.lsst.io/ ?

.. _Tools-RSP-Portal:

Portal aspect
-------------

This section includes information on using the portal for the RSP.

.. _Data-Access-Analysis-Tools-TAP:

Table Access Protocol (TAP) service
===================================

This page includes information for accessing and basic utilization of the Table Access Protocol (TAP) service.

.. _Data-Access-Analysis-Tools-Data-Processing:

Data processing tools
=====================

This section includes information on tools used for data processing.

.. _Tools-LSST-Science-Pipelines:

LSST Science Pipelines
----------------------

This section includes information on the LSST Science Pipelines.

See https://pipelines.lsst.io/ for in-depth information.

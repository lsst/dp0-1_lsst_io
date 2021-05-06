.. Review the README on instructions to contribute.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
	- If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name"  -- Spaces should be replaced by hyphens.
.. _Data-Products-DP0-1-Data-Products:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

###################
DP0.1 Data Products
###################

.. This section should provide a brief, top-level description of the page.

This page includes an overview of information about the data products provided in DP0.1.

.. _DP0-1-Data-Products-Introduction:

Introduction to DP0.1 data set
==============================

DP0.1 data products derived from from the `Dark Energy Science Collaboration (DESC) Data Challenge 2 (DC2) <https://arxiv.org/abs/2010.05926>`__. DESC DC2 generated simulated imaging data using `imSim <https://github.com/LSSTDESC/imSim>`__ and processed those simulated images through the v19 of the LSST Science Pipelines.

.. _DP0-1-Data-Products-Introduction-Specifications:

DP0.1 data products specifications
----------------------------------

This section includes specifications for the data products provided in DP0.1.

.. _DP0-1-Data-Products-Introduction-Limitations:

DP0.1 data products limitations
-------------------------------

This section includes limitations for the data products provided in DP0.1.
DP0.1 will only include simulated data from DESC DC2.

.. _DP0-1-Data-Products-DPDD:

Data products definition documentation (DPDD) overview
======================================================

This section includes the data product definitions in DP0.1.

Note that later DPs/DRs will follow the `Rubin Observatory DPDD <https://ls.st/dpdd>`__.

.. _Data-Products-DP0-1-DPDD-Data-Model-Format:

Data model format
-----------------

This section includes information on the data model format.

.. _Data-Products-DP0-1-DPDD-Catalogs:

Catalogs
--------

This section includes information on the catalogs that contain the data products.

.. _DP0-1-Data-Products-Data-Processing:

Data processing
===============

This section includes information about data processing.

.. toctree::
    :maxdepth: 1
    :glob:
    :titlesonly:

    data-processing/index

.. _DP0-1-Data-Products-Visualization:

Visualization
=============

This section includes information about data visualization.

.. _DP0-1-Data-Products-User-Generated:

User Generated Data Products and Processing
===========================================

This section includes information on user generated data products and user generated data processing.

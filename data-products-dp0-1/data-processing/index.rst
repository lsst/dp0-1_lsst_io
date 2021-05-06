.. Review the README on instructions to contribute.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
	- If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name"  -- Spaces should be replaced by hyphens.
.. _Data-Processing-Overview:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

########################
Data Processing Overview
########################

.. This section should provide a brief, top-level description of the page.

This page includes an overview of how data is processed in DP0.1.
The subject is separated into image processing and post-image processing.

.. toctree::
    :maxdepth: 2
    :glob:
    :titlesonly:

    image-processing
..  quality-assessment-validation


.. _Data-Processing-Image-Simulation:

Image simulation
================

The DESC DC2 image simulations are described in `Section 6 <https://arxiv.org/pdf/2010.05926.pdf#page=19>`_ of the `DC2 Paper <https://arxiv.org/pdf/2010.05926.pdf>`_. Briefly, DP0.1 consists of simulated LSST images generated using the `imSim <https://github.com/LSSTDESC/imSim>`_ software, a modular Python code that calls the GalSim software library (Rowe et al. 2015) for astronomical object rendering and is run in the LSST Science Pipelines and LSST Simulation Framework software environment (Connolly et al. 2014). The LSST software libraries provide the telescope and hardware-specific information necessary to simulate the exposure, such as pixel coordinates on the focal plane, telescope filter characteristics, and the brightness of the sky. Using that description of LSSTCam, imSim produces output files that simulate the pixel data after readout. While imSim includes many realistic aspects of the LSST imaging (e.g., CCD geometry, electronic readout, cosmic rays, and bleed trails), there are some aspects such as scattered and reflected light from bright objects that are not included.


.. _Data-Processing-Image-Processing:

Image processing
================

The section includes information on how images are processed.

.. toctree::
    :maxdepth: 2
    :glob:

    image-processing

.. _Data-Processing-Post-Image-Processing:

Post-image processing
=====================

This section includes information on how image data is processed.

.. _Data-Processing-Source-Detection:

Source detection
----------------

This section includes information on source detection.

.. _Data-Processing-Deblend:

Deblending
----------

This section includes information on deblending.

.. _Data-Processing-Measurement:

Measurement
-----------

This section includes information on measurement.

.. _Data-Processing-Data-Quality-Validation:

Data quality assessment and validation
--------------------------------------

This section includes information on how quality assessment and validation is performed on image data.

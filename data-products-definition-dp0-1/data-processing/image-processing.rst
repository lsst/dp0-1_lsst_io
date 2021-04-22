.. Review the README on instructions to contribute.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
	- If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name"  -- Spaces should be replaced by hyphens.
.. _Data-Processing-Image-Processing-Overview:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

#########################
Image Processing Overview
#########################

.. This section should provide a brief, top-level description of the page.

This page includes an overview of how images are processed.

.. _Image-Processing-Overview-Raw-Images:

.. Raw images
.. ==========

Simulations for DP0.1
=====================

DESC DC2 simulated data was used as the raw data in DP0.1, untainted by instrument signatures.

.. _Image-Processing-Overview-Calibrations:

Calibrations of Raw Images
==========================

This section includes information on calibration processing to remove instrument signature.

.. _Image-Processing-Overview-Quality-Validation:

Image Quality Assessment and Validation
=======================================

This section includes information on how quality assessment and validation is preformed during the image processing stage.

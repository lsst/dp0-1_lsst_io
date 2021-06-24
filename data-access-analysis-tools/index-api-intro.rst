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


.. _Data-Access-Analysis-Tools-API-Intro:

#####################################
Introduction to the RSP API Aspect
#####################################

During DP0.1, only the TAP (Table Access Protocol) service will be available. The TAP service. Additional IVOA standards that we expect to support in futere include SCS for simple catalog searches, SIAv2 for image searches, SODA for image cutouts and mosaics, and VOSpace (in addition to WebDAV) for access to user files. The API Aspect of the RSP is very powerful and will eventually allow for federation with other astronomical archives, bringing added value to the LSST dataset.

.. _Data-Access-Analysis-Tools-TAP:

The Table Access Protocol (TAP) service
=======================================

This page includes information for accessing and basic utilization of the Table Access Protocol (TAP) service.

*(MLG Note: Describe how TAP is used in the Portal and also in Notebooks. Are there any TAP service limitations during DP0.1? If so mention here and add details to RSP Usage Hazards page.)*
(default) or ADQL.
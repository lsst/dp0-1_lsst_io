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

On the the main landing page at `data.lsst.cloud <https://data.lsst.cloud>`_ there is an "APIs" panel however this is not yet active for DP0. The only Web API provided for DP0.1 is a TAP service for catalog access via the Portal and Notebook Aspects. Image access is not yet supported via TAP. Other IVOA standard APIs that we expect to support in the future include SCS for simple catalog searches, SIAv2 for image searches, SODA for image cutouts and mosaics, and VOSpace (in addition to WebDAV) for access to user files.

.. _Data-Access-Analysis-Tools-TAP:

The Table Access Protocol (TAP) service
=======================================

Use of the TAP service to query catalogs via the Portal is described in :ref:`Data-Access-Analysis-Tools-Portal-Intro`.

In the Notebook Aspect, a TAP service is instantiated in a python notebook and used to execute an ADQL query and return a result set. A set of utilites are provided to get a TAP service instance.

.. code-block:: python

   from rubin_jupyter_utils.lab.notebook import get_tap_service, retrieve_query
   service = get_tap_service()
   query = "SELECT TOP 100 * FROM dp01_dc2_catalogs.forced_photometry"
   results = service.search(query)
   results.to_table().show_in_notebook()

The tutorial notebook "Introduction to Jupyter Notebooks for Data Preview 0" demonstrates how to use the TAP service programatically from a python notebook.

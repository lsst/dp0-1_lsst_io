.. Review the README on instructions to contribute.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
	- If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name"  -- Spaces should be replaced by hyphens.
.. _Rubin-Observatory-Documentation-DP0-1:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

####################################################################
Vera C. Rubin Observatory Documentation for Data Preview 0.1 (DP0.1)
####################################################################

.. This section should provide a brief, top-level description of the page.

.. Important::

    This documentation area is under heavy development and only in the very early stages of design.
    It should not be used nor consulted for a place of information at this time.

This documentation site provides information to users for the Vera C. Rubin Observatory Data Preview 0.1 (DP0.1).

.. toctree::
    :maxdepth: 2
    :glob:
    :titlesonly:

.. _Rubin-Observatory-Documentation-DP0-1-Introduction:

Introduction to Data Preview 0.1
================================

The Rubin Observatory DP0.1 will make simulated Legacy Survey of Space and Time (LSST)-like data products
available in the Rubin Science Platform (RSP) to Rubin Observatory Operations staff and DP0 Delegates.

Various definitions are provided on the `Rubin Observatory Glossary & Acronyms webpage <https://www.lsst.org/scientists/glossary-acronyms>`__

.. _Rubin-Observatory-Documentation-DP0-1-Delegate-Resources:

DP0 Delegate resources
======================

DP0 Delegates are data rights holders that will represent the broad science community as learners, testers, and providers of feedback.

.. toctree::
    :maxdepth: 2
    :glob:

    dp0-delegate-resources/index

.. _Rubin-Observatory-Documentation-DP0-1-Data-Products:

DP0.1 data products
===================

This section includes information on the data products in DP0.1.

.. toctree::
    :maxdepth: 2
    :glob:

    data-products-dp0-1/index

.. _Rubin-Observatory-Documentation-DP0-1-Data-Access-Analysis-Tools:

DP0.1 data access & analysis tools
==================================

This section includes information on the tools to access and analyze the data products in DP0.1.

.. toctree::
    :maxdepth: 2
    :glob:

    data-access-analysis-tools/index

.. _Rubin-Observatory-Documentation-DP0-1-Tutorials-Examples:

Tutorials & examples
====================

Examples of accessing or processing data products are separated from other locations in the repository to provide a single location of all examples.
Using reST syntax, the examples can be reproduced in other locations on this site by using the ``include`` directive.

.. toctree::
    :maxdepth: 2
    :glob:
    :titlesonly:

    tutorials-examples/index

.. _Rubin-Observatory-Documentation-DP0-1-Documentation-Project-Information:

Documentation project information
=================================

This section includes information on the documentation project, including how to contribute.

.. toctree::
    :maxdepth: 2
    :glob:
    :titlesonly:

    project/index

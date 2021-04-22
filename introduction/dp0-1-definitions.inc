.. Review the README on instructions to contribute.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
	- If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name"  -- Spaces should be replaced by hyphens.
.. _Introduction-Definitions-DP0-1:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

.. This file does not contain a title so it can match formatting in another location (introduction/index.rst).
.. title:: Definitions for DP0.1
.. #####################
.. Definitions for DP0.1
.. #####################

.. This section should provide a brief, top-level description of the page.

.. _Definitions-DP0-1-Data-Products:

Definitions of data products
----------------------------

The following definitions are related to the data products.

Data Product Definition Document (DPDD)
    Document defining all data products and tables.

Data Previews (DP)
    A preview of Data Release data products, provided to Rubin Observatory data rights holders.

Data Release (DR)
    The approximately annual reprocessing of all LSST data, and the installation of the resulting data products in the LSST Data Access Centers.

Prompt Data Products
    Prompt Data Products are generated continuously based on the image stream from the telescope by the Prompt Processing system. They include low-latency alerts on transient and variable sources, as well as a variety of image data products and source catalogs. Note that Prompt Data Products are not included in DP0.1.

Data Preview 0 (DP0) Delegate
    DP0 Delegates are...

User Generated Data Product & User Generated Processing Pipelines
    The products of User Generated Processing pipelines. The User Generated Processing Pipelines are any (re)processing of LSST data performed by a user, with either custom pipelines or reconfigured LSST software. These products and pipelines will originate from the community, including project teams.

Standard Visit
    A single observation of a LSST field comprised of two 15 second "snap" exposures that are immediately combined.

Processed Visit Image
    A fully-qualified LSST image from a single visit that includes the science pixel array and concomitant data including a quality mask and a variance array, in addition to a PSF characterization and metadata (including calibration metadata) about the image. It is stored with the background already subtracted.

Object
    Refers to any astronomical object, such as a star, galaxy, or other physical entity. Objects may also be included in a sub-category, e.g., comets or asteroids are also Moving Objects or Solar System Objects. One of the DP/DR data products is a table of Objects detected by LSST which can be static, or change brightness or position with time.

Source
    A single detection of an Object in an image, the characteristics for which are stored in the Source Catalog of the DR/DP database. The association of Sources that are non-moving lead to Objects; the association of moving Sources leads to Solar System Objects. (Note that in non-Rubin Observatory usage "source" is often used for what Rubin Observatory calls an Object.)

Difference Image
    Refers to the result formed from the pixel-by-pixel difference of two images of the sky, after warping to the same pixel grid, scaling to the same photometric response, matching to the same PSF shape, and applying a correction for Differential Chromatic Refraction. The pixels in a difference thus formed should be zero (apart from noise) except for sources that are new, or have changed in brightness or position. In the LSST context, the difference is generally taken between a visit image and template.

.. _Definitions-DP0-1-Data-Access:

Definitions of data access
--------------------------

The following definitions are related to data access and data processing.

Data Access Centers (DACs)
    Part of the LSST Data Management System, the US and Chilean DACs will provide authorized access to the released LSST data products, software such as the Rubin Science Platform, and computational resources for data analysis. The US DAC or Interim Data Facility (IDF) also includes a service for distributing bulk data on daily and annual (Data Release) timescales to partner institutions, collaborations, and LSST Education and Public Outreach (EPO).

Rubin Science Platform (RSP)
    A set of integrated web applications and services deployed at the LSST Data Access Centers through which the scientific community will access, visualize, and perform next-to-the-data analysis of the LSST data products.

LSST Science Pipelines
    The library of software components and the algorithms and processing pipelines assembled from them that are being developed by Data Management to generate science-ready data products from images. The Pipelines may be executed at scale as part of LSST Prompt or Data Release processing, or pieces of them may be used in a standalone mode or executed through the LSST Science Platform. The Science Pipelines are one component of the LSST Software Stack.

Table Access Protocol (TAP) Service
    Table Access Protocol to access data products at DACs.


Co-addition (CoAdd) Image
    An image that is the combination of multiple input images. The inputs are aligned to a common projection and pixel grid, corrected to the same photometric scale and zero-point, with bad pixels and artifacts rejected. (Image PSFs may also be matched prior to co-addition.) Coadd images have had non-astrophysical background removed.

Deblend
    Deblending is the act of inferring the intensity profiles of two or more overlapping sources from a single footprint within an image. Source footprints may overlap in crowded fields, or where the astrophysical phenomena intrinsically overlap (e.g., a supernova embedded in an external galaxy), or by spatial co-incidence (e.g., an asteroid passing in front of a star). Deblending may make use of a priori information from images (e.g., deep CoAdds or visit images obtained in good seeing), from catalogs, or from models. A 'deblend' is commonly referred to in terms of 'parent' (total) and 'child' (component) objects.

.. _Definitions-DP0-1-Hardware:

Definitions of Rubin Observatory telescope
------------------------------------------

The following definitions are related to the Rubin Observatory telescope and hardware-related properties.

Point Spread Function (PSF)
    The distribution of intensity on a sensor (or image) originating from an unresolved point-source (i.e., a star). Often the PSF is not the same Airy shape as would be expected from a finite-aperture optical system, owing primarily to atmospheric effects and imperfections in the optical system and the detector.

Charge-Coupled Device (CCD)
    Commonly referred to as the sensors, CCDs are particular kind of solid-state sensor for detecting optical-band photons. It is composed of a 2-D array of pixels, and one or more read-out amplifiers.

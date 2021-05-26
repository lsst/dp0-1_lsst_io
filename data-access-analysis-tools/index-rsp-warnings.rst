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


.. _Data-Access-Analysis-Tools-RSP-Warnings:

#################
RSP Usage Hazards
#################

**THIS PAGE IS A DRAFT, NEED TO CONSULT WITH RDP TEAM**

During DP0, everyone is responsible for their own safe usage of the shared-risk, in-development version of the RSP at the IDF.

When in doubt, post questions in `the "Support -- Data Preview 0" category <https://community.lsst.org/c/support/dp0/49>`__ in the Community Forum. 


Data Sharing and Safeguards
---------------------------

A number of safeguards for avoiding uptime or temporary data loss will not be present -- the resources are still in “trusted user” mode.

Do we have shared data sets? We did on the NCSA RSP.  Do we have access to other users’ home directories? 

Need some warnings about per-user data quota. 

Need some warnings about shared-write area.



RSP Compute Performance
-----------------------

Performance during DP0 may not reflect the performance of the final system (see also Q4), and the resources made available to DP0 delegates may not reflect the final user quotas of the operations-era RSP.

How about running cron jobs? What about abusing resources?

Testing how algorithms will scale: No access to user batch or parallelisation are available in DP0. Resources provided as part of DP0.1 are limited and meaningful scalability testing of algorithms is not practical. 



Butler-Related Warnings
-----------------------

For DP0.1 or until we have a client/server Butler and signed URLs (DMTN-169,DMTN-176), all users share full read/write without restriction.  Since there is no individual access control, absolutely no use direct sql access will be allowed to any butler registry database.

User-added data in DP0.1’s butler repo will not be migrated to DP0.2’s butler repo. 

Accessing data directly using the LSST Science Pipeline Butler interface: Limited processing capability will be available as part of DP0. All delegates will share access to a common Butler ('Gen3') repository. DP0.1 provided data products in the repository will be read-only. Users may create their own data products and collections thereof in the repository, which will be available to all other delegates.




RSP Aspect Functionality Limits
-------------------------------

Some major usability features will not be available, such as support for user database tables; support for parallelized or batch computation; the ability to sync files between RSP accounts and personal devices; and the ability to manage the sharing of data within private groups.

Users installing code: DP0 delegates will be able to add software that can be installed without privileges into their own homespace (eg. via pip install --user) for their personal use to the extent that their quota allows.


Bulk Downloads are not Supported
--------------------------------

Bulk downloads: No, bulk data downloads from the RSP specifically, or the IDF in general, are not supported during DP0. This is because bulk download services are not yet in production, and because the major goals of DP0 are to allow Rubin Observatory to evaluate how the community uses the services, and for the community to become familiar with the RSP environment. Note that DESC has made the DC2 DR6 catalogs publicly available via: https://lsstdesc-portal.nersc.gov/.



Stuff That We Know Does Not Work
--------------------------------

*(Here is space for a list of known issues and stuff that doesn’t work in , e.g., the portal. Especially the portal. To avoid people thinking “This is too hard to figure out” when really it’s just a feature that’s not done.)*

ADQL functionality that does not yet work: 
AREA
BOX
COORDSYS
COORD1
COORD2
INTERSECTS

The only coordinate system currently supported is 'ICRS'.


MLG Did Not Know The Category
-----------------------------

The DP0.1 repo at IDF is one older version of the /repo/dc2 repo at NCSA.  New updates in NCSA’s repo are not ported to IDF.  Note that the goals of the two repos are different: the IDF’s repo is frozen like a data release; the NCSA’s repo is evolving to meet developer need. 

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

###############
RSP Usage Risks
###############

**THIS PAGE IS A DRAFT, NEED TO CONSULT WITH RDP TEAM**

During DP0, everyone is responsible for their own safe usage of the shared-risk, in-development version of the RSP at the IDF.

When in doubt, post questions in `the "Support -- Data Preview 0" category <https://community.lsst.org/c/support/dp0/49>`__ in the Community Forum. 


Data Sharing and Safeguards
---------------------------

A number of safeguards for avoiding uptime or temporary data loss will not be present -- the resources are still in “trusted user” mode.

The fact that anyone could PRUNE, there's no provenance for destruction, and how to avoid accidental wipe-outs.

Do we have shared data sets? We did on the NCSA RSP. (HFC: what kinds of shared datasets are you thinking here? The only data set we officially provide is the DP0.1 data set. There are a lot more data on NCSA's filesystem and we never intended to have them on IDF.)

Do we have access to other users’ home directories?

Need some warnings about per-user data quota. 

Need some warnings about shared-write area.



RSP Compute Performance
-----------------------

Performance during DP0 may not reflect the performance of the final system (see also Q4), and the resources made available to DP0 delegates may not reflect the final user quotas of the operations-era RSP.

How about running cron jobs? (HFC: I don't think we would let delegates run cron. But what is the motivation of wanting to run cron?)

What about abusing resources?

Testing how algorithms will scale: No access to user batch or parallelisation are available in DP0. Resources provided as part of DP0.1 are limited and meaningful scalability testing of algorithms is not practical. 



Butler-Related Warnings
-----------------------

For DP0.1 or until we have a client/server Butler and signed URLs (DMTN-169,DMTN-176), all users share full read/write without restriction.  Since there is no individual access control, absolutely no use direct sql access will be allowed to any butler registry database.
Delegates should only access the Butler repository using standard Butler APIs provided in the Rubin software stack.

User-added data in DP0.1’s butler repo will not be migrated to DP0.2’s butler repo. 

Accessing data directly using the LSST Science Pipeline Butler interface: Limited processing capability will be available as part of DP0. All delegates will share access to a common Butler ('Gen3') repository.
The butler repository is a shared read/write space for all delegates, and there is no per-user ownership of any data inside the butler repo. Therefore, it’s possible for one delegate to delete another delegate’s user-added datasets in the butler repo. For running pipetask with the DP0.1 repo, we strongly encourage delegates to follow the naming convention as documented in `DMTN-167 <https://dmtn-167.lsst.io/>` and only write to their own ``u/<user>/*`` collections. Although the convention is not enforced, it can reduce the chance of conflicts. We will **not** restore user-added data for delegates. Currently the butler repo is a shared-risk space and please plan for possible loss of user-added data. Project-loaded data are read only and protected.  We will address these issues in a future release before the operations starts.



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
(HFC: This is only to avoid confusion for those delegates who are also in the Stack Club or have access to the LSST infrastructure at NCSA.)

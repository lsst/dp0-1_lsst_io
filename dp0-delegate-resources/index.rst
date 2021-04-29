.. Review the README on instructions to contribute.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
	- If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name"  -- Spaces should be replaced by hyphens.
.. _DP0-Delegate-Resources-DP0-Delegate-Homepage:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.



#####################
DP0 Delegate Homepage
#####################

.. This section should provide a brief, top-level description of the page.

This page includes the guidelines, resources, and activities for DP0 Delegates.

**"DP0 delegate"** is the term for the 300 scientists and students who will have accounts in the Rubin Science Platform (RSP) at the Interim Data Facility (IDF) during Data Preview 0 (DP0). This term has been adopted to reflect DP0 participants’ important roles of representing the broad science community as learners, testers, and providers of feedback, and of sharing the benefits of their DP0 participation with their communities as teachers and colleagues. Delegates’ DP0-related activities will be supported with resources and infrastructure (as described below). The simulated data set being used for DP0 was created by the Dark Energy Science Collaboration (DESC) as part of their second Data Challenge (DC2). 

| **Delegate Action Items Checklist**
| 1. Get one of the `RSP Accounts`_ for DP0 delegates.
| 2. Set up your account in the `Rubin Community Forum`_.
| 3. Attend one of the `DP0 Kick-Off Info Sessions`_.
| 4. Review the `Guidelines and Expectations`_ for delegates.
| 5. Consider participating in the `DP0 Delegate Assemblies`_.
| 6. Learn about `Getting Support`_ for DP0. 


.. Review content in <https://confluence.lsstcorp.org/display/LSSTOps/DP0+CE+Planning>__ for content and structure.



.. _Delegate-Homepage-RSP-Accounts:

RSP Accounts
============

**Activation:** Delegates will be contacted by Rubin staff to provide their `GitHub <http://www.github.com/>`_ username. They will then be invited to join the **XXXX Organization**, and upon accepting the invitiation, will be able to log into the RSP at the IDF at `<http://data.lsst.cloud>`_. 

*For delegates who do not already have a GitHub account:* go to `<http://www.github.com>`_ and select “sign up” in the upper right corner. For participation in DP0 it is not necessary to learn how to use git as a version control system, nor any git workflows or command line tools. GitHub will not be used for RSP account authentication/authorization during Rubin Operations, this is a DP0-specific implementation.

**Security:** RSP accounts are **not transferrable** and delegates **must not share their password** with others. 

**Deactivation:** Delegates who are no longer using their accounts and would like to relinquish it to make way for others should please submit a GitHub issue in the **XXXX Organization** to let us know, and then leave the **XXXX Organization**. (Log into GitHub, navitate to `<https://github.com/settings/organizations>`_, and click on the "Leave" button.)

**Warnings:** DP0 delegates are being given access to a *shared-risk developmental version* of the Rubin Science Platform and the accompanying documentation.

| It is essential that delegates understand that:
|  - RSP performance during DP0 is not representative of the future RSP's performance
|  - RSP compute resources during DP0 are not representative of user quotas of the operations-era RSP
|  - future RSP safegaurds to protect against, e.g., data loss, are not yet present
|  - documentation and support mechanisms are still in their very earliest versions

See also the `Guidelines and Expectations`_ for DP0 Delegates and **PLACEHOLDER LINK TO FULL LIST OF DETAILED WARNINGS**.

**Resources:** Find instructions and tutorials for DP0, DC2, and the RSP at `<dp0-1.lsst.io>`_. See also `Getting Support`_, below.



Rubin Community Forum
=====================

The `Rubin Community Forum <http://community.lsst.org>`_ is the central hub for all virtual discussions and support. It is the best place to post your questions about anything and everything related to DP0.

**Activation:** Go to `<http://community.lsst.org>`_ and create an account, if you do not already have one.

**Join the DP0 Delegates Group:** Go to `<https://community.lsst.org/groups>`_ and join "DP0 Delegates". This will ensure you have access to the the "Support -- DP0 RSP Services Issues" sub-category.

| **Find DP0-Related Contents:**
| 1. `Support - Data Preview 0 <https://community.lsst.org/c/support/dp0>`_: for all questions and discussions related to DP0. For example, use of the RSP's aspects for science, contents of the DC2 data set, delegate activities, brainstorm new investigations, show-and-tell DP0-related results, etc.
| 2. "Support - DP0 RSP Services Issues": technical Q&A and discussion about potential bugs, service outages, etc.
| 3. All topics that are `tagged with #dp0 <https://community.lsst.org/tag/dp0>`_. 



DP0 Kick-Off Info Sessions 
==========================

All delegates should please attend one of these identical sessions. One of them will be recorded and made available.

| **Contents of the Kick-Off Info Sessions:** 
| - set expectations regarding the DC2 data set and the RSP's tools
| - alert delegates to potential hazards with the shared-risk RSP in development
| - instructions for obtaining and managing accounts in the RSP and Community Forum
| - expectations and guidelines for participating in DP0
| - explanation of the delegate assemblies and motivation for attending
| - an overview of all the resources available to delegates, and how to get support
| - time for question and answer

| **Dates and Times:** (all times are US Pacific Daylight Time)
| 1. Tue Jun 29 2021, 8am
| 2. Wed Jun 30 2021, 12pm
| 3. Thu Jul 1 2021, 4pm
| 4. Tue Jul 6 2021, 12pm
| 5. Wed Jul 7 2021, 4pm
| 6. Thu Jul 8 2021, 8am

**Connection Info:** **(ADD CONNECTION INFO)**



.. _Delegate-Homepage-DP0-Delegate-Assemblies:

DP0 Delegate Assemblies
=======================

Virtual meetings that occur biweekly on Fridays, from 9am to 11am Pacific time (see `Assemblies Schedule`_, below), alternating Fridays with `Stack Club`_. Assemblies are designed for DP0 delegates but all are welcome to attend. This time slot serves North and South America and Europe. For DP0 participants from Australia and Asia, there will also be a `Third Thursday Office Hour`_ for live interaction.

| **Purpose** is for delegates to
| - learn how to use the RSP in a guided, hands-on way
| - form working groups, discuss DP0 science, do `Delegate Activities`_
| - present their DP0-related software or science results
| - get live support from Rubin staff

| **Format**
| - first hour: a "formal" presentation with Q&A, such as:
|   -- presentations about the DC2 data set
|   -- demonstrations on how to use the Portal aspect
|   -- tutorials based on Jupyter Notebooks
|   -- at first given by Rubin staff, later by delegate volunteers
| - second hour: breakout sessions for discussion, such as:
|   -- breakout rooms by science topic to discuss DP0 work
|   -- breakout rooms by RSP aspect to discuss usage
|   -- breakout rooms for grassroots DP0 working groups 
|   -- a main room to serve as "office hours" for Q&A with Rubin staff
|   -- at first facilitated by Rubin staff, later by delegate volunteers
| - all are welcome to join for one hour or both hours
| - the first hour will be recorded for those who cannot attend live

**Connection Info:**  **(ADD CONNECTION INFO)**


.. _DP0-Delegate-Programming-Assemblies:

Assemblies Schedule
-------------------

.. include:: dp0-delegate-assemblies-schedule.inc


Third Thursday Office Hour
--------------------------

We will have a DP0 office hour for the Australia and Asia timezones on the third Thursday of every month at 8am Tokyo / 9am Sydney (e.g., Wed 4pm in US Pacific Daylight Time). This will be open time for DP0 delegates to drop in, discuss their DP0-related activities with Rubin staff and with each other, and get support if needed.

| **Dates:** 
| 1. Thu July 15 2021
| 2. Thu Aug 18 2021
| 3. Thu Sep 15 2021
| 4. Thu Oct 10 2021
| 5. Thu Nov 17 2021
| 6. Thu Jan 19 2022

**Connection Info:** **(ADD CONNECTION INFO)**

 
Stack Club
----------

Stack Club is a group of LSST Science Collaboration members committed to learning how to use, and explain, the Rubin Observatory LSST Science Pipelines (colloquially called "the Stack"). The idea is that the best way to learn something is to try and teach it, and so they work collectively on creating useful tutorials featuring the Stack. Many of the `DP0 Delegate Assemblies`_ presentations will be based on tutorials developed by the Stack Club. On alternating Fridays, Stack Club meets for an open hack session. Stack Club members use the NCSA implementation of the RSP, where they also have access to the DC2 data set.

DP0 delegates are welcome to join the Friday Stack Club Zoom sessions (but DP0 Delegates should not apply to join Stack Club because that is not necessary). Stack Club meetings start with a roundtable of what people want to do or learn that day, then we work while in the same Zoom, occassionally using breakout rooms to discuss emergent topics. Often times Rubin Data Management staff join to provide support.

**Connection Info:** **(ADD CONNECTION INFO)**


.. _Delegate-Homepage-Guidelines-Expectations:

Guidelines and Expectations
===========================

**Know the hazards and limitations of working in the shared-risk developmental version of the Rubin Science Platform.** **PLACEHOLDER LINK TO FULL LIST OF DETAILED WARNINGS**

**Abide by the code of conduct.** All delegates are expected to abide by the `LSST Communications Code of Conduct <https://docushare.lsstcorp.org/docushare/dsweb/Get/Document-24920/>`_.

**Use appropriate acknowledgements and citations.** If you publish work enabled by DP0, the RSP, and/or the DESC's DC2 data set, please include: "CosmoDC2: A Synthetic Sky Catalog for Dark Energy Science with LSST" `Korytov et al (2019) <https://ui.adsabs.harvard.edu/abs/2019ApJS..245...26K/abstract>`_, “The LSST DESC DC2 Simulated Sky Survey” `arXiv:2010.05926 <https://arxiv.org/abs/2010.05926>`_, and potentially “DESC DC2 Data Release Note” `arXiv:2101.04855 <https://arxiv.org/abs/2101.04855>`_, especially if you used the Object or Truth-Match tables presented in that release note. **(PLACEHOLDER FOR ADDITIONAL PAPERS AND ACKNOWLEDGMENTS).**

**Use your RSP account!** As there are a limited number of RSP accounts for DP0, please try to make some use of your account and learn to use at least one aspect of the RSP. There is no minimum time that you're expected to spend on DP0. If you find that you are done with DP0, consider relinquishing your account so it can be offered to someone else.

**Choose a delegate activity.** Delegates are invited to take on an activity that helps to maximize the impact of DP0 with respect to the DP0 goals of testing and informing development of the RSP and preparing the scientific community to do LSST science. See `Delegate Activities`_. 

**Interact with your co-delegates.** Participate in the `Rubin Community Forum`_ and join the biweekly `DP0 Delegate Assemblies`_ as often as you can.


Delegate Activities
-------------------

The following example activities are designed to inform and improve development of the Rubin Science Platform development, or to extend and enhance the benefits of DP0 within the science community, especially beyond the limited number of DP0 participants that Rubin Observatory is able to support. 

Delegate activities are envisioned to be simple and enjoyable. They are completely voluntary and will not be tracked. Group work is encouraged, as are delegate-designed activities.

**Inform and improve the Rubin Science Platform:**

* complete one or more feedback surveys for Rubin Observatory

  * **[PLACEHOLDER LINK to a Portal use feedback form]**
  * **[PLACEHOLDER LINK to a Notebook use feedback form]**
  * **[PLACEHOLDER LINK to a API use feedback form]**
  * **[PLACEHOLDER LINK to a DP0 general feedback form]**
  
* submit bug reports via GitHub issues in the **XXXX Organization** **(PLACEHOLDER FOR LINK)**
* post new topics in the `Support - Data Preview 0 <https://community.lsst.org/c/support/dp0>'_ forum category
* communicate directly with the Users Committee **(PLACEHOLDER FOR MORE UC INFO)**
* participate in calls for user acceptance testing (UAT) **(PLACEHOLDER FOR MORE UAT INFO)**

  * work through an “RSP Test Checklist” and fill out a related form
  * test that new Notebooks run and fill out a related form

**Extend or enhance the benefits of DP0 in the science community, for example:**

* join one of the eight `LSST Science Collaborations <https://www.lsstcorporation.org/science-collaborations>`_
* participate in the `Rubin Community Forum`_'s DP0-related categories

  * openly ask questions about using the RSP or the DP0 data set
  * respond to delegates requests for assistance when possible
  * "show and tell" your DP0-related work in new topics 

* participate in the `DP0 Delegate Assemblies`_ 

  * ask questions, join the breakout discussions
  * volunteer to facilitate a breakout discussion during an assembly
  * volunteer to present the results of your DP0 work in one of the later `DP0 Delegate Assemblies`_
  * propose a long-term group project and run a delegate working group during the breakout hour

* contribute resources to the  shared **XXXX Repository**

  * create a Jupyter Notebook that uses the DC2 data set
  * create a step-by-step Portal demo that uses the DC2 data set
  * create a TAP service instructional tutorial uses the DC2 data set

* share your DP0-related work outside of DP0

  * give a seminar about Rubin Observatory and DP0 at your home institution
  * give a tutorial about your RSP/DP0 experience in your Science Collaboration
  * publish a paper on your DP0-related work
  


.. _Delegate-Homepage-Getting-Support:

Getting Support
===============

Questions about RSP accounts should be posted in the "Support -- DP0 RSP Services Issues" sub-category in the Rubin Community Forum, `Community.lsst.org <http://community.lsst.org>`_, or submitted as a GitHub issue in the **XXXX Organization**. There will also be Q&A time during the `DP0 Kick-Off Info Sessions`_ and the weekly `DP0 Delegate Assemblies`_.

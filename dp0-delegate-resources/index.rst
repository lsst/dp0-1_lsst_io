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

**"DP0 delegate"** is the term for the 300 scientists and students who will have accounts in the Rubin Science Platform (RSP) at the Interim Data Facility (IDF) during Data Preview 0 (DP0).
This term has been adopted to reflect DP0 participants’ important roles of representing the broad science community as learners, testers, and providers of feedback, and of sharing the benefits of their DP0 participation with their communities as teachers and colleagues.
Delegates’ DP0-related activities will be supported with resources and infrastructure (as described below).
The simulated data set being used for DP0 was created by the Dark Energy Science Collaboration (DESC) as part of their second Data Challenge (DC2). 

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

**Activation:** 
Delegates will be contacted by Rubin staff to provide their `GitHub <http://www.github.com/>`_ username.
They will then be invited to join the ``rubin-dp0`` GitHub Organization, and upon accepting the invitiation, will be able to log into the RSP at the Interim Data Facility (IDF; the Google Cloud) at `<http://data.lsst.cloud>`_. 

**Policies:**
RSP accounts are not transferrable and delegates must not share their password with others.
DP0 delegates are being given access to a *shared-risk developmental version* of the Rubin Science Platform and the accompanying documentation.
**Everyone is responsible for their own safe usage of the RSP** and must be familiar with this list of :ref:`Data-Access-Analysis-Tools-RSP-Warnings`, and review the `Guidelines and Expectations`_ for DP0 delegates.

**Deactivation:**
Delegates who are no longer using their accounts and would like to relinquish it to make way for others should please submit a GitHub issue in the ``rubin-dp0`` GitHub Organization to let us know, and then leave the ``rubin-dp0`` GitHub Organization.
(Log into GitHub, navitate to `<https://github.com/settings/organizations>`_, and click on the "Leave" button for the ``rubin-dp0`` Organization.)

**For delegates who need to get a GitHub account:** go to `<http://www.github.com>`_ and select “sign up” in the upper right corner.
For participation in DP0 it is not necessary to learn how to use git as a version control system, nor any of the git workflows or command line tools.
GitHub will not be used for RSP accounts during Rubin Operations, this is a DP0-specific implementation.


Rubin Community Forum
=====================

The `Rubin Community Forum <http://community.lsst.org>`_ is the central hub for all virtual discussions and support.
It is the best place to post your questions about anything and everything related to DP0.

**Accounts:** 
Go to `<http://community.lsst.org>`_ and use the "sign up" button at upper right to create an account (unless you have one already).

**Join the DP0 Delegates Group:** 
Go to `<https://community.lsst.org/groups>`_ and join "DP0 Delegates".
This will ensure you have access to the the `Support -- DP0 RSP Services Issues <https://community.lsst.org/c/support/dp0-rsp-issues>`_ category.

| **Find DP0-Related Content and Discussions:**
| 1. `Support - Data Preview 0 <https://community.lsst.org/c/support/dp0>`_: for all questions and discussions related to DP0. For example, use of the RSP's aspects for science, contents of the DC2 data set, delegate activities, brainstorm new investigations, show-and-tell DP0-related results, etc.
| 2. `Support - DP0 RSP Services Issues <https://community.lsst.org/c/support/dp0-rsp-issues>`_: technical Q&A and discussion about potential bugs, service outages, etc.
| 3. Topics `tagged with #dp0 <https://community.lsst.org/tag/dp0>`_ across all categories. 


DP0 Kick-Off Info Sessions 
==========================

All delegates should please attend one of these identical sessions.
One of them will be recorded and made available.

**Connection Info:** `ls.st/clo4989 <https://ls.st/4989>`_

| **Contents of the Kick-Off Info Sessions:** 
| - RSP and Community Forum accounts
| - RSP hazards and delegate expectations
| - resources and support for delegates
| - DP0 goals and the road to Rubin operations
| - time for question and answer

| **Dates and Times:** (all times are US Pacific Daylight Time)
| - Tue Jun 29 2021, 8am
| - Wed Jun 30 2021, 12pm
| - Thu Jul 1 2021, 4pm
| - Tue Jul 6 2021, 12pm
| - Wed Jul 7 2021, 4pm
| - Thu Jul 8 2021, 8am


.. _Delegate-Homepage-DP0-Delegate-Assemblies:

DP0 Delegate Assemblies
=======================

**Connection Info:** `https://ls.st/dp0-events<http://ls.st/dp0-events>`_

The Delegate Assemblies are live virtual meetings that occur biweekly on Fridays from 9am to 11am US Pacific time (alternating with `Stack Club`_), which will be convenient for DP0 delegates in the timezones of North and South America, Europe, and Africa.
There will also be a monthly `Third Thursday Office Hour`_ live virtual meetings at 9am Sydney time, which will be convenient for DP0 delegates in the timezones of Australia and Asia.
Everyone is welcome to attend any and all of these sessions, as they are not restricted to delegates.

The Delegate Assemblies will be split into 2 one-hour sections.
All are welcome to join for only the first or second hour, or both hours.

| **First hour: a "formal" presentation with Q&A**, such as:
|   -- hands-on demonstrations and tutorials by Rubin staff
|   -- presentations from delegates about their DP0 work
| **Second hour: breakout sessions for discussion**, such as:
|   -- grassroots DP0 science working groups and collaborative projects
|   -- in-depth discussion related to the first hour's contents
|   -- "office hours" for Q&A with Rubin staff

Everyone is welcome to propose discussion topics for the second hour, or run their own regular co-working sessions during this time.
The first five minutes of the second hour will be spent connecting people with similar interests and setting up breakout rooms.
Rubin staff will always be on hand to answer questions and provide assistance with DP0-related work during this time.

.. _DP0-Delegate-Programming-Assemblies:

Assemblies Schedule
-------------------

Rows *in italics* are tentative topics.
Please reach out to Melissa Graham with topic suggestions or to contribute presentations (direct message in the Community Forum).

.. include:: dp0-delegate-assemblies-schedule.inc


Third Thursday Office Hour
--------------------------

**Connection Info:**  `https://ls.st/dp0-events<http://ls.st/dp0-events>`_

These live virtual meetings on the third thursday of the month at 9am in Sydney Australia (which is Wed at 4pm US Pacific) will be open drop-in time for DP0 delegates.
Rubin staff will be in attendance.
There is no set agenda for these sessions, the activities will be whatever the DP0 delegates in attendance request.
For example, delegates could discuss their DP0-related analysis with Rubin staff and with each other, review the DP0 RSP tutorials together, collaborate on DP0-related science, and get support from Rubin staff as needed.

| **Dates:** 
| - Thu July 15 2021
| - Thu Aug 19 2021
| - Thu Sep 16 2021

More dates will be added to continue these office hours if they are useful to DP0 delegates in Australia and Asia.

.. | - Thu Oct 10 2021
.. | - Thu Nov 17 2021
.. | - Thu Jan 19 2022


Stack Club
----------

**Connection Info:**  `https://ls.st/dp0-events<http://ls.st/dp0-events>`_

`Stack Club <https://github.com/LSSTScienceCollaborations/StackClub>`_ is a group of LSST Science Collaboration members committed to learning how to use the Rubin Observatory LSST Science Pipelines (colloquially called "the Stack").
The idea is that the best way to learn something is to try and teach it, and so they work collectively on creating useful tutorials featuring the Stack.
Many of the `DP0 Delegate Assemblies`_ presentations will be based on tutorials developed by the Stack Club.
On alternating Fridays, Stack Club meets for an open hack session.
Stack Club members use the NCSA implementation of the RSP, where they also have access to the DC2 data set.
DP0 delegates do not need NCSA accounts because they have RSP accounts at the IDF.

DP0 delegates are welcome to join one or more `Science Collaborations <https://www.lsstcorporation.org/science-collaborations>`_ and to join the Friday Stack Club Zoom sessions.
(DP0 delegates do not need to formally join Stack Club unless they want to contribute specifically to the Stack Club's repository of tutorial notebooks).
Stack Club meetings start with a roundtable of what people want to do or learn that day, and then work proceeds as people stay connected via Zoom, with the occasional question or discussion happening.
Sometimes breakout rooms are used to discuss emergent topics.
Often times Rubin Data Management staff join to provide support.


.. _Delegate-Homepage-Guidelines-Expectations:

Guidelines and Expectations
===========================

**Understand the shared-risk basis of DP0 RSP use.** 
Delegates are responsible for their own safe usage of the RSP and must be familiar with this list of :ref:`Data-Access-Analysis-Tools-RSP-Warnings`

**Abide by the code of conduct.** 
All delegates are expected to abide by the `LSST Communications Code of Conduct <https://docushare.lsstcorp.org/docushare/dsweb/Get/Document-24920/>`_.

**Use appropriate acknowledgements and citations.** 
If you publish work enabled by DP0, the RSP, and/or the DESC's DC2 data set, please include: "CosmoDC2: A Synthetic Sky Catalog for Dark Energy Science with LSST" `Korytov et al (2019) <https://ui.adsabs.harvard.edu/abs/2019ApJS..245...26K/abstract>`_, “The LSST DESC DC2 Simulated Sky Survey” (`arXiv:2010.05926 <https://arxiv.org/abs/2010.05926>`_), and potentially “DESC DC2 Data Release Note” (`arXiv:2101.04855 <https://arxiv.org/abs/2101.04855>`_), especially if you used the Object or Truth-Match tables presented in that release note.
If you use someone else's Jupyter Notebook as a starting point for your work, please include the original creator(s) in your acknowledgements. 

**Choose a delegate activity.**
Delegates are invited to take on an activity that helps to maximize the impact of DP0 with respect to the DP0 goals of testing and informing development of the RSP and preparing the scientific community to do LSST science.
See `Suggested Delegate Activities`_. 

**Interact with your co-delegates.**
Participate in the `Rubin Community Forum`_ and join the biweekly `DP0 Delegate Assemblies`_ as often as you can.

**Use your RSP account!**
As there are a limited number of RSP accounts for DP0, please try to make some use of your account and learn to use at least one aspect of the RSP.
There is no minimum time that you're expected to spend on DP0.
If you find that you are done with DP0, consider relinquishing your account so it can be offered to someone else.


.. _Delegate-Homepage-Delegate-Activities:

Suggested Delegate Activities
=============================

All delegates are invited to take on an activity that will inform and improve development of the Rubin Science Platform development, and/or extend and enhance the benefits of DP0 within the science community, beyond the limited number of DP0 participants that Rubin Observatory is able to support.

Delegate activities are envisioned to be simple and enjoyable.
They are completely voluntary and will not be tracked.
Group work is encouraged, as are delegate-designed activities.


Inform and improve the Rubin Science Platform
---------------------------------------------

| - complete one or more feedback surveys for Rubin Observatory
|   -- *(links will be circulated when the feedback surveys are ready)*
| - submit bug reports via GitHub issues (`here <https://github.com/rubin-dp0/Support>`_; see `Getting Support`_, below)
| - post about your experiences in the `Data Preview 0 <https://community.lsst.org/c/support/dp0>`_ forum category
| - communicate directly with the Rubin RSP Users Committee
|   -- *(more information about the Users Committee is forthcoming)*

.. | - participate in calls for user acceptance testing (UAT) **(PLACEHOLDER for link to more UAT info)**
.. |   -- work through an “RSP Test Checklist” and fill out a related form **(PLACEHOLDER for link to checklist and form)**
.. |   -- test that new Notebooks run and fill out a related form **(PLACEHOLDER for link to notebooks and form)**


Extend or enhance the benefits of DP0 in the science community.
---------------------------------------------------------------

| - join one of the eight `LSST Science Collaborations <https://www.lsstcorporation.org/science-collaborations>`_
|
| - participate in the `Rubin Community Forum`_'s DP0-related categories
|   -- ask questions about using the RSP or the DP0 data set
|   -- respond to delegates requests for assistance when possible
|   -- "show and tell" your DP0-related work in new topics 
|
| - participate in the `DP0 Delegate Assemblies`_ 
|   -- ask questions, join the breakout discussions
|   -- volunteer to facilitate a breakout discussion during an assembly
|   -- volunteer to present the results of your DP0 work in one of the later `DP0 Delegate Assemblies`_
|   -- propose a long-term group project and run a delegate working group during the breakout hour
|
| - contribute tutorials to the delegates' `shared repository<https://github.com/rubin-dp0/Contributed-notebooks>`_
|   -- create a tutorial Jupyter Notebook that uses the DC2 data set
|   -- tutorials that use the Portal, TAP, or command-line are also welcome
|
| - share your DP0-related work outside of DP0
|   -- give a seminar about Rubin Observatory and DP0 at your home institution
|   -- give a tutorial about your RSP/DP0 experience in your Science Collaboration
|   -- publish a paper on your DP0-related work
  

.. _Delegate-Homepage-Getting-Support:

Getting Support
===============

**Scientific Support via the Community Forum**
Scientific support includes questions about the DC2 simulated data set, the DP0 data products, and/or the application of the LSST Science Pipelines to the DP0 data set, as well as general discussion about DP0-related scientific analyses, or DP0 policies and guidelines.
The `Support – Data Preview 0 <https://community.lsst.org/c/support/dp0/49>`_ subcategory is the best place for DP0 delegates to post topics related to scientific support.
This subcategory will be monitored by the Rubin `Community Engagement Team <https://community.lsst.org/t/about-the-community-engagement-team/4526>`_ (CET) to ensure that all questions are addressed.
DP0 delegates are especially encouraged to post new topics and reply to others' posts in this subcategory.

**Technical Assistance via GitHub Issues:**
Bug reports, persistent technical issues, and requests for assistance from Rubin staff should be submitted by DP0 delegates as GitHub issues in the `rubin-dp0 GitHub Organization's Support repository <https://github.com/rubin-dp0/Support>`_.
In the horizontal menu bar at the top of that page, click on the “Issues” option (with the circled dot icon), choose the green “New Issue” button at right, next to “Bug report” choose “Get started”, and fill in the title and contents of your issue.
In the right side-menu, do adjust the labels as appropriate, but leave the other options.
Click “Submit new issue” when you’re ready.
These issues will be addressed by Rubin staff.

**For minor or ambiguous RSP service and access issues** please post a new topic in the `Support - DP0 RSP Services Issues <https://community.lsst.org/c/support/dp0-rsp-issues>`_ subcategory of the Community Forum.
This subcategory enables DP0 delegates to report service issues to determine if others are experiencing the same issue (e.g., *"is this local or general network outage?"*, *"my query is taking a long time, is this a real problem or did I do it wrong?"*), crowd-source solutions to technical issues from each other when possible, and have a non-public venue for DP0-related questions.
This subcategory is visible only to Community.lsst.org users who are members of the “DP0 Delegates” group and to Community.lsst.org forum moderators.
The CET will monitor this category.

**Live Support:** Bring your questions to the Delegate Assemblies, third Thursday office hours, or Stack Club meetings.
Rubin staff members will usually be in attendance and able to assist you. 


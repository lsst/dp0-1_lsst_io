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

**"DP0 delegate"** is the term for the 300 scientists and students who will have accounts in the Rubin Science Platform (RSP) at the Interim Data Facility (IDF) during Data Preview 0 (DP0). This term has been adopted to reflect DP0 participants’ important roles of representing the broad science community as learners, testers, and providers of feedback, and of sharing the benefits of their DP0 participation with their communities as teachers and colleagues. Delegates’ DP0-related activities will be supported with resources and infrastructure (as described below).

**Delegate "Getting Started" Action Items Checklist**

1. Get one of the `RSP Accounts`_ for DP0 delegates.
2. Set up your account in the `Rubin Community Forum`_.
3. Attend one of the `DP0 Kick-Off Info Sessions`_.
4. Review the `Guidelines and Expectations`_ for delegates.
5. Consider participating in the `DP0 Delegate Assemblies`_.
6. Learn about `Getting Support`_ for DP0. 


.. Review content in <https://confluence.lsstcorp.org/display/LSSTOps/DP0+CE+Planning>__ for content and structure.


.. _Delegate-Homepage-RSP-Accounts:

RSP Accounts
============

**Activation:** Delegates will be contacted by Rubin staff to provide their `GitHub <http://www.github.com/>`_ username, which will be added to the XXXX GitHub Organization. Then, delegates will be able to log into the RSP at the IDF at `<http://data.lsst.cloud>`_. 

For delegates who do not already have a GitHub account: go to `<http://www.github.com>`_ and select “sign up” in the upper right corner. For participation in DP0 it is not necessary to learn how to use git as a version control system, nor any git workflows or command line tools. GitHub will not be used for RSP account authentication/authorization during Rubin Operations; this is a DP0-specific implementation.

**Security:** RSP accounts are **not transferrable** and delegates **must not share their password** with others. DP0 delegates are responsible for adhering to the policies for safe usage of the RSP, described below. 

**Deactivation:** Delegates who are no longer using their accounts and would like to relinquish it to make way for others should please submit a GitHub issue in the XXXX Organization. **(OR can they just leave the Org on their own?)**

**Warnings:** DP0 delegates are being given access to a *developmental version* of the Rubin Science Platform, and a number of the future safeguards for avoiding uptime or temporary data loss will not be present. Performance during DP0 will not reflect the performance of the final system, and the resources made available to DP0 delegates will not reflect the final user quotas of the operations-era RSP. **(ADD MORE OR LINK TO OTHER WARNINGS)**

**Resources:** (Link to the RSP how-tos etc.) See also `Getting Support`_.


Rubin Community Forum
=====================

The `Rubin Community Forum <http://community.lsst.org>`_ is the central hub for all virtual discussions, Q&A, and support for Rubin Observatory, the LSST, and DP0. It is the best place to post your questions about anything and everything related to DP0.

**Activation:** Go to `<http://community.lsst.org>`_ and create an account (if you do not already have one). 

**Join the DP0 Delegates Group:** Go to `<https://community.lsst.org/groups>`_ and join "DP0 Delegates". This will ensure you have access to the the "Support -- DP0 RSP Services Issues" sub-category.

**Find DP0-Related Contents:**

1. `Support - Data Preview 0 <https://community.lsst.org/c/support/dp0/49>`_: for all questions and discussions related to DP0. For example, use of the RSP's aspects for science, contents of the DC2 data set, delegate activities, brainstorm new investigations, show-and-tell DP0-related results, etc.
2. "Support - DP0 RSP Services Issues": technical Q&A and discussion about potential bugs, service outages, etc.
3. All topics that are `tagged with #dp0 <https://community.lsst.org/tag/dp0>`_. 


DP0 Kick-Off Info Sessions 
==========================

All delegates should please attend one of these identical sessions. One of them will be recorded and made available.

**Contents of the Kick-Off Info Sessions:** 

* set expectations regarding the DC2 data set and the RSP's tools
* alert delegates to potential hazards with the shared-risk RSP in development
* instructions for obtaining and managing accounts in the RSP and Community Forum
* expectations and guidelines for participating in DP0
* an overview of all the resources available to delegates, and how to get support
* time for question and answer

**Dates and Times:** (all times are Pacific Daylight Time)

* Tue Jun 29 8am
* Wed Jun 30 12pm
* Thu Jul 1 4pm
* Tue Jul 6 12pm
* Wed Jul 7 4pm
* Thu Jul 8 8am

**Connection Info:**

(HAVE TO MAKE A GOOGLE FORM FOR THIS)



.. _Delegate-Homepage-DP0-Delegate-Assemblies:

DP0 Delegate Assemblies
=======================

The primary assembly series will occur biweekly on Fridays, 9am to 11am Pacific time (see `Assemblies Schedule`_, below). Alternating Fridays with `Stack Club`_. 

For DP0 participants from Australia and Asia, there will be a `Third Thursday Office Hour`_ (actually Wed 4pm Pacific, which is Thu 10am in Sydney).

| **Purpose**
| - learn how to use the RSP in a guided, hands-on way
| - network, discuss science, do activities together
| - present DP0-related work
| - get live support from Rubin staff
|
| **Format**

* first hour: a "formal" presentation with Q&A, such as:

  * presentations about the DC2 data set
  * demonstrations on how to use the Portal aspect
  * tutorials based on Jupyter Notebooks
  * at first given by Rubin staff, later by delegate volunteers
  
* second hour: breakout sessions for discussion, such as:

  * breakout rooms by science topic to discuss DP0 work
  * breakout rooms by RSP aspect to discuss usage
  * breakout rooms for grassroots DP0 working groups 
  * a main room to serve as "office hours" for Q&A with Rubin staff
  * at first facilitated by Rubin staff, later by delegate volunteers

* assemblies are open to everyone, not limited to DP0 delegates
* all are welcome to join for one hour or both hours
* the first hour will be recorded for those who cannot attend live


.. _DP0-Delegate-Programming-Assemblies:

Assemblies Schedule
-------------------

.. include:: dp0-delegate-assemblies-schedule.inc


Stack Club
----------

Alternating Fridays. Link to stack club. Open hack session. DP0 delegates welcome (you do not need to "join" Stack Club or be working specifically on Stack Club tutorials). Roundtable of what people want to do/learn, sometimes breakout rooms as needed. Often times Rubin Data Management staff join to provide support.


Third Thursday Office Hour
--------------------------

Aus/Asia: Once a month (e.g., "Third Thursdays" on Wed 4pm-6pm Pacific, which is Thu 10am-12pm in Sydney)


.. _Delegate-Homepage-Guidelines-Expectations:

Guidelines and Expectations
===========================

**Know the hazards and limitations of working in the shared-risk developmental version of the Rubin Science Platform.** (FIND OUT MORE HERE).

**Abide by the code of conduct.** All delegates are expected to abide by the `LSST Communications Code of Conduct <https://docushare.lsstcorp.org/docushare/dsweb/Get/Document-24920/>`_.

**Use appropriate acknowledgements and citations.** If you publish work enabled by DP0, the RSP, and/or the DESC's DC2 data set, please include: [TBD]

**Use your RSP account!** As there are a limited number of RSP accounts for DP0, please try to make some use of your account and learn to use at least one aspect of the RSP. There is no minimum time that you're expected to spend on DP0. If you find that you are done with DP0, consider relinquishing your account so it can be offered to someone else.

**Choose a delegate activity.** Delegates are invited to take on an activity that helps to maximize the impact of DP0 with respect to the DP0 goals of testing and informing development of the RSP and preparing the scientific community to do LSST science. See `Delegate Activities`_. 

**Interact with your co-delegates.** Participate in the `Rubin Community Forum`_ and join the biweekly `DP0 Delegate Assemblies`_ as often as you can.


Delegate Activities
-------------------

The following example activities are designed to inform or enhance the Data Management System, the Rubin Science Platform, or a Science Collaboration, and to extend or ehance the benefits of DP0 within the science community, especially beyond the limited number of DP0 participants that Rubin Observatory is able to support. 

Delegate activities are envisioned to be simple and enjoyable, and they are completely voluntary and will not be tracked. Group work is encouraged, as are delegate-designed actions.

Provide feedback to Rubin Observatory, for example:

* complete one or more feedback surveys for Rubin Observatory

  * [link to a Portal use feedback form]
  * [link to a Notebook use feedback form]
  * [link to a API use feedback form]
  * [link to a DP0 general feedback form]
  
* work through an “RSP Test Checklist” and [fill out this related form]
* report issues and bugs with GitHub issues [link]

Extend or enhance the benefits of DP0 in the science community, for example:

* contribute a Jupyter Notebook to the [GitHub Repo]
* write a short report on your DP0 work in the [X category of Community.lsst.org]
* give a short demo of your DP0 work during a [DP0 Delegate Assembly]
* give a seminar about Rubin Observatory and DP0 at your home institution
* give a tutorial about your RSP/DP0 experience in your Science Collaboration
* create a video demo of your DP0 work and [contribute it to our YouTube Playlist]
* lead a topical working group for your fellow DP0 delegates
* help to resolve reported issues and support fellow DP0 delegates in the Community Forum





.. _Delegate-Homepage-Getting-Support:

Getting Support
===============

Questions about RSP accounts should be posted in the "Support -- DP0 RSP Services Issues" sub-category in the Rubin Community Forum, `Community.lsst.org <http://community.lsst.org>`_, or submitted as a GitHub issue in the XXXX Organization **(NEEDS MORE DETAIL)**. There will also be Q&A time during the `DP0 Info Sessions`_ and the weekly `DP0 Delegate Assemblies`_.

# Configuration file for the Sphinx documentation builder.
#
# This file only contains a selection of the most common options. For a full
# list see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# -- Path setup --------------------------------------------------------------

# If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
#
# import os
import sys
# sys.path.insert(0, os.path.abspath('.'))
import lsst_sphinx_bootstrap_theme


# -- Project information -----------------------------------------------------

project = 'Vera C. Rubin Observatory Data Products Documentation for DP0.1'
copyright = '2021, Vera C. Rubin Observatory'
author = 'Vera C. Rubin Observatory'


# -- General configuration ---------------------------------------------------

# Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    "sphinx.ext.intersphinx",
    "sphinx.ext.todo",
    "documenteer.sphinxext",
]

# List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
# This pattern also affects html_static_path and html_extra_path.
exclude_patterns = [
    "_build",
    "README.rst",
    ".venv",
    "venv",
    "project/templates/template-folder",
]

# Intersphinx
intersphinx_mapping = {
    # 'python': ('https://docs.python.org/3/', None),
}


# -- Options for linkcheck builder ----------------------------------------

linkcheck_retries = 2
linkcheck_timeout = 5  # seconds
linkcheck_ignore = [
    r"^http://localhost",
]


# -- Options for HTML output -------------------------------------------------

templates_path = [
    # '_templates',
    lsst_sphinx_bootstrap_theme.get_html_templates_path()
]

html_theme = "lsst_sphinx_bootstrap_theme"
html_theme_path = [lsst_sphinx_bootstrap_theme.get_html_theme_path()]

html_context = {
    # Enable "Edit in GitHub" link
    "display_github": True,
    # https://{{ github_host|default("github.com") }}/{{ github_user }}/
    #     {{ github_repo }}/blob/
    #     {{ github_version }}{{ conf_py_path }}{{ pagename }}{{ suffix }}
    "github_user": "lsst",
    "github_repo": "dp0-1_lsst_io",
    "conf_py_path": "",
    # TRAVIS_BRANCH is available in CI, but master is a safe default
    "github_version": "master" + "/",
}

# Theme options are theme-specific and customize the look and feel of a theme
# further.  For a list of options available for each theme, see the
# documentation.
html_theme_options = {"logotext": project}

# The name for this set of Sphinx documents.
html_title = project

# A shorter title for the navigation bar.
html_short_title = project

# Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named "default.css" will overwrite the builtin "default.css".
html_static_path = []
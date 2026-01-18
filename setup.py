import os
import sys

from setuptools import setup
from setuptools import find_packages

from mypyc.build import mypycify


version = "1.3.5"
hexbytes_version = "1.3.1"

extras_require = {
    "dev": [
        "black>=22.3.0",
        "flake8==3.8.4",
        "isort>=5.10.0",
        "mypy==1.19.1",
        "pytest>=8.0",
        "setuptools>=75.6.0",
        "wheel",
        "towncrier>=19.2.0, <20",
        "hypothesis>=6.56.4",
        "pydocstyle>=6.2.3",
        "pre-commit",
        "mdformat-gfm>=0.3.5",
        "mdformat>=0.7.14",
        "typing-extensions>=4.4.0",
    ],
}

if sys.implementation.name == "cpython":
    MYPYC_DEBUG_LEVEL = int(os.environ.get("MYPYC_DEBUG_LEVEL", "0"))

    skip_mypyc = any(
        cmd in sys.argv
        for cmd in ("sdist", "egg_info", "--name", "--version", "--help", "--help-commands")
    )

    if skip_mypyc:
        ext_modules = []
    else:
        ext_modules = mypycify(
          ["faster_hexbytes/"],
          group_name="faster_hexbytes",
          strict_dunder_typing=True,
        )


setup(
    name="faster_hexbytes",
    # *IMPORTANT*: Don't manually change the version here. See Contributing docs for the release process.
    version=version,
    description=(
        "A faster fork of hexbytes: Python `bytes` subclass that decodes hex, with a readable console output. Implemented in C."
    ),
    long_description=open("README.md").read(),
    long_description_content_type="text/markdown",
    url="https://github.com/BobTheBuidler/faster-hexbytes",
    author="BobTheBuidler",
    author_email="bobthebuidlerdefi@gmail.com",
    license="MIT",
    classifiers=[
        "Intended Audience :: Developers",
        "Programming Language :: Python :: 3",
        "Programming Language :: Python :: 3.10",
        "Programming Language :: Python :: 3.11",
        "Programming Language :: Python :: 3.12",
        "Programming Language :: Python :: 3.13",
        "Programming Language :: Python :: 3.14",
        "Programming Language :: Python :: Implementation :: CPython",
        "Topic :: Software Development :: Libraries",
    ],
    python_requires=">=3.10,<3.15",
    setup_requires=["setuptools_scm"],
    install_requires=[
        "eth-hash>=0.7.0",
        "cchecksum>=0.3.8.dev0,<1",
        "hexbytes=={}".format(hexbytes_version),
    ],
    extras_require=extras_require,
    packages=find_packages(),
    py_modules=["faster_hexbytes"],
    package_data={"faster_hexbytes": ["py.typed"]},
    include_package_data=True,
    ext_modules=ext_modules,
)

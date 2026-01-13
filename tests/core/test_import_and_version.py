def test_import_and_version() -> None:
    import faster_hexbytes

    assert isinstance(faster_hexbytes.__version__, str)


def test_compiled_extension_loaded() -> None:
    import importlib.machinery
    import sys

    import faster_hexbytes.main as main

    module_path = main.__file__
    assert module_path is not None
    assert any(
        module_path.endswith(suffix)
        for suffix in importlib.machinery.EXTENSION_SUFFIXES
    ), f"Expected compiled extension module, got {module_path!r}"

    assert "faster_hexbytes__mypyc" in sys.modules

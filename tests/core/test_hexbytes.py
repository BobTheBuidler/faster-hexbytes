import pickle
from typing import (
    Any,
    Callable,
    Final,
    TypeVar,
    cast,
)

import hypothesis
import pytest

from eth_utils import (
    decode_hex,
    remove_0x_prefix,
    to_bytes,
)
from typing_extensions import (
    ParamSpec,
)

from faster_hexbytes import (
    HexBytes,
)

P = ParamSpec("P")
R = TypeVar("R")

hexstr_strategy: Final = hypothesis.strategies.from_regex(r"\A(0[xX])?[0-9a-fA-F]*\Z")


def given(*args: Any, **kwargs: Any) -> Callable[[Callable[P, R]], Callable[P, R]]:
    return cast(
        Callable[[Callable[P, R]], Callable[P, R]],
        hypothesis.given(*args, **kwargs),
    )


def assert_equal(hexbytes: HexBytes, bytes_expected: bytes) -> None:
    assert hexbytes == bytes_expected
    assert len(hexbytes) == len(bytes_expected)
    for byte_actual, byte_expected in zip(hexbytes, bytes_expected):
        assert byte_actual == byte_expected
    assert bytes(hexbytes) == bytes_expected


@given(hypothesis.strategies.binary())
def test_bytes_inputs(primitive: bytes) -> None:
    wrapped = HexBytes(primitive)
    assert_equal(wrapped, primitive)


@given(hypothesis.strategies.binary())
def test_bytearray_inputs(primitive: bytes) -> None:
    byte_array_input = bytearray(primitive)
    wrapped = HexBytes(byte_array_input)
    assert_equal(wrapped, primitive)


@given(hypothesis.strategies.binary())
def test_memoryview_inputs(primitive: bytes) -> None:
    memoryview_input = memoryview(primitive)
    wrapped = HexBytes(memoryview_input)
    assert_equal(wrapped, primitive)


@pytest.mark.parametrize(
    "boolval, expected_repr",
    (
        (True, "HexBytes('0x01')"),
        (False, "HexBytes('0x00')"),
    ),
)
def test_bool_inputs(boolval: bool, expected_repr: str) -> None:
    wrapped = HexBytes(boolval)
    assert repr(wrapped) == expected_repr
    assert_equal(wrapped, to_bytes(boolval))


@given(hypothesis.strategies.integers(max_value=-1))
def test_invalid_integer_inputs(integer: int) -> None:
    with pytest.raises(ValueError) as exc_info:
        HexBytes(integer)

    message = str(exc_info.value)
    assert "negative" in message
    assert str(integer) in message


@given(hypothesis.strategies.integers(min_value=0))
def test_integer_inputs(integer: int) -> None:
    wrapped = HexBytes(integer)
    assert hex(integer)[2:] in repr(wrapped)
    assert_equal(wrapped, to_bytes(integer))


@given(hexstr_strategy)
def test_hex_inputs(hex_input: str) -> None:
    wrapped = HexBytes(hex_input)
    if len(hex_input) % 2 == 0:
        even_hex_input = hex_input
    else:
        even_hex_input = "0" + remove_0x_prefix(hex_input)
    expected = decode_hex(even_hex_input)
    assert_equal(wrapped, expected)


def test_pretty_output() -> None:
    hb = HexBytes(b"\x0F\x1a")
    assert repr(hb) == "HexBytes('0x0f1a')"


def test_does_not_break_bytes_hex() -> None:
    hb = HexBytes(b"\x0F\x1a")
    assert hb.hex() == "0f1a"


def test_to_0x_hex() -> None:
    hb = HexBytes(b"\x0F\x1a")
    assert hb.to_0x_hex() == "0x0f1a"


@given(hypothesis.strategies.binary(), hypothesis.strategies.integers())
def test_hexbytes_index(primitive: bytes, index: int) -> None:
    hexbytes = HexBytes(primitive)
    if index >= len(primitive) or index < -1 * len(primitive):
        with pytest.raises(IndexError):
            hexbytes[index]
    else:
        assert hexbytes[index] == primitive[index]


@given(
    hypothesis.strategies.binary(),
    hypothesis.strategies.integers(),
    hypothesis.strategies.integers(),
)
def test_slice(primitive: bytes, start: int, stop: int) -> None:
    hexbytes = HexBytes(primitive)
    expected = HexBytes(primitive[start:stop])
    assert hexbytes[start:stop] == expected


@given(
    hypothesis.strategies.binary(),
    hypothesis.strategies.integers(),
    hypothesis.strategies.integers(),
    hypothesis.strategies.integers(),
)
def test_slice_stepped(primitive: bytes, start: int, stop: int, step: int) -> None:
    hexbytes = HexBytes(primitive)
    expected = HexBytes(primitive[start:stop:step or None])
    assert hexbytes[start:stop:step or None] == expected


def test_reduce_consistency() -> None:
    obj = HexBytes(b"0x1234")

    reduce_fn, reduce_args, *maybe_state = obj.__reduce__()

    # recreate manually using reduce_fn
    recreated = reduce_fn(*reduce_args)
    if maybe_state:
        recreated.__setstate__(maybe_state[0])

    # check recreated instance equals original
    assert recreated == obj  # or compare fields manually

    dumped = pickle.dumps(obj)
    loaded = pickle.loads(dumped)

    assert loaded == obj

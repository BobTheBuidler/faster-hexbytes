from typing import (
    TYPE_CHECKING,
    Callable,
    Tuple,
    Type,
    Union,
    overload,
)

from mypy_extensions import (
    mypyc_attr,
)
from typing_extensions import (
    Self,
)

from ._utils import (
    to_bytes,
)

if TYPE_CHECKING:
    from typing import (
        SupportsIndex,
    )

BytesLike = Union[bool, bytearray, bytes, int, str, memoryview]


@mypy_extensions.mypyc_attr(native_class=False)
class HexBytes(bytes):
    """
    Thin wrapper around the python built-in :class:`bytes` class.

    It has these changes:
        1. Accepts more initializing values: bool, bytearray, bytes, (non-negative) int,
           str, and memoryview
        2. The representation at console (__repr__) is 0x-prefixed
        3. ``to_0x_hex`` returns a 0x-prefixed hex string
    """

    def __new__(cls, val: BytesLike) -> Self:
        bytesval = to_bytes(val)
        return super().__new__(cls, bytesval)

    @overload
    def __getitem__(self, key: "SupportsIndex") -> int:  # noqa: F811
        ...

    @overload  # noqa: F811
    def __getitem__(self, key: slice) -> "HexBytes":  # noqa: F811
        ...

    def __getitem__(  # noqa: F811
        self, key: Union["SupportsIndex", slice]
    ) -> Union[int, bytes, "HexBytes"]:
        result = super().__getitem__(key)
        if hasattr(result, "hex"):
            return type(self)(result)
        else:
            return result

    def __repr__(self) -> str:
        return f"HexBytes({'0x' + self.hex()!r})"

    def to_0x_hex(self) -> str:
        """
        Convert the bytes to a 0x-prefixed hex string
        """
        return "0x" + self.hex()

    def __reduce__(
        self,
    ) -> Tuple[Callable[..., bytes], Tuple[Type["HexBytes"], bytes]]:
        """
        An optimized ``__reduce__`` that bypasses the input validation in
        ``HexBytes.__new__`` since an existing HexBytes instance has already been
        validated when created.
        """
        return bytes.__new__, (type(self), bytes(self))

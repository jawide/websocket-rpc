from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import service as _service
from typing import ClassVar, Optional, Text

DESCRIPTOR: _descriptor.FileDescriptor

class SumArg(_message.Message):
    __slots__ = ["a", "b"]
    A_FIELD_NUMBER: ClassVar[int]
    B_FIELD_NUMBER: ClassVar[int]
    a: int
    b: int
    def __init__(self, a: Optional[int] = ..., b: Optional[int] = ...) -> None: ...

class SumResult(_message.Message):
    __slots__ = ["sum"]
    SUM_FIELD_NUMBER: ClassVar[int]
    sum: int
    def __init__(self, sum: Optional[int] = ...) -> None: ...

class Math(_service.service): ...

class Math_Stub(Math): ...

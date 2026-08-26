# String_VFormat

Address: 0x004A5702
Signature: int String_VFormat(char* buffer, const char* format, va_list args)
Data types: scalar/opaque ABI only

## Recovered behavior

Bounded printf-style va_list formatter wrapper around the parser core at 0x004A7720. Catalogued for direct ABI-aware use; no generic NativeHelper wrapper is emitted. Ghidra/r2 CFG agreement: 4 basic blocks and 4 edges; see assets/IGI1-Native-Name-Evidence.json.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

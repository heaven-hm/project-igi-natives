# Script_BufInit

Address: 0x004C0200
Signature: void Script_BufInit(int* outBuf1, int buf2, int buf3, int bufSize)
Data types: scalar/opaque ABI only

## Recovered behavior

Initialises the four header fields of a SCRIPT BUFFER structure (verified field-by-field stores: *out=buf2, then buf3, bufSize...). Params: outBuf1 = buffer struct to init, buf2/buf3 = buffer pointers/ids, bufSize = size field. Call before handing a buffer to the QVM assembler/parsers.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

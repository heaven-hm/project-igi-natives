# Resource_PackUnpack

Address: 0x004B18B0
Signature: int Resource_PackUnpack(char* resFile, char** outBuffer)
Data types: scalar/opaque ABI only

## Recovered behavior

Opens a PACKED resource file via QFile_ReadWrite (0x4B1510, mode string at 0x53B604) and unpacks its contents through the pack table at 0x9436E8. Params: resFile = packed resource path, outBuffer = receives unpacked data. RETURNS entry/result pointer.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

# Resource_PackUnpack

| Field | Value |
|---|---|
| Address/hash | `0x004B18B0` |
| Signature | `int Resource_PackUnpack(char* resFile, char** outBuffer)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Opens a PACKED resource file via QFile_ReadWrite (0x4B1510, mode string at 0x53B604) and unpacks its contents through the pack table at 0x9436E8. Params: resFile = packed resource path, outBuffer = receives unpacked data. RETURNS entry/result pointer.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

# Script_BufInit

| Field | Value |
|---|---|
| Address/hash | `0x004C0200` |
| Signature | `void Script_BufInit(int* outBuf1, int buf2, int buf3, int bufSize)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Initialises the four header fields of a SCRIPT BUFFER structure (verified field-by-field stores: *out=buf2, then buf3, bufSize...). Params: outBuf1 = buffer struct to init, buf2/buf3 = buffer pointers/ids, bufSize = size field. Call before handing a buffer to the QVM assembler/parsers.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

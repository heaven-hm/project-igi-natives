# Resource_Unpack

| Field | Value |
|---|---|
| Address/hash | `0x004B16D0` |
| Signature | `int Resource_Unpack(int* resPtr, int destAddr, int resSize)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Unpacks a loaded resource blob to a destination address. Params: resPtr = packed resource pointer, destAddr = destination memory address, resSize = bytes to unpack. RETURNS unpacked size/status.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

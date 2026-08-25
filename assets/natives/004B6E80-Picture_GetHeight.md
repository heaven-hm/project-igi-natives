# Picture_GetHeight

| Field | Value |
|---|---|
| Address/hash | `0x004B6E80` |
| Signature | `int Picture_GetHeight(void* picture)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the HEIGHT in pixels of a loaded picture/surface. Param: picture = picture pointer. Thin thunk to fcn.004B7E00.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

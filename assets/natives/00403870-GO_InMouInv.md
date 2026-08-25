# GO_InMouInv

| Field | Value |
|---|---|
| Address/hash | `0x00403870` |
| Signature | `int GO_InMouInv(int invert)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Toggles inverted mouse-look for the current profile. Param: invert = 1 invert Y axis, 0 normal. Use in config scripts. Returns 1.

## How it was found

Retail evidence: GOInMouInv.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

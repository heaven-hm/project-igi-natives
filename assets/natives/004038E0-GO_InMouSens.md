# GO_InMouSens

| Field | Value |
|---|---|
| Address/hash | `0x004038E0` |
| Signature | `float GO_InMouSens(float sensitivity)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets mouse sensitivity for the current profile. Param: sensitivity = float multiplier as saved by the options screen. Use in config scripts. Returns 1.

## How it was found

Retail evidence: GOInMouSens.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

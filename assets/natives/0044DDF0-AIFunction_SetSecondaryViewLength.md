# AIFunction_SetSecondaryViewLength

| Field | Value |
|---|---|
| Address/hash | `0x0044DDF0` |
| Signature | `void AIFunction_SetSecondaryViewLength(int length)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets SECONDARY view length (peripheral/short-range channel). Param: length = distance in engine units.

## How it was found

Retail evidence: AIFunction_SetSecondaryViewLength.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

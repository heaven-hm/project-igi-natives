# AIFunction_SetSecondaryViewAlpha

| Field | Value |
|---|---|
| Address/hash | `0x0044DEE0` |
| Signature | `void AIFunction_SetSecondaryViewAlpha(int alpha)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets secondary-view detection gain. Param: alpha = engine factor.

## How it was found

Retail evidence: AIFunction_SetSecondaryViewAlpha.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

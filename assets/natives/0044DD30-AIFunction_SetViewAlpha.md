# AIFunction_SetViewAlpha

| Field | Value |
|---|---|
| Address/hash | `0x0044DD30` |
| Signature | `void AIFunction_SetViewAlpha(int alpha)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets view ALPHA - the detection speed/gain of normal vision. Param: alpha = engine detection factor. Higher = spots player faster. Use in AIEVENT_CREATE.

## How it was found

Retail evidence: AIFunction_SetViewAlpha.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

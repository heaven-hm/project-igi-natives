# AIFunction_SetViewGamma

| Field | Value |
|---|---|
| Address/hash | `0x0044DD90` |
| Signature | `void AIFunction_SetViewGamma(int gamma)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets view GAMMA - secondary vision shaping factor for detection. Param: gamma = engine factor. Use in AI init alongside SetViewAlpha.

## How it was found

Retail evidence: AIFunction_SetViewGamma.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

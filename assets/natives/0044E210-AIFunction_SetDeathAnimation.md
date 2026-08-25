# AIFunction_SetDeathAnimation

| Field | Value |
|---|---|
| Address/hash | `0x0044E210` |
| Signature | `void AIFunction_SetDeathAnimation(int animId)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Overrides the death animation played when this AI dies. Param: animId = animation entry id. Use in AI init for custom deaths.

## How it was found

Retail evidence: AIFunction_SetDeathAnimation.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

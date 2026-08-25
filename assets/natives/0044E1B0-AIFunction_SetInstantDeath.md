# AIFunction_SetInstantDeath

| Field | Value |
|---|---|
| Address/hash | `0x0044E1B0` |
| Signature | `void AIFunction_SetInstantDeath(int onOff)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

When on, any hit instantly kills this AI (no damage pooling). Param: onOff = 1 one-shot kills, 0 normal health. Use for scripted one-shot enemies.

## How it was found

Retail evidence: AIFunction_SetInstantDeath.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

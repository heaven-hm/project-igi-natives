# AIFunction_AddAnimationEntry

| Field | Value |
|---|---|
| Address/hash | `0x0044EBB0` |
| Signature | `void AIFunction_AddAnimationEntry(int animationId, int data)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Adds an animation ENTRY to this AI's available set (builds the pick-list GetAnimationToPlay draws from). Params: animationId = animation resource id, data = entry config value. Use in AIEVENT_CREATE before playing custom animations.

## How it was found

Retail evidence: AIFunction_AddAnimationEntry.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

# AIFunction_SetAnimationInterval

| Field | Value |
|---|---|
| Address/hash | `0x0044EAF0` |
| Signature | `void AIFunction_SetAnimationInterval(int entryIndex, int interval)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets playback INTERVAL for an animation entry. Params: entryIndex = animation entry added via AddAnimationEntry, interval = frame/tick interval. Use when tuning scripted animations.

## How it was found

Retail evidence: AIFunction_SetAnimationInterval.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

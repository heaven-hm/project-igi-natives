# Config_SoundOptionsGetSoundsEffects

| Field | Value |
|---|---|
| Address/hash | `0x00404A90` |
| Signature | `int Config_SoundOptionsGetSoundsEffects()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns 1 if sound effects are enabled for the active profile, else 0.

## How it was found

Retail evidence: Config_SoundOptionsGetSoundsEffects.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

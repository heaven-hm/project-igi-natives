# Config_SoundOptionsSetSoundsEffects

| Field | Value |
|---|---|
| Address/hash | `0x00404A10` |
| Signature | `void Config_SoundOptionsSetSoundsEffects(int onOff)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Enables/disables sound effects for the active profile. Param: onOff = 1 on, 0 off.

## How it was found

Retail evidence: Config_SoundOptionsSetSoundsEffects.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

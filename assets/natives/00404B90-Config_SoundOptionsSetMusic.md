# Config_SoundOptionsSetMusic

| Field | Value |
|---|---|
| Address/hash | `0x00404B90` |
| Signature | `void Config_SoundOptionsSetMusic(int onOff)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Enables/disables music for the active profile. Param: onOff = 1 on, 0 off.

## How it was found

Retail evidence: Config_SoundOptionsSetMusic.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

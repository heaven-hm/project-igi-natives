# Config_SoundOptionsSetMusicVolume

| Field | Value |
|---|---|
| Address/hash | `0x00404C40` |
| Signature | `void Config_SoundOptionsSetMusicVolume(float volume)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets music volume for the active profile. Param: volume = float 0.0-1.0 (pops a float arg - pass a float!).

## How it was found

Retail evidence: Config_SoundOptionsSetMusicVolume.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

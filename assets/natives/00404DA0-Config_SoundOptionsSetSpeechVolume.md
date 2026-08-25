# Config_SoundOptionsSetSpeechVolume

| Field | Value |
|---|---|
| Address/hash | `0x00404DA0` |
| Signature | `void Config_SoundOptionsSetSpeechVolume(float volume)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets speech volume for the active profile. Param: volume = float 0.0-1.0.

## How it was found

Retail evidence: Config_SoundOptionsSetSpeechVolume.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

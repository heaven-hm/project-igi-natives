# Config_SoundOptionsSetReverseStereo

| Field | Value |
|---|---|
| Address/hash | `0x00404E50` |
| Signature | `void Config_SoundOptionsSetReverseStereo(int onOff)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Toggles reversed stereo channels for the active profile. Param: onOff = 1 reverse, 0 normal.

## How it was found

Retail evidence: Config_SoundOptionsSetReverseStereo.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

# Config_SoundOptionsGetMusic

| Field | Value |
|---|---|
| Address/hash | `0x00404BF0` |
| Signature | `int Config_SoundOptionsGetMusic()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns 1 if music is enabled for the active profile, else 0.

## How it was found

Retail evidence: Config_SoundOptionsGetMusic.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

# GO_SoundSpeech

| Field | Value |
|---|---|
| Address/hash | `0x00403E60` |
| Signature | `int GO_SoundSpeech(float volume)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets speech volume for the current profile. Param: volume = float 0.0-1.0. Use in config scripts. Returns 1.

## How it was found

Retail evidence: GOSoundSpeech.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

# Define_Sound

| Field | Value |
|---|---|
| Address/hash | `0x004E8C60` |
| Signature | `void Define_Sound(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Defines a SOUND entry (file + attenuation params) inside sound definition blocks - OpenIGI reimplements it as SoundDefinitionRegistry.Define(SoundDefinitionKind.Sound). Call only from sound .qsc define blocks.

## How it was found

Retail evidence: DefineSound.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

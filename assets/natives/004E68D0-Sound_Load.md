# Sound_Load

| Field | Value |
|---|---|
| Address/hash | `0x004E68D0` |
| Signature | `void Sound_Load(char *sound_dir)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Load all level sounds from path , Params: Path of sound like 'MISSION:sounds'

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

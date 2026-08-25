# Music_SetSfxVolume

| Field | Value |
|---|---|
| Address/hash | `0x00495F30` |
| Signature | `void Music_SetSfxVolume(float volume)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets the SFX bus volume feeding the music/sound mix path. Param: volume = float 0.0-1.0 scaled by global factor. Use for live SFX fade.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

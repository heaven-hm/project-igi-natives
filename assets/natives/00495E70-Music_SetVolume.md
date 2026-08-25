# Music_SetVolume

| Field | Value |
|---|---|
| Address/hash | `0x00495E70` |
| Signature | `void Music_SetVolume(float volume1,float volume2)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets BOTH music engine volumes (likely front/master pair) after scaling by the global music factor. Params: volume1, volume2 = floats 0.0-1.0 scaled against settings. Use for live music fades.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

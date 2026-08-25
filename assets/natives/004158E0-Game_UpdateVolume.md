# Game_UpdateVolume

| Field | Value |
|---|---|
| Address/hash | `0x004158E0` |
| Signature | `void Game_UpdateVolume(void)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Applies current profile music/sfx volumes to the live audio engines. Takes no args.

## How it was found

Retail evidence: Game_UpdateVolume.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

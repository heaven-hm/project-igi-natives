# Game_SetMusicVolume

| Field | Value |
|---|---|
| Address/hash | `0x00415950` |
| Signature | `void Game_SetMusicVolume(float volume)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Live-sets music volume through the profile real-value setter (fcn.004B8A50): retail body constructs 1.0f (0x3FF00000) and stores via fstp. Param: volume = float 0.0-1.0. Called by ingamemenu.qvm options sliders.

## How it was found

Retail evidence: Game_SetMusicVolume.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

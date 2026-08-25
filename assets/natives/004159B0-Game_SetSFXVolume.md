# Game_SetSFXVolume

| Field | Value |
|---|---|
| Address/hash | `0x004159B0` |
| Signature | `void Game_SetSFXVolume(float volume)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Live-sets sound-effects volume through the profile real-value setter (fcn.004B8A50), same 1.0f construction pattern. Param: volume = float 0.0-1.0. Called by ingamemenu.qvm options sliders.

## How it was found

Retail evidence: Game_SetSFXVolume.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

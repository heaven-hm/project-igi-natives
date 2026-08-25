# Game_DisablePlayerInput

| Field | Value |
|---|---|
| Address/hash | `0x004157D0` |
| Signature | `void Game_DisablePlayerInput(void)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Disables ALL player input (keyboard+mouse) - used by cutscenes/menus. Re-enable with Game_EnablePlayerInput.

## How it was found

Retail evidence: Game_DisablePlayerInput.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

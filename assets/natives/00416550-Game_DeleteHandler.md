# Game_DeleteHandler

| Field | Value |
|---|---|
| Address/hash | `0x00416550` |
| Signature | `void Game_DeleteHandler(void)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

The game's DELETE handler - runs when a level/game session is torn down (quit path), releasing entities and session state. Takes no args. Engine-internal teardown; do not call to 'quit' - it is the cleanup callback. [Name corrected per retail analysis: was LevelLoad/LevelQuit/LevelRestart.]

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

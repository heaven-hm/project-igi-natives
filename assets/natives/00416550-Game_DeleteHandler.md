# Game_DeleteHandler

Address: 0x00416550
Signature: void Game_DeleteHandler(void)
Data types: scalar/opaque ABI only

## Recovered behavior

The game's DELETE handler - runs when a level/game session is torn down (quit path), releasing entities and session state. Takes no args. Engine-internal teardown; do not call to 'quit' - it is the cleanup callback. [Name corrected per retail analysis: was LevelLoad/LevelQuit/LevelRestart.]

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

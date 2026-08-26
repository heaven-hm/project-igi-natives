# Game_Restart

Address: 0x00416FE0
Signature: void Game_Restart(void)
Data types: scalar/opaque ABI only

## Recovered behavior

Restarts the CURRENT LEVEL/session: tears down and reloads the running game state (the Ctrl+F4-style restart path). Takes no args. Use to reset the mission without going back to menus. [Name corrected per retail analysis: was LevelLoad/LevelQuit/LevelRestart.]

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

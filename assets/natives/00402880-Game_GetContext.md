# Game_GetContext

Address: 0x00402880
Signature: void* Game_GetContext(void)
Data types: GameContext

## Recovered behavior

Returns the global IGI game-context pointer at DAT_00567C8C. Retail callers use it to dispatch context callbacks and initialize the main game state.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

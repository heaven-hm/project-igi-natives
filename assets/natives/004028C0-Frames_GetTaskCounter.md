# Frames_GetTaskCounter

Address: 0x004028C0
Signature: int Frames_GetTaskCounter(void)
Data types: scalar/opaque ABI only

## Recovered behavior

Returns the second task/processing counter at game-context field +0x38. Frames_Set resets it and the retail main loop increments it during the second processing pass.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

# Frames_GetUpdateCounter

Address: 0x004028B0
Signature: int Frames_GetUpdateCounter(void)
Data types: scalar/opaque ABI only

## Recovered behavior

Returns the update-loop counter at game-context field +0x34. Frames_Set resets it and the retail main loop increments it once per simulation/update pass; gameplay timeout code compares against this value.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

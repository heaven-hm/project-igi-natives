# Frames_Get

Address: 0x00402870
Signature: int Frames_Get(void)
Data types: scalar/opaque ABI only

## Recovered behavior

Returns the configured game frame limit from the global context field +0x3C written by Frames_Set. Menu_Manager stores this value as its frame-rate limit.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

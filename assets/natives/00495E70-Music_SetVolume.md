# Music_SetVolume

Address: 0x00495E70
Signature: void Music_SetVolume(float volume1,float volume2)
Data types: scalar/opaque ABI only

## Recovered behavior

Sets BOTH music engine volumes (likely front/master pair) after scaling by the global music factor. Params: volume1, volume2 = floats 0.0-1.0 scaled against settings. Use for live music fades.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

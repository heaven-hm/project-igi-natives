# App_ContextSetTerrainLightmapsUsed

Address: 0x0048F260
Signature: void App_ContextSetTerrainLightmapsUsed(int8_t used)
Data types: scalar/opaque ABI only

## Recovered behavior

Enables/disables TERRAIN lightmaps globally (global 0x5C8BE8). Param: used = 1 lit terrain, 0 unlit. Pair with AppContext_SetLightmapsUsed for full lighting control.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

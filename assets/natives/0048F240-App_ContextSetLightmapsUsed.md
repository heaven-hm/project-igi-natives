# App_ContextSetLightmapsUsed

Address: 0x0048F240
Signature: void App_ContextSetLightmapsUsed(int8_t used)
Data types: scalar/opaque ABI only

## Recovered behavior

Enables/disables OBJECT lightmaps globally (global 0x5C8BE4) - the verified retail lightmap setter. Param: used = 1 use object lightmaps, 0 flat-lit. Use for graphics enhancers (this is what IGIPatch's lightmap toggles call).

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

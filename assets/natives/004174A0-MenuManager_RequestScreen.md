# MenuManager_RequestScreen

Address: 0x004174A0
Signature: void MenuManager_RequestScreen(int screenId, int flags)
Data types: scalar/opaque ABI only

## Recovered behavior

Requests a menu screen by id through the menu manager (queued request). Params: screenId = retail screen resource id, flags = request modifier (0 = normal). Use outside the menu stack internals when you just want a screen opened next tick.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

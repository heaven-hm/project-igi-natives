# MenuManager_PopScreen

Address: 0x00417710
Signature: void MenuManager_PopScreen(int param)
Data types: scalar/opaque ABI only

## Recovered behavior

Pops the top screen off the menu stack (destroys it) revealing the one beneath. Param: param = pass-through argument observed in retail calls (pass 0). Pair with MenuManager_PushScreen.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

# Config_GameOptionsInputSetInvertMouse

Address: 0x00404160
Signature: void Config_GameOptionsInputSetInvertMouse(int invert)
Data types: scalar/opaque ABI only

## Recovered behavior

Sets invert-mouse in the GAME-OPTIONS block while a config file is parsed (the GO_* writer side; runtime getter/setter pair lives on the profile). Param: invert = 1 inverted, 0 normal. Use only inside config .qsc write-out contexts.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

# Human_FindNextCamera

Address: 0x004828D0
Signature: void Human_FindNextCamera(HumanPlayer* human)
Data types: CameraContext, HumanPlayer

## Recovered behavior

Debug camera cycler: advances to the next camera/view target attached to the human player (decompiled body polls input keys). Param: human = human-player pointer. Pass1-verified function start; restored - it existed only in the Natives.hpp enum and was never serialized to JSON.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

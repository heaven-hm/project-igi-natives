# QScript_Cleanup

Address: 0x004B1AC0
Signature: void QScript_Cleanup(int* script)
Data types: scalar/opaque ABI only

## Recovered behavior

Cleans up/frees a parsed .qsc script structure (pass1: 5 calls, valid exit). Param: script = pointer to the loaded script object. Call when done with a script loaded via the Qvm/Qsc loaders to release its memory.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

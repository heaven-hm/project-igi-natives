# Script_Init

Address: 0x004F0E50
Signature: void Script_Init(char* file_name,int8_t p2,int p3,int8_t p4)
Data types: scalar/opaque ABI only

## Recovered behavior

Initialises the script system for a file. Params: file_name = script path, p2 = byte flag (observed), p3 = int option, p4 = byte flag. Refined types from decompiled header (two int8_t slots detected).

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

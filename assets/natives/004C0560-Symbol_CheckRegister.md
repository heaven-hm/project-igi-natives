# Symbol_CheckRegister

Address: 0x004C0560
Signature: void* Symbol_CheckRegister(int* symTable, char* symName, int extra)
Data types: scalar/opaque ABI only

## Recovered behavior

Checks a symbol and registers it if new - ERRORS via ErrorShow("Symbol \"%s\" already registered in hash table") if the name ALREADY exists, so it doubles as duplicate protection. Params: symTable, symName, extra = registration payload/flags. RETURNS symbol entry or triggers the error dialog.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

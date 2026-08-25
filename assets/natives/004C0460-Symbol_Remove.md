# Symbol_Remove

Address: 0x004C0460
Signature: int Symbol_Remove(int* symTable, char* symName)
Data types: scalar/opaque ABI only

## Recovered behavior

Removes a symbol from the game-data symbol hash table; warns "Unable to remove symbol \"%s\" (not registered)" when absent. Params: symTable = symbol table, symName = symbol name string. RETURNS non-zero on success. Call after dynamically registered symbols are no longer needed.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

# SymbolRegister_Bool8

Address: 0x004B7EE0
Signature: void* SymbolRegister_Bool8(int* table, char* name)
Data types: scalar/opaque ABI only

## Recovered behavior

Registers a BOOL8-TYPED script variable slot in the game-data symbol table (2-arg typed thunk family; each sibling hardcodes its type size). Params: table = symbol table, name = variable name. RETURNS the registered symbol entry. Script code can then read/write it as a bool.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

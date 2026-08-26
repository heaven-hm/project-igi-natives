# SymbolRegister_Int32

Address: 0x004B7FA0
Signature: void* SymbolRegister_Int32(int* table, char* name)
Data types: scalar/opaque ABI only

## Recovered behavior

Registers an INT32-typed script variable slot. Params: table, name. RETURNS symbol entry. This is the common integer script-variable registration used by AI/game scripts.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

# SymbolRegister_Real32

Address: 0x004B7FC0
Signature: void* SymbolRegister_Real32(int* table, char* name)
Data types: scalar/opaque ABI only

## Recovered behavior

Registers a REAL32 (float)-typed script variable slot. Params: table, name. RETURNS symbol entry. Pairs with AIFunction_Set/GetScriptRealValue for float storage.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

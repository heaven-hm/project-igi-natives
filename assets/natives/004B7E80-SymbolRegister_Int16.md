# SymbolRegister_Int16

Address: 0x004B7E80
Signature: void* SymbolRegister_Int16(int* table, char* name)
Data types: scalar/opaque ABI only

## Recovered behavior

Registers an INT16-typed script variable slot. Params: table, name. RETURNS symbol entry. Sibling of SymbolRegister_Bool8/Int32/Real32 - same thunk shape, different type tag.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

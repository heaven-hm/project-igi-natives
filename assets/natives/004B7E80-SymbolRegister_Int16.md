# SymbolRegister_Int16

| Field | Value |
|---|---|
| Address/hash | `0x004B7E80` |
| Signature | `void* SymbolRegister_Int16(int* table, char* name)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Registers an INT16-typed script variable slot. Params: table, name. RETURNS symbol entry. Sibling of SymbolRegister_Bool8/Int32/Real32 - same thunk shape, different type tag.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

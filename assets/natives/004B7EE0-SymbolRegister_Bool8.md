# SymbolRegister_Bool8

| Field | Value |
|---|---|
| Address/hash | `0x004B7EE0` |
| Signature | `void* SymbolRegister_Bool8(int* table, char* name)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Registers a BOOL8-TYPED script variable slot in the game-data symbol table (2-arg typed thunk family; each sibling hardcodes its type size). Params: table = symbol table, name = variable name. RETURNS the registered symbol entry. Script code can then read/write it as a bool.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

# SymbolRegister_Real32

| Field | Value |
|---|---|
| Address/hash | `0x004B7FC0` |
| Signature | `void* SymbolRegister_Real32(int* table, char* name)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Registers a REAL32 (float)-typed script variable slot. Params: table, name. RETURNS symbol entry. Pairs with AIFunction_Set/GetScriptRealValue for float storage.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

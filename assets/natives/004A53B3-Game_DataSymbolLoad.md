# Game_DataSymbolLoad

| Field | Value |
|---|---|
| Address/hash | `0x004A53B3` |
| Signature | `int Game_DataSymbolLoad(char* symBuf, char* symPath, char* symName)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Parses game-data SYMBOL DEFINITIONS from a buffer into the symbol table: tokenizes via 0x4A7720 with per-name limit 0x42 (66 bytes) and count cap 0x7FFFFFFF, null-terminates each parsed name. Params: symBuf = symbol buffer base, symPath = source path ref, symName = initial name entry. RETURNS parse status. Feeds the table that Symbol_Register*/GameData_SymbolRemove operate on.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

# Symbol_Remove

| Field | Value |
|---|---|
| Address/hash | `0x004C0460` |
| Signature | `int Symbol_Remove(int* symTable, char* symName)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Removes a symbol from the game-data symbol hash table; warns "Unable to remove symbol \"%s\" (not registered)" when absent. Params: symTable = symbol table, symName = symbol name string. RETURNS non-zero on success. Call after dynamically registered symbols are no longer needed.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

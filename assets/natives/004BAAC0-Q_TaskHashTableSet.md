# Q_TaskHashTableSet

| Field | Value |
|---|---|
| Address/hash | `0x004BAAC0` |
| Signature | `void Q_TaskHashTableSet(int** table, void* handler, int nameVal, int p4, int p5, int p6, int p7)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

THE CORE REGISTRAR: inserts an entry into the task/hash table binding a name-value pair to a handler callback. All 7 stack args confirmed by disassembly header (arg_18h..arg_3Ch). Every SymbolRegister* thunk (e.g. 0x4B7EE0 pushes 1,1,0,1,addr,handler,table -> this) and every GAME_DEFINE_OPTIONS registration routes here. Params: table = target hash table, handler = callback invoked for the symbol, nameVal = name/value ref, p4-p7 = type/flag slots (see SymbolRegister thunks for known values).

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

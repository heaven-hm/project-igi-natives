# Q_TaskHashTableSet

Address: 0x004BAAC0
Signature: void Q_TaskHashTableSet(int** table, void* handler, int nameVal, int p4, int p5, int p6, int p7)
Data types: scalar/opaque ABI only

## Recovered behavior

THE CORE REGISTRAR: inserts an entry into the task/hash table binding a name-value pair to a handler callback. All 7 stack args confirmed by disassembly header (arg_18h..arg_3Ch). Every SymbolRegister* thunk (e.g. 0x4B7EE0 pushes 1,1,0,1,addr,handler,table -> this) and every GAME_DEFINE_OPTIONS registration routes here. Params: table = target hash table, handler = callback invoked for the symbol, nameVal = name/value ref, p4-p7 = type/flag slots (see SymbolRegister thunks for known values).

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

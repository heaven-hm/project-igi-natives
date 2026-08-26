# Game_DataSymbolLoad

Address: 0x004A53B3
Signature: int Game_DataSymbolLoad(char* symBuf, char* symPath, char* symName)
Data types: scalar/opaque ABI only

## Recovered behavior

Parses game-data SYMBOL DEFINITIONS from a buffer into the symbol table: tokenizes via 0x4A7720 with per-name limit 0x42 (66 bytes) and count cap 0x7FFFFFFF, null-terminates each parsed name. Params: symBuf = symbol buffer base, symPath = source path ref, symName = initial name entry. RETURNS parse status. Feeds the table that Symbol_Register*/GameData_SymbolRemove operate on.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

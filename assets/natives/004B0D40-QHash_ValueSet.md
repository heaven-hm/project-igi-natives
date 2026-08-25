# QHash_ValueSet

Address: 0x004B0D40
Signature: void QHash_ValueSet(int* table, char* key, int value)
Data types: scalar/opaque ABI only

## Recovered behavior

Sets a value in a QHash hash-table (8-byte thunk into the hash engine at 0x4B0D90 family). Pass the table ptr, key string and integer value. Restored after accidental loss during batch rewrite - address pass1-verified.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

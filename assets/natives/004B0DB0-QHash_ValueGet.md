# QHash_ValueGet

Address: 0x004B0DB0
Signature: int QHash_ValueGet(int* table, char* key)
Data types: scalar/opaque ABI only

## Recovered behavior

Gets a value from a QHash hash-table (6-byte getter thunk). Pass table ptr + key string, RETURNS the stored integer. Restored after accidental loss - address pass1-verified.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

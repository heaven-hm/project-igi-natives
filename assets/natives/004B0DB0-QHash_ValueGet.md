# QHash_ValueGet

| Field | Value |
|---|---|
| Address/hash | `0x004B0DB0` |
| Signature | `int QHash_ValueGet(int* table, char* key)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Gets a value from a QHash hash-table (6-byte getter thunk). Pass table ptr + key string, RETURNS the stored integer. Restored after accidental loss - address pass1-verified.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

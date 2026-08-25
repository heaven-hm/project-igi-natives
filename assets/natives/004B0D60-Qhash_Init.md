# Qhash_Init

| Field | Value |
|---|---|
| Address/hash | `0x004B0D60` |
| Signature | `void Qhash_Init(char hash_val)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Init hash table value, Params: hash value 0 or 1.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

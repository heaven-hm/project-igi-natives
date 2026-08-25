# Script_Init

| Field | Value |
|---|---|
| Address/hash | `0x004F0E50` |
| Signature | `void Script_Init(char* file_name,int8_t p2,int p3,int8_t p4)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Initialises the script system for a file. Params: file_name = script path, p2 = byte flag (observed), p3 = int option, p4 = byte flag. Refined types from decompiled header (two int8_t slots detected).

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

# Symbol_CheckRegister

| Field | Value |
|---|---|
| Address/hash | `0x004C0560` |
| Signature | `void* Symbol_CheckRegister(int* symTable, char* symName, int extra)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Checks a symbol and registers it if new - ERRORS via ErrorShow("Symbol \"%s\" already registered in hash table") if the name ALREADY exists, so it doubles as duplicate protection. Params: symTable, symName, extra = registration payload/flags. RETURNS symbol entry or triggers the error dialog.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

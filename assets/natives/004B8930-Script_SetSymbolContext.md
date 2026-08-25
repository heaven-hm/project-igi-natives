# Script_SetSymbolContext

| Field | Value |
|---|---|
| Address/hash | `0x004B8930` |
| Signature | `void Script_SetSymbolContext(byte *symbol_name,int** symbol_buf)` |
| Catalog source | `retail-string-context` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Name from igi.exe error string inside function: "Script_SetSymbolContext(): Symbol not found: %s". Sets the symbol context for subsequent script operations.

## How it was found

Retail evidence: Script_SetSymbolContext(): Symbol not found: %s.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

# MenuManager_SetLanguage

| Field | Value |
|---|---|
| Address/hash | `0x00417810` |
| Signature | `void MenuManager_SetLanguage(int langIndex)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Switches menu/UI language at runtime. Param: langIndex = language index matching the LANGUAGE\ folder tables. Call before pushing screens so texts load in the right language.

## How it was found

Retail evidence: MenuManager_SetLanguage.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

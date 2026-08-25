# MenuManager_SetEnabled

| Field | Value |
|---|---|
| Address/hash | `0x004179B0` |
| Signature | `void MenuManager_SetEnabled(int enabled)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Enables/disables menu-manager input processing. Param: enabled = 1 menus react to input, 0 frozen. Use to freeze menus during scripted sequences.

## How it was found

Retail evidence: MenuManager_SetEnabled.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

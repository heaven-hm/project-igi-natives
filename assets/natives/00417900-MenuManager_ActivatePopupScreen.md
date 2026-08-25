# MenuManager_ActivatePopupScreen

| Field | Value |
|---|---|
| Address/hash | `0x00417900` |
| Signature | `void MenuManager_ActivatePopupScreen(int popupId)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Activates a popup screen on top of the current menus (e.g. confirmation dialogs; retail scripts call MenuManager_ActivatePopupScreen(930)). Param: popupId = retail popup screen id. Use for custom confirmations.

## How it was found

Retail evidence: MenuManager_ActivatePopupScreen.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

# MenuManager_ForceUpdateWindow

| Field | Value |
|---|---|
| Address/hash | `0x00417880` |
| Signature | `void MenuManager_ForceUpdateWindow(int param)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Forces the menu manager to redraw/update its windows this frame. Param: observed retail value 0. Use after changing control contents from script.

## How it was found

Retail evidence: MenuManager_ForceUpdateWindow.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

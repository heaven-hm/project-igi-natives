# MenuManager_LeaveMenus

| Field | Value |
|---|---|
| Address/hash | `0x00417790` |
| Signature | `void MenuManager_LeaveMenus(int param1, int param2)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Leaves/closes the whole menu system returning to gameplay. Params: two ints observed in retail calls (pass 0,0). Use to exit from custom menus.

## How it was found

Retail evidence: MenuManager_LeaveMenus.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

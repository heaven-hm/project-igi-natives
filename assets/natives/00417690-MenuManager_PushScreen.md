# MenuManager_PushScreen

| Field | Value |
|---|---|
| Address/hash | `0x00417690` |
| Signature | `void MenuManager_PushScreen(int screenId)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Pushes a screen onto the menu stack: allocates the screen object (objsize 0x2898) and stores it in the manager's screen stack at mgr+0x27EC (verified in igi.exe). Param: screenId = retail screen id. Remember to MenuManager_PopScreen when done.

## How it was found

Retail evidence: MenuManager_PushScreen.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

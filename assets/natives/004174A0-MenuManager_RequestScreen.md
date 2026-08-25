# MenuManager_RequestScreen

| Field | Value |
|---|---|
| Address/hash | `0x004174A0` |
| Signature | `void MenuManager_RequestScreen(int screenId, int flags)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Requests a menu screen by id through the menu manager (queued request). Params: screenId = retail screen resource id, flags = request modifier (0 = normal). Use outside the menu stack internals when you just want a screen opened next tick.

## How it was found

Retail evidence: MenuManager_RequestScreen.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

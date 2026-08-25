# MenuManager_DeactivatePopuScreen

| Field | Value |
|---|---|
| Address/hash | `0x00417960` |
| Signature | `void MenuManager_DeactivatePopuScreen()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Deactivates the currently-active popup screen and returns to the screen beneath. Takes no args. Pair with MenuManager_ActivatePopupScreen. NOTE: name mirrors the retail registration string exactly, including its "Popu" typo - do not "fix" it against the binary.

## How it was found

Retail evidence: MenuManager_DeactivatePopuScreen.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

# MenuManager_PopScreen

| Field | Value |
|---|---|
| Address/hash | `0x00417710` |
| Signature | `void MenuManager_PopScreen(int param)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Pops the top screen off the menu stack (destroys it) revealing the one beneath. Param: param = pass-through argument observed in retail calls (pass 0). Pair with MenuManager_PushScreen.

## How it was found

Retail evidence: MenuManager_PopScreen.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

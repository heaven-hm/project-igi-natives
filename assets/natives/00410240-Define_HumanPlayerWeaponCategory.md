# Define_HumanPlayerWeaponCategory

| Field | Value |
|---|---|
| Address/hash | `0x00410240` |
| Signature | `void Define_HumanPlayerWeaponCategory(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Registers one weapon-category entry for the human player during a humanplayer definition block (argc unknown - parser context). Pairs with DefineHumanPlayerWeaponCycle/Cycle ordering.

## How it was found

Retail evidence: DefineHumanPlayerWeaponCategory.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

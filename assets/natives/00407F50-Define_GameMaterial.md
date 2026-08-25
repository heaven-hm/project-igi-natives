# Define_GameMaterial

| Field | Value |
|---|---|
| Address/hash | `0x00407F50` |
| Signature | `void Define_GameMaterial(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Defines a GameMaterial entry during a game-material definition block (855-byte parser function). Call only from gamematerial .qsc definition contexts; arg layout follows the Define block grammar (registration argc unknown).

## How it was found

Retail evidence: DefineGameMaterial.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

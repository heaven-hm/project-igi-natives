# GameMaterial_LoadParameters

| Field | Value |
|---|---|
| Address/hash | `0x00408350` |
| Signature | `void GameMaterial_LoadParameters(void)` |
| Catalog source | `retail-string-context` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Name from igi.exe error string inside function: "GameMaterial_LoadParameters: Couldn't load script \"%s\"". Loads game-material parameters from its script.

## How it was found

Retail evidence: GameMaterial_LoadParameters: Couldn't load script "%s".
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

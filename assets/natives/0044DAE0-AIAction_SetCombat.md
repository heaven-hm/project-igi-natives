# AIAction_SetCombat

| Field | Value |
|---|---|
| Address/hash | `0x0044DAE0` |
| Signature | `void AIAction_SetCombat(int enemyId)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Force-sets the AI's COMBAT ENEMY/target. Param: enemyId = enemy entity/id to engage. Use to make an AI attack a specific target regardless of detection.

## How it was found

Retail evidence: AIAction_SetCombat.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

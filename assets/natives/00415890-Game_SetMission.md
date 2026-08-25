# Game_SetMission

| Field | Value |
|---|---|
| Address/hash | `0x00415890` |
| Signature | `void Game_SetMission(int mission)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Selects the mission the game will run/load next. Param: mission = mission index 1..14. Use before Level_Start/level load flow when jumping straight into a mission.

## How it was found

Retail evidence: Game_SetMission.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

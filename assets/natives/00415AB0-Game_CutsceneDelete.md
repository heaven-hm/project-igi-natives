# Game_CutsceneDelete

| Field | Value |
|---|---|
| Address/hash | `0x00415AB0` |
| Signature | `void Game_CutsceneDelete(void)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Deletes/ends the running cutscene and frees its resources. Takes no args. | OUTRO USAGE: each level OBJECTS.QVM ends with a ConditionalContainer Task_New named "Outro cutscene" (condition e.g. "AreaActivate_156.nActive && !HumanPlayer_0.isDead") that calls MenuManager_SetEnabled(FALSE)+Game_DisableMusic()+THIS FUNCTION before playing the exit CutScene (e.g. CutScene_2222 heli escape), then restores menus/music on finish. TO REMOVE OUTROS: either patch that container condition to FALSE per OBJECTS.QVM, or hook CutScene_TaskUpdate 0x4F51D0 to complete instantly (generic - kills intro+outro in all levels). LEVEL4 example verified via OpenIGI QvmDisasm.

## How it was found

Retail evidence: Game_CutsceneDelete.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.

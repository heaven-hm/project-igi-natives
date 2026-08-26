# Game_CutsceneDelete

Address: 0x00415AB0
Signature: void Game_CutsceneDelete(void)
Data types: scalar/opaque ABI only

## Recovered behavior

Deletes/ends the running cutscene and frees its resources. Takes no args. | OUTRO USAGE: each level OBJECTS.QVM ends with a ConditionalContainer Task_New named "Outro cutscene" (condition e.g. "AreaActivate_156.nActive && !HumanPlayer_0.isDead") that calls MenuManager_SetEnabled(FALSE)+Game_DisableMusic()+THIS FUNCTION before playing the exit CutScene (e.g. CutScene_2222 heli escape), then restores menus/music on finish. TO REMOVE OUTROS: either patch that container condition to FALSE per OBJECTS.QVM, or hook CutScene_TaskUpdate 0x4F51D0 to complete instantly (generic - kills intro+outro in all levels). LEVEL4 example verified via OpenIGI QvmDisasm.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.

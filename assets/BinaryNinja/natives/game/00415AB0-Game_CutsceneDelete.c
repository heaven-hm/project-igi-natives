// Original IGI.EXE function: Game_CutsceneDelete (VA 0x00415AB0; static CFG gate FAIL, CFG score 0.833).
#include "Game_CutsceneDelete.h"
int32_t Game_CutsceneDelete(int32_t a1)

// Sig: void Game_CutsceneDelete(void)
// Note: Deletes/ends the running cutscene and frees its resources. Takes no
// args. | OUTRO USAGE: each level OBJECTS.QVM ends with a ConditionalContainer
// Task_New named "Outro cutscene" (condition e.g. "AreaActivate_156.nActive &&
// !HumanPlayer_0.isDead") that calls
// MenuManager_SetEnabled(FALSE)+Game_DisableMusic()+THIS FUNCTION before
// playing the exit CutScene (e.g. CutScene_2222 heli escape), then restores
// menus/music on finish. TO REMOVE OUTROS: either patch that container
// condition to FALSE per OBJECTS.QVM, or hook CutScene_TaskUpdate 0x4F51D0 to
// complete instantly (generic - kills intro+outro in all levels). LEVEL4
// example verified via OpenIGI QvmDisasm.
{
    int32_t* valA1 = g_57bab0;

    while (*valA1)
    {
        QTask_FindType(valA1[2]);
        valA1 = g_57bab0;
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

// Original IGI.EXE function: Game_SetMission (VA 0x00415890; static CFG gate FAIL, CFG score 0.833).
#include "Game_SetMission.h"
int32_t Game_SetMission(int32_t context, float param_2 )

// Sig: void Game_SetMission(int mission)
// Note: Selects the mission the game will run/load next. Param: mission =
// mission index 1..14. Use before Level_Start/level load flow when jumping
// straight into a mission.
{
    g_539560 = Script_GetArg(param_2, 0);
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

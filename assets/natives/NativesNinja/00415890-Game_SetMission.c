#include "00415890-Game_SetMission.h"
/* 0x00415890 Game_SetMission full linked: callers=0 callees=2 */
int32_t Game_SetMission(int32_t a1, float a2 @ 0xc)

// Sig: void Game_SetMission(int mission)
// Note: Selects the mission the game will run/load next. Param: mission =
// mission index 1..14. Use before Level_Start/level load flow when jumping
// straight into a mission.
{
    g_539560 = sub_4b8a20(a2, 0);
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

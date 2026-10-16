#include "GO_ActiveMission.h"
int32_t GO_ActiveMission(int32_t a1, float a2 @ 0xc)

// Sig: int GO_ActiveMission(int mission)
// Note: Sets the active (last-played) mission number for the current player
// profile. Param: mission = mission index 1..14. Use in profile/config scripts
// after GO_Player. Returns 1.
{
    int32_t valA1 = Script_GetArg(a2, 0);
    int32_t tmpD = g_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    (&g_bc2384)[tmpD * 0x159] = valA1;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

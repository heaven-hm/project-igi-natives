#include "00403750-GO_ActiveMission.h"
/* 0x00403750 GO_ActiveMission full linked: callers=0 callees=2 */
int32_t GO_ActiveMission(int32_t a1, float a2 @ 0xc)

// Sig: int GO_ActiveMission(int mission)
// Note: Sets the active (last-played) mission number for the current player
// profile. Param: mission = mission index 1..14. Use in profile/config scripts
// after GO_Player. Returns 1.
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    int32_t edx = g_bc2380;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    (&g_bc2384)[edx * 0x159] = eax_1;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

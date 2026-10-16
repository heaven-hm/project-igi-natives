#include "004057D0-Config_PlayerGetActiveMission.h"
/* 0x004057d0 Config_PlayerGetActiveMission full linked: callers=0 callees=2 */
int32_t Config_PlayerGetActiveMission(int32_t a1, int32_t a2 @ 0xc)

// Sig: int Config_PlayerGetActiveMission(int profileIndex)
// Note: Returns the active (reached) mission number of ANY profile. Param:
// profileIndex = 0-based profile index. Use on the profile/mission screens to
// show progress without switching profiles.
{
    char* var_8 = &g_567c74;
    int32_t eax_3 = (&g_bc28e8)[sub_4b8a20(a2, 0) * 0x159];
    int32_t var_18 = eax_3;
    double var_10 = eax_3;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

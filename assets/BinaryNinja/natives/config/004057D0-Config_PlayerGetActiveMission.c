#include "Config_PlayerGetActiveMission.h"
int32_t Config_PlayerGetActiveMission(int32_t a1, int32_t a2 @ 0xc)

// Sig: int Config_PlayerGetActiveMission(int profileIndex)
// Note: Returns the active (reached) mission number of ANY profile. Param:
// profileIndex = 0-based profile index. Use on the profile/mission screens to
// show progress without switching profiles.
{
    char* v_8 = &g_567c74;
    int32_t valA3 = (&g_bc28e8)[Script_GetArg(a2, 0) * 0x159];
    int32_t v_18 = valA3;
    double v_10 = valA3;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

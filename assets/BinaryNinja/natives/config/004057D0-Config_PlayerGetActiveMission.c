// Original IGI.EXE function: Config_PlayerGetActiveMission (VA 0x004057D0; static CFG gate FAIL, CFG score 0.833).
#include "Config_PlayerGetActiveMission.h"
int32_t Config_PlayerGetActiveMission(int32_t context, int32_t param_2 )

// Sig: int Config_PlayerGetActiveMission(int profileIndex)
// Note: Returns the active (reached) mission number of ANY profile. Param:
// profileIndex = 0-based profile index. Use on the profile/mission screens to
// show progress without switching profiles.
{
    char* item_8 = &g_567c74;
    int32_t data_3 = (&g_bc28e8)[Script_GetArg(param_2, 0) * 0x159];
    int32_t item_18 = data_3;
    double item_10 = data_3;
    memcpy(context, &item_18, 0x18);
    return context;
}

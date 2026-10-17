// Original IGI.EXE function: Config_SetActivePlayerProfileIndex (VA 0x00405050; static CFG gate FAIL, CFG score 0.833).
#include "Config_SetActivePlayerProfileIndex.h"
int32_t Config_SetActivePlayerProfileIndex(int32_t a1, float a2 @ 0xc)

// Sig: void Config_SetActivePlayerProfileIndex(int index)
// Note: Makes 'index' the active player profile. Param: index = 0-based profile
// index (must exist; see Config_GetNumberOfPlayerProfiles).
{
    g_bc2384 = Script_GetArg(a2, 0);
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

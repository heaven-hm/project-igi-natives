#include "00405050-Config_SetActivePlayerProfileIndex.h"
/* 0x00405050 Config_SetActivePlayerProfileIndex full linked: callers=0 callees=2 */
int32_t Config_SetActivePlayerProfileIndex(int32_t a1, float a2 @ 0xc)

// Sig: void Config_SetActivePlayerProfileIndex(int index)
// Note: Makes 'index' the active player profile. Param: index = 0-based profile
// index (must exist; see Config_GetNumberOfPlayerProfiles).
{
    g_bc2384 = sub_4b8a20(a2, 0);
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

#include "004055C0-Config_GraphicOptionsGetPerfFlagsFromLevel.h"
/* 0x004055c0 Config_GraphicOptionsGetPerfFlagsFromLevel full linked: callers=0 callees=3 */
int32_t Config_GraphicOptionsGetPerfFlagsFromLevel(int32_t a1, float a2 @ 0xc)

// Sig: int Config_GraphicOptionsGetPerfFlagsFromLevel(int level)
// Note: Converts a detail LEVEL number into its performance-flag bitmask.
// Param: level = 0..Config_GraphicOptionsNumPerfLevels()-1. Use when the user
// picks a named detail preset.
{
    int32_t eax_1 = *((sub_4b8a20(a2, 0) << 2) + &g_537b74);
    int32_t var_2c = 0;
    float var_30 = a2;
    int32_t var_18 = eax_1;
    double var_10 = *((sub_4b8a20(var_30, var_2c) << 2) + &g_537b74);
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

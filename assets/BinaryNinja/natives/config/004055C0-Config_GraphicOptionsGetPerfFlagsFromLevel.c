// Original IGI.EXE function: Config_GraphicOptionsGetPerfFlagsFromLevel (VA 0x004055C0; static CFG gate PASS, CFG score 0.889).
#include "Config_GraphicOptionsGetPerfFlagsFromLevel.h"
int32_t Config_GraphicOptionsGetPerfFlagsFromLevel(int32_t a1, float a2 @ 0xc)

// Sig: int Config_GraphicOptionsGetPerfFlagsFromLevel(int level)
// Note: Converts a detail LEVEL number into its performance-flag bitmask.
// Param: level = 0..Config_GraphicOptionsNumPerfLevels()-1. Use when the user
// picks a named detail preset.
{
    int32_t valA1 = *((Script_GetArg(a2, 0) << 2) + &g_537b74);
    int32_t v_2c = 0;
    float v_30 = a2;
    int32_t v_18 = valA1;
    double v_10 = *((Script_GetArg(v_30, v_2c) << 2) + &g_537b74);
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

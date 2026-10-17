// Original IGI.EXE function: Config_GraphicOptionsGetPerfFlagsFromLevel (VA 0x004055C0; static CFG gate PASS, CFG score 0.889).
#include "Config_GraphicOptionsGetPerfFlagsFromLevel.h"
int32_t Config_GraphicOptionsGetPerfFlagsFromLevel(int32_t context, float param_2 )

// Sig: int Config_GraphicOptionsGetPerfFlagsFromLevel(int level)
// Note: Converts a detail LEVEL number into its performance-flag bitmask.
// Param: level = 0..Config_GraphicOptionsNumPerfLevels()-1. Use when the user
// picks a named detail preset.
{
    int32_t data_1 = *((Script_GetArg(param_2, 0) << 2) + &g_537b74);
    int32_t item_2c = 0;
    float item_30 = param_2;
    int32_t item_18 = data_1;
    double item_10 = *((Script_GetArg(item_30, item_2c) << 2) + &g_537b74);
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

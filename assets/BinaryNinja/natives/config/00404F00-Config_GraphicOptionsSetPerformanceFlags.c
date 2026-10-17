// Original IGI.EXE function: Config_GraphicOptionsSetPerformanceFlags (VA 0x00404F00; static CFG gate PASS, CFG score 0.889).
#include "Config_GraphicOptionsSetPerformanceFlags.h"
int32_t Config_GraphicOptionsSetPerformanceFlags(int32_t context, float param_2 )

// Sig: void Config_GraphicOptionsSetPerformanceFlags(int flags)
// Note: Sets the raw graphics performance/detail flag bits on the active
// profile. Param: flags = bitmask (get a valid one from
// Config_GraphicOptionsGetPerfFlagsFromLevel).
{
    *(Config_GetActiveGraphicOptions() + 0xc) = Script_GetArg(param_2, 0);
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

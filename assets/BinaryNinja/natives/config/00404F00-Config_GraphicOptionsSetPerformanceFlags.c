#include "Config_GraphicOptionsSetPerformanceFlags.h"
int32_t Config_GraphicOptionsSetPerformanceFlags(int32_t a1, float a2 @ 0xc)

// Sig: void Config_GraphicOptionsSetPerformanceFlags(int flags)
// Note: Sets the raw graphics performance/detail flag bits on the active
// profile. Param: flags = bitmask (get a valid one from
// Config_GraphicOptionsGetPerfFlagsFromLevel).
{
    *(Config_GetActiveGraphicOptions() + 0xc) = Script_GetArg(a2, 0);
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

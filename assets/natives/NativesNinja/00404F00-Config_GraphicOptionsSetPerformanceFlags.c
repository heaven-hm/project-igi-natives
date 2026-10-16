#include "00404F00-Config_GraphicOptionsSetPerformanceFlags.h"
/* 0x00404f00 Config_GraphicOptionsSetPerformanceFlags full linked: callers=0 callees=3 */
int32_t Config_GraphicOptionsSetPerformanceFlags(int32_t a1, float a2 @ 0xc)

// Sig: void Config_GraphicOptionsSetPerformanceFlags(int flags)
// Note: Sets the raw graphics performance/detail flag bits on the active
// profile. Param: flags = bitmask (get a valid one from
// Config_GraphicOptionsGetPerfFlagsFromLevel).
{
    *(Config_GetActiveGraphicOptions() + 0xc) = sub_4b8a20(a2, 0);
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

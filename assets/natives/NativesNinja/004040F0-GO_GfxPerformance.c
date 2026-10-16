#include "004040F0-GO_GfxPerformance.h"
/* 0x004040f0 GO_GfxPerformance full linked: callers=0 callees=2 */
int32_t GO_GfxPerformance(int32_t a1, float a2 @ 0xc)

// Sig: int GO_GfxPerformance(int flags)
// Note: Sets graphics performance/detail flags for the current profile. Param:
// flags = bitmask from the detail-level mapping (see
// Config_GraphicOptionsGetPerfFlagsFromLevel). Use in config scripts. Returns
// 1.
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    int32_t edx = g_bc2380;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    *(edx * 0x564 + &g_bc1e3c) = eax_1;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

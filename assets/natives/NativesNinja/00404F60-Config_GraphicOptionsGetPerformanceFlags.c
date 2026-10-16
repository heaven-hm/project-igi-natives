#include "00404F60-Config_GraphicOptionsGetPerformanceFlags.h"
/* 0x00404f60 Config_GraphicOptionsGetPerformanceFlags full linked: callers=0 callees=3 */
int32_t Config_GraphicOptionsGetPerformanceFlags(int32_t a1)

// Sig: int Config_GraphicOptionsGetPerformanceFlags()
// Note: Returns the active profile's graphics performance flag bitmask.
{
    int32_t var_18 = *(Config_GetActiveGraphicOptions() + 0xc);
    double var_10 = *(Config_GetActiveGraphicOptions() + 0xc);
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

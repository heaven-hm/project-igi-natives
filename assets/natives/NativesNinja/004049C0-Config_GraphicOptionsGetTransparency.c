#include "004049C0-Config_GraphicOptionsGetTransparency.h"
/* 0x004049c0 Config_GraphicOptionsGetTransparency full linked: callers=0 callees=3 */
int32_t Config_GraphicOptionsGetTransparency(int32_t a1)

// Sig: int Config_GraphicOptionsGetTransparency()
// Note: Returns 1 if transparency is enabled for the active profile, else 0.
{
    int32_t var_18 = *(Config_GetActiveGraphicOptions() + 0x10);
    char* var_8 = &g_567c74;
    double var_10 = *(Config_GetActiveGraphicOptions() + 0x10);
    memcpy(a1, &var_18, 0x18);
    return a1;
}

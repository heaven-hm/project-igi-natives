#include "00404960-Config_GraphicOptionsSetTransparency.h"
/* 0x00404960 Config_GraphicOptionsSetTransparency full linked: callers=0 callees=3 */
int32_t Config_GraphicOptionsSetTransparency(int32_t a1, float a2 @ 0xc)

// Sig: void Config_GraphicOptionsSetTransparency(int onOff)
// Note: Toggles transparency for the active profile. Param: onOff = 1 enable, 0
// disable. Video-options screen.
{
    *(Config_GetActiveGraphicOptions() + 0x10) = sub_4b8a20(a2, 0);
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

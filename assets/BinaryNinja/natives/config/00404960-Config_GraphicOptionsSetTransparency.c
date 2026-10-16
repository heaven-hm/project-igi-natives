#include "Config_GraphicOptionsSetTransparency.h"
int32_t Config_GraphicOptionsSetTransparency(int32_t a1, float a2 @ 0xc)

// Sig: void Config_GraphicOptionsSetTransparency(int onOff)
// Note: Toggles transparency for the active profile. Param: onOff = 1 enable, 0
// disable. Video-options screen.
{
    *(Config_GetActiveGraphicOptions() + 0x10) = Script_GetArg(a2, 0);
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

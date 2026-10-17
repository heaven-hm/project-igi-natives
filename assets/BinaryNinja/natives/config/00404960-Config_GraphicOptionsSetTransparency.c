// Original IGI.EXE function: Config_GraphicOptionsSetTransparency (VA 0x00404960; static CFG gate PASS, CFG score 0.889).
#include "Config_GraphicOptionsSetTransparency.h"
int32_t Config_GraphicOptionsSetTransparency(int32_t context, float param_2 )

// Sig: void Config_GraphicOptionsSetTransparency(int onOff)
// Note: Toggles transparency for the active profile. Param: onOff = 1 enable, 0
// disable. Video-options screen.
{
    *(Config_GetActiveGraphicOptions() + 0x10) = Script_GetArg(param_2, 0);
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

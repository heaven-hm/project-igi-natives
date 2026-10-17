// Original IGI.EXE function: Config_GraphicOptionsSetResolution (VA 0x00404510; static CFG gate PASS, CFG score 0.933).
#include "Config_GraphicOptionsSetResolution.h"
int32_t Config_GraphicOptionsSetResolution(int32_t context, float param_2 )

// Sig: void Config_GraphicOptionsSetResolution(int modeIndex)
// Note: Applies a screen resolution to the active profile and re-initialises
// the display. Param: modeIndex = index from Config_FillScreenResolutionListBox
// entries. Use in the video-options screen script.
{
    int32_t data_1 = Script_GetArg(param_2, 0);
    *(Config_GetActiveGraphicOptions() + 8) = data_1 >> 0x1a & 0x3f;
    *Config_GetActiveGraphicOptions() = data_1 >> 0xd & 0x1fff;
    *(Config_GetActiveGraphicOptions() + 4) = data_1 & 0x1fff;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

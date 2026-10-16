#include "00404510-Config_GraphicOptionsSetResolution.h"
/* 0x00404510 Config_GraphicOptionsSetResolution full linked: callers=0 callees=5 */
int32_t Config_GraphicOptionsSetResolution(int32_t a1, float a2 @ 0xc)

// Sig: void Config_GraphicOptionsSetResolution(int modeIndex)
// Note: Applies a screen resolution to the active profile and re-initialises
// the display. Param: modeIndex = index from Config_FillScreenResolutionListBox
// entries. Use in the video-options screen script.
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    *(Config_GetActiveGraphicOptions() + 8) = eax_1 >> 0x1a & 0x3f;
    *Config_GetActiveGraphicOptions() = eax_1 >> 0xd & 0x1fff;
    *(Config_GetActiveGraphicOptions() + 4) = eax_1 & 0x1fff;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

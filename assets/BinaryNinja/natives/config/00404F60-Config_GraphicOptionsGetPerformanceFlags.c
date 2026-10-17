// Original IGI.EXE function: Config_GraphicOptionsGetPerformanceFlags (VA 0x00404F60; static CFG gate PASS, CFG score 0.889).
#include "Config_GraphicOptionsGetPerformanceFlags.h"
int32_t Config_GraphicOptionsGetPerformanceFlags(int32_t context)

// Sig: int Config_GraphicOptionsGetPerformanceFlags()
// Note: Returns the active profile's graphics performance flag bitmask.
{
    int32_t item_18 = *(Config_GetActiveGraphicOptions() + 0xc);
    double item_10 = *(Config_GetActiveGraphicOptions() + 0xc);
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

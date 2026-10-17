// Original IGI.EXE function: Config_GraphicOptionsGetTransparency (VA 0x004049C0; static CFG gate PASS, CFG score 0.889).
#include "Config_GraphicOptionsGetTransparency.h"
int32_t Config_GraphicOptionsGetTransparency(int32_t context)

// Sig: int Config_GraphicOptionsGetTransparency()
// Note: Returns 1 if transparency is enabled for the active profile, else 0.
{
    int32_t item_18 = *(Config_GetActiveGraphicOptions() + 0x10);
    char* item_8 = &g_567c74;
    double item_10 = *(Config_GetActiveGraphicOptions() + 0x10);
    memcpy(context, &item_18, 0x18);
    return context;
}

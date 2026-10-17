// Original IGI.EXE function: Config_GraphicOptionsGetGamma (VA 0x00404910; static CFG gate PASS, CFG score 0.889).
#include "Config_GraphicOptionsGetGamma.h"
int32_t Config_GraphicOptionsGetGamma(int32_t context)

// Sig: float Config_GraphicOptionsGetGamma()
// Note: Returns the active profile's gamma as a float. Use to initialise your
// own gamma slider/UI.
{
    int32_t item_18 = *(Config_GetActiveGraphicOptions() + 0x214);
    char* item_8 = &g_567c74;
    double item_10 = *(Config_GetActiveGraphicOptions() + 0x214);
    memcpy(context, &item_18, 0x18);
    return context;
}

#include "Config_GraphicOptionsGetGamma.h"
int32_t Config_GraphicOptionsGetGamma(int32_t a1)

// Sig: float Config_GraphicOptionsGetGamma()
// Note: Returns the active profile's gamma as a float. Use to initialise your
// own gamma slider/UI.
{
    int32_t v_18 = *(Config_GetActiveGraphicOptions() + 0x214);
    char* v_8 = &g_567c74;
    double v_10 = *(Config_GetActiveGraphicOptions() + 0x214);
    memcpy(a1, &v_18, 0x18);
    return a1;
}

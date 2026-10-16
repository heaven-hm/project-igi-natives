#include "00404910-Config_GraphicOptionsGetGamma.h"
/* 0x00404910 Config_GraphicOptionsGetGamma full linked: callers=0 callees=3 */
int32_t Config_GraphicOptionsGetGamma(int32_t a1)

// Sig: float Config_GraphicOptionsGetGamma()
// Note: Returns the active profile's gamma as a float. Use to initialise your
// own gamma slider/UI.
{
    int32_t var_18 = *(Config_GetActiveGraphicOptions() + 0x214);
    char* var_8 = &g_567c74;
    double var_10 = *(Config_GetActiveGraphicOptions() + 0x214);
    memcpy(a1, &var_18, 0x18);
    return a1;
}

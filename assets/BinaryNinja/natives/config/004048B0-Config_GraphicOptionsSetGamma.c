// Original IGI.EXE function: Config_GraphicOptionsSetGamma (VA 0x004048B0; static CFG gate PASS, CFG score 0.889).
#include "Config_GraphicOptionsSetGamma.h"
int32_t Config_GraphicOptionsSetGamma(long double context , int32_t param_2, float param_3 )

// Sig: void Config_GraphicOptionsSetGamma(float gamma)
// Note: Sets and immediately applies gamma to the active profile (also feeds
// the live lighting math through the profile record +0x220). Param: gamma =
// float (retail default 1.0). Use in video-options screen script or your own
// gamma slider.
{
    Profile_ValueSet(param_3, 0.0f);
    *(Config_GetActiveGraphicOptions() + 0x214) = context;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}

// Original IGI.EXE function: Config_GraphicOptionsSetGamma (VA 0x004048B0; static CFG gate PASS, CFG score 0.889).
#include "Config_GraphicOptionsSetGamma.h"
int32_t Config_GraphicOptionsSetGamma(long double a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: void Config_GraphicOptionsSetGamma(float gamma)
// Note: Sets and immediately applies gamma to the active profile (also feeds
// the live lighting math through the profile record +0x220). Param: gamma =
// float (retail default 1.0). Use in video-options screen script or your own
// gamma slider.
{
    Profile_ValueSet(a3, 0f);
    *(Config_GetActiveGraphicOptions() + 0x214) = a1;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}

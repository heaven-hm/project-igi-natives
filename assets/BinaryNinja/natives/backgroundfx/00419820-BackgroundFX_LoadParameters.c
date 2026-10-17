// Original IGI.EXE function: BackgroundFX_LoadParameters (VA 0x00419820; static CFG gate PASS, CFG score 1.000).
#include "BackgroundFX_LoadParameters.h"
int32_t BackgroundFX_LoadParameters(float a1)

{
    float valA = *(a1 + 0x20);
    g_a84a50 = 0;
    float v_c = a1;
    g_a84a58 = 0;
    BackgroundFX_OnEvent(valA);
    float v_c_1 = a1;
    return BackgroundFX_OnEvent(valA + 1f);
}

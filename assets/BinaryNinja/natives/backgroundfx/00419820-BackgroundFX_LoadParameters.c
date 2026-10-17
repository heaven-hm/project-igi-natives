// Original IGI.EXE function: BackgroundFX_LoadParameters (VA 0x00419820; static CFG gate PASS, CFG score 1.000).
#include "BackgroundFX_LoadParameters.h"
int32_t BackgroundFX_LoadParameters(float context)

{
    float data_val = *(context + 0x20);
    g_a84a50 = 0;
    float item_c = context;
    g_a84a58 = 0;
    BackgroundFX_OnEvent(data_val);
    float item_c_1 = context;
    return BackgroundFX_OnEvent(data_val + 1.0f);
}

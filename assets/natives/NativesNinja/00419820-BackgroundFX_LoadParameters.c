#include "00419820-BackgroundFX_LoadParameters.h"
/* 0x00419820 BackgroundFX_LoadParameters full linked: callers=0 callees=2 */
int32_t BackgroundFX_LoadParameters(float a1)

{
    float eax = *(a1 + 0x20);
    g_a84a50 = 0;
    float var_c = a1;
    g_a84a58 = 0;
    BackgroundFX_OnEvent(eax);
    float var_c_1 = a1;
    return BackgroundFX_OnEvent(eax + 1f);
}

#include "gi_platform.h"
#include "00419820-BackgroundFX_LoadParameters.h"
int32_t BackgroundFX_LoadParameters(float a1)

{
    float valA = (*(int32_t*)(uintptr_t)(a1 + 0x20));
    g_a84a50 = 0;
    float v_c = a1;
    g_a84a58 = 0;
    BackgroundFX_OnEvent(valA);
    float v_c_1 = a1;
    return BackgroundFX_OnEvent(valA + 1.0f);
}

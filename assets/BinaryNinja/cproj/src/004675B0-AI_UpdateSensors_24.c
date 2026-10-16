#include "gi_platform.h"
#include "004675B0-AI_UpdateSensors_24.h"
int32_t AI_UpdateSensors_24(float* a1, float a2, void* a3)

{
    float* srcS = a2;
    a2 = g_c28b44 * 0.5.0f / (srcS[2] * (*(int32_t*)(uintptr_t)(a3 + 8)));
    *a1 = g_c28b44 * 0.5.0f + a2 * *srcS;
    a2 = Display_ClearSurfaces_4() * srcS[1] * a2;
    a1[1] = g_c28b48 * 0.5.0f + a2;
    return 0xc28b40;
}

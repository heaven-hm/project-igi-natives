#include "004675B0-AI_UpdateSensors_24.h"
/* 0x004675b0 AI_UpdateSensors_24 full linked: callers=4 callees=4 */
int32_t sub_4675b0(float* a1, float a2, void* a3)

{
    float* esi = a2;
    a2 = g_c28b44 * 0.5f / (esi[2] * *(a3 + 8));
    *a1 = g_c28b44 * 0.5f + a2 * *esi;
    a2 = sub_491d40() * esi[1] * a2;
    a1[1] = g_c28b48 * 0.5f + a2;
    return 0xc28b40;
}

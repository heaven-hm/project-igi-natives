#include "gi_platform.h"
#include "004D06C0-Render_DrawLightmapMesh.h"
int32_t Render_DrawLightmapMesh(float a1, int32_t a2)

{
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - g_bcab08;
    long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - g_bcab10;
    long double x87_r5_1 = (*(int32_t*)(uintptr_t)(a1 + 0x30)) - g_bcab18;
    long double x87_r4_5 = g_bcaaf4 * x87_r5_1;
    long double x87_r3_5 = g_bcaaf0 * x87_r6_1;
    float v_c = g_bcaae8 * x87_r5_1 + g_bcaae4 * x87_r6_1 + g_bcaae0 * x87_r7_1;
    float v_8 = x87_r4_5 + x87_r3_5 + g_bcaaec * x87_r7_1;
    float v_4 = g_bcab00 * x87_r5_1 + g_bcaafc * x87_r6_1 + g_bcaaf8 * x87_r7_1;
    return Render_DrawBoneMesh(&v_c, (*(int32_t*)(uintptr_t)(*(*(**(a1 + 0x74) + 0xc) + 0xc) + 0x3c)) * 1.40999997.0f, a2);
}

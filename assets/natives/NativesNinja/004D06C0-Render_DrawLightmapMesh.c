#include "004D06C0-Render_DrawLightmapMesh.h"
/* 0x004d06c0 Render_DrawLightmapMesh full linked: callers=2 callees=1 */
int32_t sub_4d06c0(float a1, int32_t a2)

{
    long double x87_r7_1 = *(a1 + 0x20) - g_bcab08;
    long double x87_r6_1 = *(a1 + 0x28) - g_bcab10;
    long double x87_r5_1 = *(a1 + 0x30) - g_bcab18;
    long double x87_r4_5 = g_bcaaf4 * x87_r5_1;
    long double x87_r3_5 = g_bcaaf0 * x87_r6_1;
    float var_c = g_bcaae8 * x87_r5_1 + g_bcaae4 * x87_r6_1 + g_bcaae0 * x87_r7_1;
    float var_8 = x87_r4_5 + x87_r3_5 + g_bcaaec * x87_r7_1;
    float var_4 = g_bcab00 * x87_r5_1 + g_bcaafc * x87_r6_1 + g_bcaaf8 * x87_r7_1;
    return sub_4d03d0(&var_c, *(*(*(**(a1 + 0x74) + 0xc) + 0xc) + 0x3c) * 1.40999997f, a2);
}

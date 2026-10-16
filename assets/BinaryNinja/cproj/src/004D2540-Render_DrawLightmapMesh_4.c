#include "gi_platform.h"
#include "004D2540-Render_DrawLightmapMesh_4.h"
int32_t Render_DrawLightmapMesh_4(void* a1)

{
    g_b12c58 = g_b16c98;
    g_b97df0 = 0xffffffff;
    g_a538dc = 0;
    g_a538e0 = 0;
    g_b12c20 = 0;
    g_b12b40 = 0;
    g_b16ca0 = a1;
    g_b12bc0 = (*(int32_t*)(uintptr_t)(a1 + 0xde0));
    g_b12bc4 = (*(int32_t*)(uintptr_t)(a1 + 0xde4));
    g_b12bc8 = (*(int32_t*)(uintptr_t)(a1 + 0xde8));
    g_b16c70 = (*(int32_t*)(uintptr_t)(a1 + 0xde0));
    g_b16c74 = (*(int32_t*)(uintptr_t)(a1 + 0xde4));
    g_b16c78 = (*(int32_t*)(uintptr_t)(a1 + 0xde8));
    g_b12ba0 = (*(int32_t*)(uintptr_t)(a1 + 0xde0));
    g_b12ba8 = (*(int32_t*)(uintptr_t)(a1 + 0xde4));
    long double x87_r7_5 = (*(int32_t*)(uintptr_t)(a1 + 0xde8));
    g_a538d8 = 0;
    g_b12bb0 = x87_r7_5;
    long double x87_r7_6 = g_bcab20;
    long double f0 = 1.0f;
    x87_r7_6 - f0;
    int32_t valA2;

    if (*(&((x87_r7_6 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f0) ? 1 : 0) << 0xa
            | (x87_r7_6 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
        valA2 = g_54844c / Camera_ApplyPostProcess_5(0.5, g_bcab20);
    else
        valA2 = g_54844c;

    g_b16c6c = valA2;

    if (valA2 < 0x46)
        g_b16c6c = 0x46;

    return Render_ShouldHaveAllocatedD(a1);
}

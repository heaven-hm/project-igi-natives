// Original IGI.EXE function: Render_DrawLightmapMesh_4 (VA 0x004D2540; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawLightmapMesh_4.h"
int32_t Render_DrawLightmapMesh_4(void* context)

{
    g_b12c58 = g_b16c98;
    g_b97df0 = 0xffffffff;
    g_a538dc = 0;
    g_a538e0 = 0;
    g_b12c20 = 0;
    g_b12b40 = 0;
    g_b16ca0 = context;
    g_b12bc0 = *(context + 0xde0);
    g_b12bc4 = *(context + 0xde4);
    g_b12bc8 = *(context + 0xde8);
    g_b16c70 = *(context + 0xde0);
    g_b16c74 = *(context + 0xde4);
    g_b16c78 = *(context + 0xde8);
    g_b12ba0 = *(context + 0xde0);
    g_b12ba8 = *(context + 0xde4);
    long double fpu_val_7_5 = *(context + 0xde8);
    g_a538d8 = 0;
    g_b12bb0 = fpu_val_7_5;
    long double fpu_val_7_6 = g_bcab20;
    long double f0 = 1.0f;
    fpu_val_7_6 - f0;
    int32_t data_2;

    if (*(&((fpu_val_7_6 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_6 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
        data_2 = g_54844c / Camera_ApplyPostProcess_5(0.5, g_bcab20);
    else
        data_2 = g_54844c;

    g_b16c6c = data_2;

    if (data_2 < 0x46)
        g_b16c6c = 0x46;

    return Render_ShouldHaveAllocatedD(context);
}

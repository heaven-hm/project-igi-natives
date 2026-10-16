#include "004D2540-Render_DrawLightmapMesh_4.h"
/* 0x004d2540 Render_DrawLightmapMesh_4 full linked: callers=1 callees=2 */
int32_t sub_4d2540(void* a1)

{
    g_b12c58 = g_b16c98;
    g_b97df0 = 0xffffffff;
    g_a538dc = 0;
    g_a538e0 = 0;
    g_b12c20 = 0;
    g_b12b40 = 0;
    g_b16ca0 = a1;
    g_b12bc0 = *(a1 + 0xde0);
    g_b12bc4 = *(a1 + 0xde4);
    g_b12bc8 = *(a1 + 0xde8);
    g_b16c70 = *(a1 + 0xde0);
    g_b16c74 = *(a1 + 0xde4);
    g_b16c78 = *(a1 + 0xde8);
    g_b12ba0 = *(a1 + 0xde0);
    g_b12ba8 = *(a1 + 0xde4);
    long double x87_r7_5 = *(a1 + 0xde8);
    g_a538d8 = 0;
    g_b12bb0 = x87_r7_5;
    long double x87_r7_6 = g_bcab20;
    long double temp0 = 1f;
    x87_r7_6 - temp0;
    int32_t eax_2;

    if (*(&((x87_r7_6 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp0) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41)
        eax_2 = g_54844c / sub_4a5760(0.5, g_bcab20);
    else
        eax_2 = g_54844c;

    g_b16c6c = eax_2;

    if (eax_2 < 0x46)
        g_b16c6c = 0x46;

    return sub_4d14e0(a1);
}

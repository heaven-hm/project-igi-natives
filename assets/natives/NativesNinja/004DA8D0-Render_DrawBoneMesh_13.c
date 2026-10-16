#include "004DA8D0-Render_DrawBoneMesh_13.h"
/* 0x004da8d0 Render_DrawBoneMesh_13 full linked: callers=1 callees=1 */
int32_t sub_4da8d0(int32_t a1, int32_t* a2, int32_t a3)

{
    int32_t result = g_b04260;
    int32_t edx = g_b03f90 + 1;
    g_b03f90 = edx;

    if (result < 0xa && edx <= 0x17)
    {
        void* edx_1 = result * 0x28 + &g_b03e00;
        int32_t ecx_3 = g_b03df0;
        *((ecx_3 << 2) + &g_b04200) = result + 0x10000;
        g_b03df0 = ecx_3 + 1;
        g_b04260 = result + 1;
        memcpy(edx_1, a1, 0x18);
        *(edx_1 + 0x18) = *a2;
        *(edx_1 + 0x1c) = a2[1];
        *(edx_1 + 0x20) = a2[2];
        result = a3;
        *(edx_1 + 0x24) = result;
    }

    return result;
}

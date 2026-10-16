#include "Render_DrawBoneMesh_13.h"
int32_t Render_DrawBoneMesh_13(int32_t a1, int32_t* a2, int32_t a3)

{
    int32_t result = g_b04260;
    int32_t tmpD = g_b03f90 + 1;
    g_b03f90 = tmpD;

    if (result < 0xa && tmpD <= 0x17)
    {
        void* tmpD1 = result * 0x28 + &g_b03e00;
        int32_t objC3 = g_b03df0;
        *((objC3 << 2) + &g_b04200) = result + 0x10000;
        g_b03df0 = objC3 + 1;
        g_b04260 = result + 1;
        memcpy(tmpD1, a1, 0x18);
        *(tmpD1 + 0x18) = *a2;
        *(tmpD1 + 0x1c) = a2[1];
        *(tmpD1 + 0x20) = a2[2];
        result = a3;
        *(tmpD1 + 0x24) = result;
    }

    return result;
}

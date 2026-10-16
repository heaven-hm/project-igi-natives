#include "004DA950-Render_DrawSplineMesh_13.h"
/* 0x004da950 Render_DrawSplineMesh_13 full linked: callers=1 callees=1 */
void sub_4da950(int32_t a1, int32_t* a2, int32_t a3, int32_t* a4, float a5)

{
    g_b03f90 += 1;
    int32_t ecx_1 = g_b0425c;

    if (ecx_1 >= 0xa || g_b03f90 > 0x17)
        return;

    int32_t edx_1 = g_b03df0;
    long double st0_1;
    bool c1_1;
    bool c2_1;
    st0_1 = __fcos(a5 * 0.5f);
    *((edx_1 << 2) + &g_b04200) = ecx_1 + 0x20000;
    g_b0425c = ecx_1 + 1;
    g_b03df0 = edx_1 + 1;
    memcpy(ecx_1 * 0x38 + &g_b03fa0, a1, 0x18);
    *(ecx_1 * 0x38 + 0xb03fb8) = *a2;
    *(ecx_1 * 0x38 + 0xb03fbc) = a2[1];
    *(ecx_1 * 0x38 + 0xb03fc0) = a2[2];
    *(ecx_1 * 0x38 + 0xb03fc4) = a3;
    *(ecx_1 * 0x38 + 0xb03fc8) = *a4;
    *(ecx_1 * 0x38 + 0xb03fcc) = a4[1];
    *(ecx_1 * 0x38 + 0xb03fd0) = a4[2];
    *(ecx_1 * 0x38 + 0xb03fd4) = st0_1;
}

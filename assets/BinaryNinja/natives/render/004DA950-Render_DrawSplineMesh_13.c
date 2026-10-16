#include "Render_DrawSplineMesh_13.h"
void Render_DrawSplineMesh_13(int32_t a1, int32_t* a2, int32_t a3, int32_t* a4, float a5)

{
    g_b03f90 += 1;
    int32_t objC1 = g_b0425c;

    if (objC1 >= 0xa || g_b03f90 > 0x17)
        return;

    int32_t tmpD1 = g_b03df0;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(a5 * 0.5f);
    *((tmpD1 << 2) + &g_b04200) = objC1 + 0x20000;
    g_b0425c = objC1 + 1;
    g_b03df0 = tmpD1 + 1;
    memcpy(objC1 * 0x38 + &g_b03fa0, a1, 0x18);
    *(objC1 * 0x38 + 0xb03fb8) = *a2;
    *(objC1 * 0x38 + 0xb03fbc) = a2[1];
    *(objC1 * 0x38 + 0xb03fc0) = a2[2];
    *(objC1 * 0x38 + 0xb03fc4) = a3;
    *(objC1 * 0x38 + 0xb03fc8) = *a4;
    *(objC1 * 0x38 + 0xb03fcc) = a4[1];
    *(objC1 * 0x38 + 0xb03fd0) = a4[2];
    *(objC1 * 0x38 + 0xb03fd4) = fp0_1;
}

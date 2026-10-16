#include "0049B2D0-Display_CreateSurface_18.h"
/* 0x0049b2d0 Display_CreateSurface_18 full linked: callers=6 callees=0 */
int32_t sub_49b2d0(float a1, float a2)

{
    double* eax = a1;
    long double x87_r7 = g_b46d04;
    long double x87_r3_3 = g_bcab00 * (eax[2] - g_bcab18)
        + g_bcaafc * (eax[1] - g_bcab10) + g_bcaaf8 * (*eax - g_bcab08);
    a1 = x87_r3_3 - a2;
    float var_14 = x87_r3_3 + a2;
    long double x87_r6_7 =
        g_bcabec * a1 * x87_r7 * (1.4426950407214463 + 1.675171316223821e-10);
    long double x87_r5_9 = roundl(x87_r6_7);
    long double st0;
    bool c1;
    st0 = __f2xm1(x87_r6_7 - x87_r5_9);
    long double st0_1;
    bool c1_1;
    st0_1 = __fscale(st0 + 1, x87_r5_9);
    a2 = 1f / st0_1;
    long double x87_r6_14 =
        g_bcabec * var_14 * x87_r7 * (1.4426950407214463 + 1.675171316223821e-10);
    long double x87_r5_17 = roundl(x87_r6_14);
    long double st0_2;
    bool c1_2;
    st0_2 = __f2xm1(x87_r6_14 - x87_r5_17);
    long double st0_3;
    bool c1_3;
    st0_3 = __fscale(st0_2 + 1, x87_r5_17);
    long double x87_r7_2 = 1f / st0_3;
    long double x87_r7_3 = x87_r7_2 - a2;
    long double temp1 = 0f;
    x87_r7_3 - temp1;
    long double x87_r7_4;
    long double temp2_1;

    if (!(*(&((x87_r7_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        x87_r7_4 = a2;
        temp2_1 = 0f;
        x87_r7_4 - temp2_1;
    }

    if (*(&((x87_r7_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40 || *(&((x87_r7_4 < temp2_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe) + 1)
        & 0x40)
    {
        a2 = 0f;
        a1 = 0f;
    }
    else
    {
        long double x87_r7_8 = (x87_r7_2 * a1 - a2 * var_14) / x87_r7_3;
        a2 = (x87_r7_8 - (x87_r7_8 - a1) / a2) * g_bcabec;
        a1 = g_bcabec * x87_r7_8;
    }

    int32_t* eax_2 = g_5ca114;
    (*(*eax_2 + 0x50))(eax_2, 0x24, a2);
    int32_t* eax_3 = g_5ca114;
    return (*(*eax_3 + 0x50))(eax_3, 0x25, a1);
}

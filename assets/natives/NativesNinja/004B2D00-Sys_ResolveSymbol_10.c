#include "004B2D00-Sys_ResolveSymbol_10.h"
/* 0x004b2d00 Sys_ResolveSymbol_10 full linked: callers=7 callees=1 */
float* sub_4b2d00(float* a1, float* a2, float* a3)

{
    long double x87_r7 = *a1;
    long double temp0 = 0f;
    x87_r7 - temp0;
    float* eax;
    eax = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (*(&eax + 1) & 0x40)
        *a3 = 0f;
    else
    {
        long double st1_1;
        bool c1_1;
        st1_1 = __fpatan(*a1, a1[1]);
        eax = a3;
        *eax = st1_1;
    }

    long double x87_r7_3 = a1[2];
    long double x87_r6_2 = a1[1];
    long double x87_r5 = *a1;
    long double x87_r4_4 = sqrtl(x87_r5 * x87_r5 + x87_r6_2 * x87_r6_2 + x87_r7_3 * x87_r7_3);
    long double temp1 = 0f;
    x87_r4_4 - temp1;
    eax = (x87_r4_4 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_4, temp1) ? 1 : 0) << 0xa
        | (x87_r4_4 == temp1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&eax + 1) & 0x40)
    {
        *a2 = 0f;
        return eax;
    }

    float* var_4 = a1;
    *a2 = -(sub_4b27d0(a1[2] / x87_r4_4));
    return a2;
}

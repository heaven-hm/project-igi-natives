// Original IGI.EXE function: Sys_ResolveSymbol_10 (VA 0x004B2D00; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_10.h"
float* Sys_ResolveSymbol_10(float* a1, float* a2, float* a3)

{
    long double fpu7 = *a1;
    long double f0 = 0f;
    fpu7 - f0;
    float* valA;
    valA = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&valA + 1) & 0x40)
        *a3 = 0f;
    else
    {
        long double fp1_1;
        bool c1_1;
        fp1_1 = __fpatan(*a1, a1[1]);
        valA = a3;
        *valA = fp1_1;
    }

    long double x87_r7_3 = a1[2];
    long double x87_r6_2 = a1[1];
    long double fpu5 = *a1;
    long double x87_r4_4 = sqrtl(fpu5 * fpu5 + x87_r6_2 * x87_r6_2 + x87_r7_3 * x87_r7_3);
    long double f1 = 0f;
    x87_r4_4 - f1;
    valA = (x87_r4_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_4, f1) ? 1 : 0) << 0xa
        | (x87_r4_4 == f1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&valA + 1) & 0x40)
    {
        *a2 = 0f;
        return valA;
    }

    float* v_4 = a1;
    *a2 = -(Sys_PushStack_9(a1[2] / x87_r4_4));
    return a2;
}

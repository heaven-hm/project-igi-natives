#include "gi_platform.h"
#include "004C9D70-DynObj_FindSymbol_10.h"
int32_t DynObj_FindSymbol_10(int32_t* a1, double* a2, int32_t a3)

{
    void* flagP = a1[6];
    void* objC = a1[7];
    int32_t dstD = a1[2];
    int32_t v_34 = *a1;
    int32_t tmpD1 = a1[1];
    double* valA1 = a2;
    int32_t ctxB = *valA1;
    int32_t objC2 = valA1[1];
    int32_t srcS = valA1[2];
    long double x87_r7_3 = *valA1;
    long double f0 = 0.0;
    x87_r7_3 - f0;

    if (*(&((x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
        | (x87_r7_3 == f0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_4 = ctxB;
        long double f2_1 = *a2;
        x87_r7_4 - f2_1;

        if (!(*(&((x87_r7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            ctxB -= 1;
    }

    long double x87_r7_5 = a2[1];
    long double f1 = 0.0;
    x87_r7_5 - f1;

    if (*(&((x87_r7_5 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f1) ? 1 : 0) << 0xa
        | (x87_r7_5 == f1 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_6 = objC2;
        long double f4_1 = a2[1];
        x87_r7_6 - f4_1;

        if (!(*(&((x87_r7_6 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            objC2 -= 1;
    }

    long double x87_r7_7 = a2[2];
    long double f3 = 0.0;
    x87_r7_7 - f3;

    if (*(&((x87_r7_7 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f3) ? 1 : 0) << 0xa
        | (x87_r7_7 == f3 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_8 = srcS;
        long double f5_1 = a2[2];
        x87_r7_8 - f5_1;

        if (!(*(&((x87_r7_8 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            srcS -= 1;
    }

    int32_t objC3 = objC2 + *(objC + 0xde4);
    int32_t srcS1 = srcS + *(objC + 0xde8);
    int32_t ctxB1 = ctxB + *(objC + 0xde0);
    int32_t objC4 = objC3 ^ 0x40000000;
    int32_t srcS2 = srcS1 ^ 0x40000000;
    int32_t ctxB2 = ctxB1 ^ 0x40000000;
    char objC5 = tmpD1;
    int32_t srcS8 = (*(int32_t*)(uintptr_t)(((((objC4 >> (objC5 & 0x1f) & 1) << 1 | (ctxB2 >> (objC5 & 0x1f) & 1))
        + (dstD << 3)) << 2) + &g_548060)) | (srcS2 >> (objC5 & 0x1f) & 1) << 2;

    if (*(flagP + 0x18) & 1 << (srcS8 & 0x1f))
    {
        while (a3 < 0x10)
        {
            int32_t valA24 = 0;
            valA24 = *(srcS8 + flagP + 0x10);
            int32_t valA26;
            int32_t objC9;

            if (dstD >= 4)
            {
                objC9 = (dstD - (valA24 & 3)) & 3;
                valA26 = (valA24 ^ dstD) & 4;
            }
            else
            {
                objC9 = (valA24 ^ dstD) & 4;
                valA26 = (valA24 + dstD) & 3;
            }

            int32_t valA30 = 0;
            valA30 = *(flagP + (srcS8 << 1));
            dstD = objC9 + valA26;
            flagP = (valA30 << 5) + *(objC + 0xc);
            tmpD1 -= 1;
            v_34 s>>= 1;
            char objC15 = tmpD1;
            srcS8 = (srcS2 >> (objC15 & 0x1f) & 1) << 2 | (*(int32_t*)(uintptr_t)(((((objC4 >> (objC15 & 0x1f) & 1) << 1
                | (ctxB2 >> (objC15 & 0x1f) & 1)) + (dstD << 3)) << 2) + &g_548060));
            a3 += 1;

            if (!(*(flagP + 0x18) & 1 << (srcS8 & 0x1f)))
                break;
        }
    }

    void* objC20 = a1[7];
    int32_t valA42 = ~((0x40000000 >> ((a3 - 1) & 0x1f)) - 1);
    int32_t srcS20 = (valA42 & objC3) - *(objC20 + 0xde4) + v_34;
    int32_t srcS24 = (valA42 & srcS1) - *(objC20 + 0xde8) + v_34;
    double* tmpD5 = a2;
    int16_t* objC22 = *(flagP + 0x1c);
    double v_18 = (valA42 & ctxB1) - *(objC20 + 0xde0) + v_34;
    double v_10 = srcS20;
    double v_8 = srcS24;
    DynObj_LinkDynamicCube_9(objC22, &v_18, tmpD5, a3, &a2, dstD);
    return (*(int32_t*)(uintptr_t)(a1[7] + (a2 << 2) + 0xd3c));
}

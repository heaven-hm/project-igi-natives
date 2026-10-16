#include "DynObj_RegisterSymbol_10.h"
int32_t DynObj_RegisterSymbol_10(void* a1, int32_t* a2, double* a3 @ 0x10, int32_t a4)

{
    int32_t* ctxB = a2;
    void* v_40 = ctxB[6];
    int32_t tmpD = *(ctxB[7] + 0xc);
    a2 = ctxB[1];
    int32_t v_20 = ctxB[4];
    double* objC3 = a3;
    int32_t v_28 = *ctxB;
    int32_t v_44 = ctxB[2];
    int32_t v_24 = ctxB[3];
    int32_t dstD = *objC3;
    int32_t v_1c = ctxB[5];
    a3 = *(a1 + 0x20);
    int32_t srcS = objC3[1];
    int32_t flagP = objC3[2];
    long double x87_r7_3 = *objC3;
    long double f0 = 0.0;
    x87_r7_3 - f0;

    if (*(&((x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
        | (x87_r7_3 == f0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_4 = dstD;
        long double f2_1 = *objC3;
        x87_r7_4 - f2_1;

        if (!(*(&((x87_r7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            dstD -= 1;
    }

    long double x87_r7_5 = objC3[1];
    long double f1 = 0.0;
    x87_r7_5 - f1;

    if (*(&((x87_r7_5 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f1) ? 1 : 0) << 0xa
        | (x87_r7_5 == f1 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_6 = srcS;
        long double f4_1 = objC3[1];
        x87_r7_6 - f4_1;

        if (!(*(&((x87_r7_6 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            srcS -= 1;
    }

    long double x87_r7_7 = objC3[2];
    long double f3 = 0.0;
    x87_r7_7 - f3;

    if (*(&((x87_r7_7 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f3) ? 1 : 0) << 0xa
        | (x87_r7_7 == f3 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_8 = flagP;
        long double f5_1 = objC3[2];
        x87_r7_8 - f5_1;

        if (!(*(&((x87_r7_8 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            flagP -= 1;
    }

    int32_t dstD1 = dstD + *(a1 + 0xde0);
    int32_t srcS1 = srcS + *(a1 + 0xde4);
    int32_t flagP1 = flagP + *(a1 + 0xde8);
    int32_t dstD2 = dstD1 ^ 0x40000000;
    int32_t srcS2 = srcS1 ^ 0x40000000;
    int32_t flagP2 = flagP1 ^ 0x40000000;
    int32_t v_3c_1 = dstD2;
    int32_t v_38_1 = srcS2;
    int32_t v_34_1 = flagP2;
    DynObj_ParseConfigFile_6();
    int32_t result = 0;
    int32_t result_1 = 0;

    if (a4 > 0)
    {
        int32_t* objC6 = a2;
        void* v_30_1 = objC6 - 1;

        while (true)
        {
            int32_t srcS4 = srcS2 >> (objC6 & 0x1f) & 1;
            int32_t dstD4 = dstD2 >> (objC6 & 0x1f) & 1;
            int32_t flagP4 = flagP2 >> (a2 & 0x1f) & 1;
            int32_t objC10 =
                *(((((srcS4 * 2) | dstD4) + (v_44 << 3)) << 2) + &g_548060) | flagP4 << 2;

            if (!(*(v_40 + 0x18) & 1 << (objC10 & 0x1f)))
            {
                result = result_1;
                break;
            }

            if (g_b97d20 && a3)
            {
                if (a3[7] & 0x80)
                {
                    void* valA13 = *(a3 + 0x2c);
                    a1 = valA13;

                    while (true)
                    {
                        if (*(valA13 + 0x5c) & 0x80)
                        {
                            int32_t objC11 = 0;
                            objC11 = *(valA13 + 0x1c);
                            (*((objC11 << 2) + &g_a9c4e0))(valA13, *(valA13 + 0x48));
                            valA13 = a1;
                        }

                        void* valA14 = *(valA13 + 0x58);
                        a1 = valA14;

                        if (!valA14)
                            break;

                        valA13 = a1;
                    }
                }

                char valA15 = v_30_1;
                double* tmpD17 = *(a3 + (((flagP1 >> ((valA15 - 1) & 0x1f) & 4)
                    | (srcS1 >> (valA15 & 0x1f) & 2) | (dstD1 >> (a2 & 0x1f) & 1)) << 2) + 0xc);
                a3 = tmpD17;
            }

            int32_t tmpD19 = v_28 >> 1;
            v_28 = tmpD19;
            a2 -= 1;
            v_30_1 -= 1;
            v_24 -= (-(dstD4) ^ tmpD19) + dstD4;
            v_20 -= (-(srcS4) ^ tmpD19) + srcS4;
            int32_t tmpD20 = 0;
            tmpD20 = *(objC10 + v_40 + 0x10);
            v_1c -= (-(flagP4) ^ tmpD19) + flagP4;

            v_44 = v_44 >= 4 ? ((v_44 - tmpD20) & 3) + ((tmpD20 ^ v_44) & 4)
                : ((v_44 + tmpD20) & 3) + (tmpD20 & 4);

            int32_t tmpD24 = 0;
            tmpD24 = *(v_40 + (objC10 << 1));
            result = result_1 + 1;
            v_40 = (tmpD24 << 5) + tmpD;
            result_1 = result;

            if (result >= a4)
                break;

            dstD2 = v_3c_1;
            srcS2 = v_38_1;
            flagP2 = v_34_1;
            objC6 = a2;
        }
    }

    ctxB[2] = v_44;
    *ctxB = v_28;
    ctxB[1] = a2;
    ctxB[3] = v_24;
    ctxB[4] = v_20;
    ctxB[5] = v_1c;
    ctxB[6] = v_40;
    ctxB[8] = a3;

    if (g_b97df8 > 6)
        g_b97df8 = 6;

    return result;
}

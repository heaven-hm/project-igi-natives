// Original IGI.EXE function: Light_ApplyLightmap_2 (VA 0x00523110; static CFG gate PASS, CFG score 1.000).
#include "Light_ApplyLightmap_2.h"
int32_t* Light_ApplyLightmap_2(int32_t a1)

{
    Qhash_Init(1);
    int32_t* result = Mem_Alloc(0xec, 4);
    int32_t ctxB2 = (a1 * a1) << 2;
    int32_t dstD1 = a1 >> 1;
    *result = a1;
    result[1] = dstD1;
    result[2] = Mem_Alloc(ctxB2, 4);
    result[7] = Mem_Alloc(ctxB2, 4);
    int32_t dstD3 = (dstD1 * a1) << 2;
    result[0xc] = Mem_Alloc(ctxB2, 4);
    result[0xd] = Mem_Alloc(dstD3, 4);
    int32_t* ctxB3 = &result[8];
    int32_t i_3 = 4;
    int32_t i;

    do
    {
        ctxB3[-5] = Mem_Alloc(dstD3, 4);
        *ctxB3 = Mem_Alloc(dstD3, 4);
        ctxB3 = &ctxB3[1];
        i = i_3;
        i_3 -= 1;
    } while (i != 1);
    int32_t valA6 = *result;
    int32_t tmpD = 0;
    long double fpu7 = 0f;
    int32_t v_4 = 0;
    a1 = valA6;

    if (valA6 > 0)
    {
        do
        {
            int32_t objC1 = 0;
            int32_t v_8_1 = 0;

            if (valA6 > 0)
            {
                do
                {
                    long double x87_r5_1 = a1;
                    long double x87_r4_2 = x87_r5_1 * 0.5f;
                    float v_4_1 = (v_8_1 - x87_r4_2 + 0.5f) / x87_r4_2;
                    a1 = (v_4 - x87_r4_2 + 0.5f) / x87_r4_2;
                    long double x87_r5_2 = 2f / x87_r5_1;
                    long double x87_r4_7 = a1 * a1 + v_4_1 * v_4_1 + 1f;
                    long double x87_r3_15 =
                        1f / (x87_r4_7 * x87_r4_7 * 3.14159274f) * x87_r5_2 * x87_r5_2;
                    *(result[0xc] + ((valA6 * tmpD + objC1) << 2)) = x87_r3_15;
                    fpu7 = fpu7 + x87_r3_15;
                    long double x87_r4_10 = g_a83b40;
                    x87_r4_10 - x87_r3_15;

                    if (*(&((x87_r4_10 < x87_r3_15 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_10, x87_r3_15) ? 1 : 0) << 0xa
                            | (x87_r4_10 == x87_r3_15 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                        g_a83b40 = x87_r3_15;

                    valA6 = *result;
                    objC1 += 1;
                    v_8_1 = objC1;
                    a1 = valA6;
                } while (objC1 < valA6);
            }

            valA6 = *result;
            tmpD += 1;
            v_4 = tmpD;
            a1 = valA6;
        } while (tmpD < valA6);
    }

    int32_t objC2 = *result;
    int32_t i_1 = 0;
    int32_t i_2 = 0;
    int32_t valA12;
    int32_t tmpD1;
    tmpD1 = HIGHD(objC2);
    valA12 = LOWD(objC2);
    a1 = objC2;

    if ((valA12 - tmpD1) >> 1 > 0)
    {
        int32_t valA18;
        int32_t tmpD3;

        do
        {
            int32_t tmpD2 = 0;
            int32_t v_8_2 = 0;

            if (objC2 > 0)
            {
                do
                {
                    long double x87_r5_5 = a1;
                    long double x87_r4_12 = x87_r5_5 * 0.5f;
                    float v_4_2 = (v_8_2 - x87_r4_12 + 0.5f) / x87_r4_12;
                    a1 = (i_2 - x87_r4_12 + 0.5f) / x87_r4_12;
                    long double x87_r5_6 = 2f / x87_r5_5;
                    long double x87_r4_15 = a1;
                    long double f1_1 = 0f;
                    x87_r4_15 - f1_1;
                    long double x87_r4_16 = a1;

                    if (*(&((x87_r4_15 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_15, f1_1) ? 1 : 0) << 0xa
                            | (x87_r4_15 == f1_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
                        x87_r4_16 = -(x87_r4_16);

                    long double x87_r3_27 = a1 * a1 + v_4_2 * v_4_2 + 1f;
                    long double x87_r5_8 =
                        x87_r5_6 * x87_r5_6 * x87_r4_16 / (x87_r3_27 * x87_r3_27 * 3.14159274f);
                    *(result[0xd] + ((objC2 * i_1 + tmpD2) << 2)) = x87_r5_8;
                    fpu7 = fpu7 + x87_r5_8 * 4f;
                    long double x87_r4_20 = g_a83b2c;
                    x87_r4_20 - x87_r5_8;

                    if (*(&((x87_r4_20 < x87_r5_8 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_20, x87_r5_8) ? 1 : 0) << 0xa
                            | (x87_r4_20 == x87_r5_8 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                        g_a83b2c = x87_r5_8;

                    objC2 = *result;
                    tmpD2 += 1;
                    v_8_2 = tmpD2;
                    a1 = objC2;
                } while (tmpD2 < objC2);
            }

            objC2 = *result;
            i_1 += 1;
            i_2 = i_1;
            tmpD3 = HIGHD(objC2);
            valA18 = LOWD(objC2);
            a1 = objC2;
        } while (i_1 < (valA18 - tmpD3) >> 1);
    }

    Qhash_Reset();
    return result;
}

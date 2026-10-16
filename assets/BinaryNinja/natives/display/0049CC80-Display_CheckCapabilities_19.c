#include "Display_CheckCapabilities_19.h"
❓  int32_t Display_CheckCapabilities_19(int32_t* a1, float a2)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    int32_t* flagP = a1;
    int32_t srcS;
    int32_t v_3c = srcS;
    int32_t dstD;
    int32_t v_40 = dstD;
    int32_t* valA1 = g_bcad90;
    int32_t* v_48 = &a1;
    int32_t objC1 = *valA1;
    int32_t result;
    int32_t result_1;

    if (g_bcad98 + flagP[3] > g_bcad94)
    {
        int32_t valA3 = (*(objC1 + 0xc))(valA1, 0x2020, v_48, 0);
        result = 0;
        result_1 = 0;
        g_bcad98 = flagP[3];

        if (!valA3)
        {
        label_49cd09:

            if (a1)
            {
                float tmpD4 = a2;
                float* objC4 = flagP[4];
                int32_t ctxB;
                int32_t v_44 = ctxB;
                long double fpu7 = *(tmpD4 + 0x100);

                if (!*(tmpD4 + 0x5b4))
                {
                    char valA5 = *(tmpD4 + 0x5b5);
                    long double x87_r7_9;

                    if (!valA5)
                        x87_r7_9 = *(tmpD4 + 0xfc);
                    else
                        x87_r7_9 = *(tmpD4 + 0x100);

                    long double x87_r6_7 = *(tmpD4 + 0x59c) * 1f / (fpu7 - *(tmpD4 + 0xfc));

                    if (valA5)
                        x87_r6_7 = -(x87_r6_7);

                    int32_t v_30_1 = 0;

                    if (flagP[3] > 0)
                    {
                        bool cond_8_1;

                        do
                        {
                            long double x87_r5_7 = (-(x87_r7_9) + *objC4) * x87_r6_7;
                            int32_t srcS7 = x87_r5_7;
                            a2 = srcS7;

                            if (srcS7 == *(tmpD4 + 0x59c))
                            {
                                srcS7 -= 1;
                                a2 = srcS7;
                            }

                            long double x87_r5_8 = x87_r5_7 - a2;
                            long double x87_r4_10 = 0f;
                            x87_r4_10 - x87_r5_8;

                            if (*(&((x87_r4_10 < x87_r5_8 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_10, x87_r5_8) ? 1 : 0) << 0xa
                                | (x87_r4_10 == x87_r5_8 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                            {
                                long double x87_r4_11 = 1f;
                                x87_r4_11 - x87_r5_8;

                                if (*(&((x87_r4_11 < x87_r5_8 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r4_11, x87_r5_8) ? 1 : 0) << 0xa
                                        | (x87_r4_11 == x87_r5_8 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                                    x87_r5_8 = 1f;
                            }
                            else
                                x87_r5_8 = 0f;

                            int32_t valA10 = srcS7 * 5;
                            void* valA11 = tmpD4 + (valA10 << 3);
                            void* dstD14 = tmpD4 + srcS7 * 0xc;
                            long double x87_r4_15 = *(tmpD4 + (valA10 << 3) + 0x208) * objC4[2]
                                + *(tmpD4 + (valA10 << 3) + 0x204) * objC4[1] + *(dstD14 + 0x104);
                            long double x87_r3_18 = *(valA11 + 0x214) * objC4[2]
                                + *(valA11 + 0x210) * objC4[1]
                                + *(tmpD4 + ((srcS7 * 3 + 0x42) << 2));
                            float v_20_2 = x87_r3_18;
                            float v_1c_2 = *(valA11 + 0x220) * objC4[2]
                                + *(valA11 + 0x21c) * objC4[1] + *(dstD14 + 0x10c);
                            long double x87_r2_14 = *(valA11 + 0x23c) * objC4[2]
                                + *(valA11 + 0x238) * objC4[1]
                                + *(tmpD4 + ((srcS7 * 3 + 0x45) << 2));
                            float v_10_3 = *(valA11 + 0x248) * objC4[2]
                                + *(valA11 + 0x244) * objC4[1] + *(dstD14 + 0x118);
                            *a1 = (*(valA11 + 0x230) * objC4[2] + *(valA11 + 0x22c) * objC4[1]
                                + *(dstD14 + 0x110) - x87_r4_15) * x87_r5_8 + x87_r4_15;
                            a1[1] = (x87_r2_14 - v_20_2) * x87_r5_8 + v_20_2;
                            a1[2] = (v_10_3 - v_1c_2) * x87_r5_8 + v_1c_2;
                            long double x87_r5_14 = *(tmpD4 + ((srcS7 * 5 + 0x41) << 3)) * objC4[5]
                                + *(valA11 + 0x204) * objC4[4];
                            long double x87_r4_28 = objC4[3] * *(valA11 + 0x200);
                            objC4 = &objC4[8];
                            long double x87_r5_19 = *(valA11 + 0x210) * objC4[-4]
                                + *(valA11 + 0x20c) * objC4[-5] + *(valA11 + 0x214) * objC4[-3];
                            int32_t* valA13 = &a1[3];
                            long double x87_r5_23 = *(valA11 + 0x21c) * objC4[-4]
                                + *(valA11 + 0x218) * objC4[-5] + *(valA11 + 0x220) * objC4[-3];
                            *valA13 = x87_r5_14 + x87_r4_28;
                            valA13[1] = x87_r5_19;
                            valA13[2] = x87_r5_23;
                            a1[6] = objC4[-2];
                            a1[7] = objC4[-1];
                            cond_8_1 = v_30_1 + 1 < flagP[3];
                            v_30_1 += 1;
                            a1 = &a1[8];
                        } while (cond_8_1);
                        result = result_1;
                    }
                }
                else
                {
                    int32_t valA6 = 0;
                    float v_c_1 = (fpu7 + *(tmpD4 + 0xfc)) * 0.5f;

                    if (flagP[3] > 0)
                    {
                        bool cond_5_1;

                        do
                        {
                            long double x87_r7_4 = *objC4 - v_c_1;
                            long double x87_r6_1 = objC4[1];
                            long double x87_r5_1 = objC4[2];
                            int32_t* srcS1 = a1;
                            float v_14_1 = x87_r7_4 * *(tmpD4 + 0x7c) + x87_r5_1 * *(tmpD4 + 0x84)
                                + x87_r6_1 * *(tmpD4 + 0x80);
                            long double x87_r6_3 =
                                x87_r5_1 * *(tmpD4 + 0x90) + x87_r6_1 * *(tmpD4 + 0x8c);
                            long double x87_r6_5 = x87_r7_4 * *(tmpD4 + 0x88);
                            *srcS1 = x87_r5_1 * *(tmpD4 + 0x78) + x87_r6_1 * *(tmpD4 + 0x74)
                                + x87_r7_4 * *(tmpD4 + 0x70);
                            srcS1[1] = v_14_1;
                            srcS1[2] = x87_r6_3 + x87_r6_5;
                            int32_t* srcS2 = &objC4[3];
                            int32_t* dstD8 = &a1[3];
                            valA6 += 1;
                            objC4 = &objC4[8];
                            *dstD8 = *srcS2;
                            dstD8[1] = srcS2[1];
                            dstD8[2] = srcS2[2];
                            a1[6] = objC4[-2];
                            a1[7] = objC4[-1];
                            cond_5_1 = valA6 < flagP[3];
                            a1 = &a1[8];
                        } while (cond_5_1);
                        result = result_1;
                    }
                }

                int32_t* valA18 = g_bcad90;
                (*(*valA18 + 0x10))(valA18);
            }
        }
    }
    else
    {
        int32_t valA2 = (*(objC1 + 0xc))(valA1, 0x1020, v_48, 0);
        int32_t result_2 = g_bcad98;
        result = result_2;
        int32_t objC2 = result_2 + flagP[3];
        result_1 = result;
        a1 = &a1[result_2 * 8];
        g_bcad98 = objC2;

        if (!valA2)
            goto label_49cd09;
    }
    return result;
}

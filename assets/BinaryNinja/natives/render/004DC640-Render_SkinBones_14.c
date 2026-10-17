// Original IGI.EXE function: Render_SkinBones_14 (VA 0x004DC640; static CFG gate PASS, CFG score 1.000).
#include "Render_SkinBones_14.h"
int32_t* Render_SkinBones_14(float a1, int32_t* a2, int32_t* a3)

{
    void* valA = *(a1 + 0x148);

    if (valA)
    {
        int32_t* valA1 = *(valA + 8);

        if (*valA1 && valA1)
        {
            int32_t v_18;
            Sys_FreeMemory_2(&v_18, 0x10, 0x3e8, 0);
            int32_t* i = a1;
            int32_t* v_14;
            int32_t i_2;
            int32_t v_8;
            int32_t* v_4;

            if (a1)
            {
                do
                {
                    void* objC5 = *(*(*i[0x1b] + 0xc) + 0xc);
                    int32_t* valA10 = v_14[i_2] * v_8 + v_18;
                    *(v_4 + valA10) = i_2;
                    i_2 += 1;
                    *valA10 = *(objC5 + 0x50);
                    valA10[1] = *(objC5 + 0x54);
                    valA10[2] = *(objC5 + 0x58);
                    valA10[3] = *(objC5 + 0x5c);
                    void* valA5 = i[0x3a];

                    if (valA5)
                        Render_TransformVertices_14(&v_18, valA5);

                    if (i != a1)
                    {
                        i = *i;

                        if (!i)
                            break;

                        if (!*i)
                            break;
                    }
                    else
                    {
                        void* srcS3 = i[0x52];

                        if (!srcS3)
                            break;

                        i = *(srcS3 + 8);

                        if (!*i)
                            break;
                    }
                } while (i);
            }

            int32_t i_1 = i_2;
            int32_t* dstD1 = v_14;

            if (i_1 > 1)
            {
                int32_t* ctxB4 = a2;
                int32_t* flagP3 = a2;

                do
                {
                    a1 = 3.40282347e+38f;
                    int32_t v_54_1 = 0;
                    long double x87_r7_5;
                    long double f3_1;

                    if (i_1 > 0)
                    {
                        int32_t* v_50_1 = dstD1;
                        bool cond_1_1;

                        do
                        {
                            int32_t valA12 = 0;
                            int32_t* v_58_1 = dstD1;
                            int32_t v_4c_1 = 0;

                            do
                            {
                                if (v_54_1 != valA12)
                                {
                                    int32_t* objC9 = v_8 * *v_50_1 + v_18;
                                    int32_t* tmpD14 = *v_58_1 * v_8 + v_18;
                                    long double x87_r7_2 = tmpD14[2] - objC9[2];
                                    long double x87_r6_2 = tmpD14[1] - objC9[1];
                                    long double x87_r5_2 = *tmpD14 - *objC9;
                                    long double x87_r4_5 = sqrtl(x87_r5_2 * x87_r5_2
                                        + x87_r6_2 * x87_r6_2 + x87_r7_2 * x87_r7_2);
                                    long double f2_1 = a1;
                                    x87_r4_5 - f2_1;

                                    if (*(&((x87_r4_5 < f2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r4_5, f2_1) ? 1 : 0) << 0xa
                                        | (x87_r4_5 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                    {
                                        a1 = x87_r4_5;
                                        ctxB4 = objC9;
                                        flagP3 = tmpD14;
                                    }
                                }

                                valA12 = v_4c_1 + 1;
                                v_4c_1 = valA12;
                                v_58_1 = &v_58_1[1];
                            } while (valA12 < i_1);

                            cond_1_1 = v_54_1 + 1 < i_1;
                            v_54_1 += 1;
                            v_50_1 = &v_50_1[1];
                        } while (cond_1_1);
                        x87_r7_5 = a1;
                        f3_1 = 0f;
                        x87_r7_5 - f3_1;
                    }

                    if (i_1 <= 0 || !(*(&((x87_r7_5 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        long double x87_r7_9 = a1 + flagP3[3];
                        long double f0_1 = ctxB4[3];
                        x87_r7_9 - f0_1;
                        int32_t* valA19;

                        if (!(*(&((x87_r7_9 < f0_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_9, f0_1) ? 1 : 0) << 0xa
                            | (x87_r7_9 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double x87_r7_11 = a1 + ctxB4[3];
                            long double f1_1 = flagP3[3];
                            x87_r7_11 - f1_1;

                            if (!(*(&((x87_r7_11 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_11, f1_1) ? 1 : 0) << 0xa
                                | (x87_r7_11 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                float v_30_1 = *flagP3 - *ctxB4;
                                float v_48_1 = v_30_1;
                                float v_3c_1 = v_30_1;
                                float v_2c_1 = flagP3[1] - ctxB4[1];
                                float v_28_1 = flagP3[2] - ctxB4[2];
                                long double x87_r7_18 = v_28_1;
                                long double x87_r6_5 = v_2c_1;
                                long double x87_r5_4 = v_30_1;
                                long double x87_r4_10 = sqrtl(x87_r5_4 * x87_r5_4
                                    + x87_r6_5 * x87_r6_5 + x87_r7_18 * x87_r7_18);
                                long double x87_r6_8 = ctxB4[3] / x87_r4_10;
                                float v_48_4 = -((v_30_1 * x87_r6_8)) + *ctxB4;
                                float v_44_4 = -((v_2c_1 * x87_r6_8)) + ctxB4[1];
                                float v_40_2 = -((x87_r6_8 * v_28_1)) + ctxB4[2];
                                long double x87_r7_20 = flagP3[3] / x87_r4_10;
                                float v_3c_3 = v_30_1 * x87_r7_20 + *flagP3;
                                float v_38_3 = v_2c_1 * x87_r7_20 + flagP3[1];
                                long double x87_r7_22 = x87_r7_20 * v_28_1 + flagP3[2];
                                float v_24_1 = (v_3c_3 - v_48_4) * 0.5f + v_48_4;
                                *ctxB4 = v_24_1;
                                float v_20_1 = (v_38_3 - v_44_4) * 0.5f + v_44_4;
                                ctxB4[1] = v_20_1;
                                float v_1c_1 = (x87_r7_22 - v_40_2) * 0.5f + v_40_2;
                                long double x87_r7_23 = x87_r7_22 - v_1c_1;
                                ctxB4[2] = v_1c_1;
                                long double x87_r6_33 = v_38_3 - v_20_1;
                                long double x87_r5_19 = v_3c_3 - v_24_1;
                                ctxB4[3] = sqrtl(x87_r5_19 * x87_r5_19 + x87_r6_33 * x87_r6_33
                                    + x87_r7_23 * x87_r7_23);
                                int32_t** tmpD31 = v_4;
                                i_1 = i_2 - 1;
                                valA19 = *(tmpD31 + flagP3);
                                i_2 = i_1;

                                if (valA19 == i_1)
                                    dstD1 = v_14;
                                else
                                {
                                    int32_t* srcS17 = v_14[i_1] * v_8 + v_18;
                                    int32_t dstD9 = v_14[valA19];
                                    int32_t tmpD32 = *(srcS17 + tmpD31);
                                    v_14[valA19] = v_14[tmpD32];
                                    v_14[tmpD32] = dstD9;
                                    *(srcS17 + v_4) = valA19;
                                    i_1 = i_2;
                                    dstD1 = v_14;
                                }
                            }
                            else
                            {
                                i_1 -= 1;
                                valA19 = *(ctxB4 + v_4);
                                i_2 = i_1;

                                if (valA19 != i_1)
                                {
                                    int32_t* srcS13 = dstD1[i_1] * v_8 + v_18;
                                    int32_t tmpD26 = dstD1[valA19];
                                    int32_t objC17 = *(srcS13 + v_4);
                                    dstD1[valA19] = dstD1[objC17];
                                    v_14[objC17] = tmpD26;
                                    *(srcS13 + v_4) = valA19;
                                    i_1 = i_2;
                                    dstD1 = v_14;
                                }
                            }
                        }
                        else
                        {
                            i_1 -= 1;
                            valA19 = *(v_4 + flagP3);
                            i_2 = i_1;

                            if (valA19 != i_1)
                            {
                                int32_t tmpD22 = dstD1[valA19];
                                int32_t* srcS10 = dstD1[i_1] * v_8 + v_18;
                                int32_t objC13 = *(srcS10 + v_4);
                                dstD1[valA19] = dstD1[objC13];
                                v_14[objC13] = tmpD22;
                                *(srcS10 + v_4) = valA19;
                                i_1 = i_2;
                                dstD1 = v_14;
                            }
                        }
                    }
                    else
                    {
                        long double x87_r7_6 = ctxB4[3];
                        long double x87_r6_4 = flagP3[3];
                        x87_r6_4 - x87_r7_6;
                        long double x87_r7_7;

                        if (!(*(&((x87_r6_4 < x87_r7_6 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_4, x87_r7_6) ? 1 : 0) << 0xa
                                | (x87_r6_4 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
                            x87_r7_7 = flagP3[3];
                        else
                            x87_r7_7 = ctxB4[3];

                        ctxB4[3] = x87_r7_7;
                        i_1 = i_2 - 1;
                        int32_t objC10 = *(v_4 + flagP3);
                        i_2 = i_1;

                        if (objC10 == i_1)
                            dstD1 = v_14;
                        else
                        {
                            int32_t* srcS7 = v_14[i_1] * v_8 + v_18;
                            int32_t dstD3 = v_14[objC10];
                            int32_t tmpD20 = *(srcS7 + v_4);
                            v_14[objC10] = v_14[tmpD20];
                            v_14[tmpD20] = dstD3;
                            *(srcS7 + v_4) = objC10;
                            i_1 = i_2;
                            dstD1 = v_14;
                        }
                    }
                } while (i_1 > 1);
            }

            int32_t* valA27 = *dstD1 * v_8 + v_18;
            *a2 = *valA27;
            a2[1] = valA27[1];
            a2[2] = valA27[2];
            *a3 = valA27[3];
            int32_t valA28 = *(valA27 + v_4);
            int32_t v_10 = i_1 - 1;

            if (valA28 != i_1 - 1)
            {
                int32_t* srcS21 = dstD1[i_1 - 1] * v_8 + v_18;
                int32_t tmpD36 = dstD1[valA28];
                int32_t objC28 = *(srcS21 + v_4);
                dstD1[valA28] = dstD1[objC28];
                v_14[objC28] = tmpD36;
                *(srcS21 + v_4) = valA28;
            }

            return Sys_OpenFileStream_2(&v_18);
        }
    }

    int32_t* valA29 = *(a1 + 0x6c);

    if (!valA29)
        return valA29;

    void* valA3 = *(*(*valA29 + 0xc) + 0xc);
    *a2 = *(valA3 + 0x50);
    a2[1] = *(valA3 + 0x54);
    a2[2] = *(valA3 + 0x58);
    int32_t valA4 = *(valA3 + 0x78);
    *a3 = valA4;
    return valA4;
}

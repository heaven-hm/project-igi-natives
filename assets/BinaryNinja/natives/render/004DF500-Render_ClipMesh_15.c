#include "Render_ClipMesh_15.h"
int32_t* Render_ClipMesh_15(float a1, int32_t* a2, int32_t* a3)

{
    void* valA = *(a1 + 0x148);

    if (valA)
    {
        int32_t* valA1 = *(valA + 8);

        if (*valA1 && valA1)
        {
            int32_t v_18;
            Sys_FreeMemory_2(&v_18, 0x10, 0x3e8, 0);
            void* valA5 = *(a1 + 0x148);
            int32_t* v_14;
            int32_t i_2;
            int32_t v_8;
            int32_t* v_4;

            if (valA5)
            {
                int32_t* i = *(valA5 + 8);

                if (*i && i)
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
                        valA5 = i[0x3a];

                        if (valA5)
                            Render_TransformVertices_14(&v_18, valA5);

                        i = *i;

                        if (!i)
                            break;

                        if (!*i)
                            break;
                    } while (i);
                }
            }

            int32_t i_1 = i_2;
            int32_t* dstD4 = v_14;

            if (i_1 > 1)
            {
                int32_t* ctxB3 = a2;
                int32_t* flagP1 = a2;

                do
                {
                    a1 = 3.40282347e+38f;
                    int32_t v_54_1 = 0;
                    long double x87_r7_5;
                    long double f3_1;

                    if (i_1 > 0)
                    {
                        int32_t* v_50_1 = dstD4;
                        bool cond_2_1;

                        do
                        {
                            int32_t valA12 = 0;
                            int32_t* v_58_1 = dstD4;
                            int32_t v_4c_1 = 0;

                            do
                            {
                                if (v_54_1 != valA12)
                                {
                                    int32_t* objC9 = *v_50_1 * v_8 + v_18;
                                    int32_t* tmpD13 = *v_58_1 * v_8 + v_18;
                                    long double x87_r7_2 = tmpD13[2] - objC9[2];
                                    long double x87_r6_2 = tmpD13[1] - objC9[1];
                                    long double x87_r5_2 = *tmpD13 - *objC9;
                                    long double x87_r4_5 = sqrtl(x87_r5_2 * x87_r5_2
                                        + x87_r6_2 * x87_r6_2 + x87_r7_2 * x87_r7_2);
                                    long double f2_1 = a1;
                                    x87_r4_5 - f2_1;

                                    if (*(&((x87_r4_5 < f2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r4_5, f2_1) ? 1 : 0) << 0xa
                                        | (x87_r4_5 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                    {
                                        a1 = x87_r4_5;
                                        ctxB3 = objC9;
                                        flagP1 = tmpD13;
                                    }
                                }

                                valA12 = v_4c_1 + 1;
                                v_4c_1 = valA12;
                                v_58_1 = &v_58_1[1];
                            } while (valA12 < i_1);

                            cond_2_1 = v_54_1 + 1 < i_1;
                            v_54_1 += 1;
                            v_50_1 = &v_50_1[1];
                        } while (cond_2_1);
                        x87_r7_5 = a1;
                        f3_1 = 0f;
                        x87_r7_5 - f3_1;
                    }

                    if (i_1 <= 0 || !(*(&((x87_r7_5 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        long double x87_r7_9 = a1 + flagP1[3];
                        long double f0_1 = ctxB3[3];
                        x87_r7_9 - f0_1;
                        int32_t* valA20;

                        if (!(*(&((x87_r7_9 < f0_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_9, f0_1) ? 1 : 0) << 0xa
                            | (x87_r7_9 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double x87_r7_11 = a1 + ctxB3[3];
                            long double f1_1 = flagP1[3];
                            x87_r7_11 - f1_1;

                            if (!(*(&((x87_r7_11 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_11, f1_1) ? 1 : 0) << 0xa
                                | (x87_r7_11 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                float v_30_1 = *flagP1 - *ctxB3;
                                float v_48_1 = v_30_1;
                                float v_3c_1 = v_30_1;
                                float v_2c_1 = flagP1[1] - ctxB3[1];
                                float v_28_1 = flagP1[2] - ctxB3[2];
                                long double x87_r7_18 = v_28_1;
                                long double x87_r6_5 = v_2c_1;
                                long double x87_r5_4 = v_30_1;
                                long double x87_r4_10 = sqrtl(x87_r5_4 * x87_r5_4
                                    + x87_r6_5 * x87_r6_5 + x87_r7_18 * x87_r7_18);
                                long double x87_r6_8 = ctxB3[3] / x87_r4_10;
                                float v_48_4 = -((v_30_1 * x87_r6_8)) + *ctxB3;
                                float v_44_4 = -((v_2c_1 * x87_r6_8)) + ctxB3[1];
                                float v_40_2 = -((x87_r6_8 * v_28_1)) + ctxB3[2];
                                long double x87_r7_20 = flagP1[3] / x87_r4_10;
                                float v_3c_3 = v_30_1 * x87_r7_20 + *flagP1;
                                float v_38_3 = v_2c_1 * x87_r7_20 + flagP1[1];
                                long double x87_r7_22 = x87_r7_20 * v_28_1 + flagP1[2];
                                float v_24_1 = (v_3c_3 - v_48_4) * 0.5f + v_48_4;
                                *ctxB3 = v_24_1;
                                float v_20_1 = (v_38_3 - v_44_4) * 0.5f + v_44_4;
                                ctxB3[1] = v_20_1;
                                float v_1c_1 = (x87_r7_22 - v_40_2) * 0.5f + v_40_2;
                                long double x87_r7_23 = x87_r7_22 - v_1c_1;
                                ctxB3[2] = v_1c_1;
                                long double x87_r6_33 = v_38_3 - v_20_1;
                                long double x87_r5_19 = v_3c_3 - v_24_1;
                                ctxB3[3] = sqrtl(x87_r5_19 * x87_r5_19 + x87_r6_33 * x87_r6_33
                                    + x87_r7_23 * x87_r7_23);
                                int32_t** tmpD30 = v_4;
                                i_1 = i_2 - 1;
                                valA20 = *(tmpD30 + flagP1);
                                i_2 = i_1;

                                if (valA20 == i_1)
                                    dstD4 = v_14;
                                else
                                {
                                    int32_t* srcS16 = v_14[i_1] * v_8 + v_18;
                                    int32_t dstD12 = v_14[valA20];
                                    int32_t tmpD31 = *(srcS16 + tmpD30);
                                    v_14[valA20] = v_14[tmpD31];
                                    v_14[tmpD31] = dstD12;
                                    *(srcS16 + v_4) = valA20;
                                    i_1 = i_2;
                                    dstD4 = v_14;
                                }
                            }
                            else
                            {
                                i_1 -= 1;
                                valA20 = *(ctxB3 + v_4);
                                i_2 = i_1;

                                if (valA20 != i_1)
                                {
                                    int32_t* srcS12 = dstD4[i_1] * v_8 + v_18;
                                    int32_t tmpD25 = dstD4[valA20];
                                    int32_t objC17 = *(srcS12 + v_4);
                                    dstD4[valA20] = dstD4[objC17];
                                    v_14[objC17] = tmpD25;
                                    *(srcS12 + v_4) = valA20;
                                    i_1 = i_2;
                                    dstD4 = v_14;
                                }
                            }
                        }
                        else
                        {
                            i_1 -= 1;
                            valA20 = *(v_4 + flagP1);
                            i_2 = i_1;

                            if (valA20 != i_1)
                            {
                                int32_t tmpD21 = dstD4[valA20];
                                int32_t* srcS9 = dstD4[i_1] * v_8 + v_18;
                                int32_t objC13 = *(srcS9 + v_4);
                                dstD4[valA20] = dstD4[objC13];
                                v_14[objC13] = tmpD21;
                                *(srcS9 + v_4) = valA20;
                                i_1 = i_2;
                                dstD4 = v_14;
                            }
                        }
                    }
                    else
                    {
                        long double x87_r7_6 = ctxB3[3];
                        long double x87_r6_4 = flagP1[3];
                        x87_r6_4 - x87_r7_6;
                        long double x87_r7_7;

                        if (!(*(&((x87_r6_4 < x87_r7_6 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_4, x87_r7_6) ? 1 : 0) << 0xa
                                | (x87_r6_4 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
                            x87_r7_7 = flagP1[3];
                        else
                            x87_r7_7 = ctxB3[3];

                        ctxB3[3] = x87_r7_7;
                        i_1 = i_2 - 1;
                        int32_t objC10 = *(v_4 + flagP1);
                        i_2 = i_1;

                        if (objC10 == i_1)
                            dstD4 = v_14;
                        else
                        {
                            int32_t* srcS6 = v_14[i_1] * v_8 + v_18;
                            int32_t dstD6 = v_14[objC10];
                            int32_t tmpD19 = *(srcS6 + v_4);
                            v_14[objC10] = v_14[tmpD19];
                            v_14[tmpD19] = dstD6;
                            *(srcS6 + v_4) = objC10;
                            i_1 = i_2;
                            dstD4 = v_14;
                        }
                    }
                } while (i_1 > 1);
            }

            int32_t* valA28 = *dstD4 * v_8 + v_18;
            *a2 = *valA28;
            a2[1] = valA28[1];
            a2[2] = valA28[2];
            *a3 = valA28[3];
            int32_t valA29 = *(valA28 + v_4);
            int32_t v_10 = i_1 - 1;

            if (valA29 != i_1 - 1)
            {
                int32_t* srcS20 = dstD4[i_1 - 1] * v_8 + v_18;
                int32_t tmpD35 = dstD4[valA29];
                int32_t objC28 = *(srcS20 + v_4);
                dstD4[valA29] = dstD4[objC28];
                v_14[objC28] = tmpD35;
                *(srcS20 + v_4) = valA29;
            }

            return Sys_OpenFileStream_2(&v_18);
        }
    }

    int32_t* valA30 = *(a1 + 0x6c);

    if (!valA30)
        return valA30;

    void* valA3 = *(*(*valA30 + 0xc) + 0xc);
    *a2 = *(valA3 + 0x50);
    a2[1] = *(valA3 + 0x54);
    a2[2] = *(valA3 + 0x58);
    int32_t valA4 = *(valA3 + 0x5c);
    *a3 = valA4;
    return valA4;
}

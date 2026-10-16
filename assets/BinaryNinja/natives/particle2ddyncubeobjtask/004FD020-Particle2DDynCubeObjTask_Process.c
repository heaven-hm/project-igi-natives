#include "Particle2DDynCubeObjTask_Process.h"
int32_t Particle2DDynCubeObjTask_Process(float a1)

{
    float dstD = a1;
    float v_c = 0f;
    float v_8 = 0f;
    long double fpu7 = *(dstD + 0xdc);
    long double f1 = 0f;
    fpu7 - f1;
    float v_4 = 0f;
    int32_t i_1 = 0;
    float v_10;
    float ctxB;
    float flagP;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        flagP = *(dstD + 0xd0);
        ctxB = *(dstD + 0xd4);
        v_10 = *(dstD + 0xd8);
    }
    else
    {
        Script_ParseEnumInt32_30(dstD, &v_c);
        long double x87_r7_2 = v_c + *(dstD + 0xd0);
        float v_14_1 = v_8 + *(dstD + 0xd4);
        long double x87_r6_4 = v_4 + *(dstD + 0xd8);
        long double x87_r5_1 = v_14_1;
        x87_r5_1 - x87_r6_4;
        long double x87_r5_2;

        x87_r5_2 = *(&((x87_r5_1 < x87_r6_4 ? 1 : 0) << 8
            | (FCMP_UO(x87_r5_1, x87_r6_4) ? 1 : 0) << 0xa | (x87_r5_1 == x87_r6_4 ? 1 : 0) << 0xe
            | 0x3000) + 1) & 0x41 ? x87_r6_4 : v_14_1;

        x87_r7_2 - x87_r5_2;
        long double x87_r5_4;

        if (*(&((x87_r7_2 < x87_r5_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, x87_r5_2) ? 1 : 0) << 0xa
            | (x87_r7_2 == x87_r5_2 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
        {
            long double x87_r5_5 = v_14_1;
            x87_r5_5 - x87_r6_4;

            x87_r5_4 = *(&((x87_r5_5 < x87_r6_4 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_5, x87_r6_4) ? 1 : 0) << 0xa
                | (x87_r5_5 == x87_r6_4 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 ? x87_r6_4 : v_14_1;
        }
        else
            x87_r5_4 = x87_r7_2;

        long double x87_r4_2 = 1f;
        x87_r4_2 - x87_r5_4;
        long double x87_r5_7;

        if (*(&((x87_r4_2 < x87_r5_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_2, x87_r5_4) ? 1 : 0) << 0xa
            | (x87_r4_2 == x87_r5_4 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
        {
            long double x87_r5_8 = v_14_1;
            x87_r5_8 - x87_r6_4;
            long double x87_r5_9;

            x87_r5_9 = *(&((x87_r5_8 < x87_r6_4 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_8, x87_r6_4) ? 1 : 0) << 0xa
                | (x87_r5_8 == x87_r6_4 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 ? x87_r6_4 : v_14_1;

            x87_r7_2 - x87_r5_9;

            if (*(&((x87_r7_2 < x87_r5_9 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, x87_r5_9) ? 1 : 0) << 0xa
                | (x87_r7_2 == x87_r5_9 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
            {
                long double x87_r5_11 = v_14_1;
                x87_r5_11 - x87_r6_4;

                x87_r5_7 = *(&((x87_r5_11 < x87_r6_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_11, x87_r6_4) ? 1 : 0) << 0xa
                    | (x87_r5_11 == x87_r6_4 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 ? x87_r6_4
                    : v_14_1;
            }
            else
                x87_r5_7 = x87_r7_2;
        }
        else
            x87_r5_7 = 1f;

        long double x87_r5_12 = x87_r5_7 * 0.00787401572f;
        flagP = x87_r7_2 / x87_r5_12;
        ctxB = v_14_1 / x87_r5_12;
        v_10 = x87_r6_4 / x87_r5_12;
    }

    int32_t i = *(dstD + 0xf0);

    if (i)
    {
        do
        {
            double* srcS1 = *(*(dstD + 0x6c) + (i_1 << 2));
            float v_48;
            Display_RestoreDevice_15(&v_48, &a1, srcS1);
            long double x87_r7_5 = a1;
            long double f2_1 = 2048f;
            x87_r7_5 - f2_1;

            if (!(*(&((x87_r7_5 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_5, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_6 = a1;
                long double f3_1 = *(dstD + 0xe0);
                x87_r7_6 - f3_1;

                if (*(&((x87_r7_6 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_6, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    long double x87_r7_7 = *(dstD + 0xe4);
                    long double f4_1 = 0f;
                    x87_r7_7 - f4_1;
                    float objC2 = *(dstD + 0xc0);
                    float v_20 = *(dstD + 0xbc);

                    if (!(*(&((x87_r7_7 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        v_20 = v_20 * *(srcS1 + 0x3c);
                        float v_1c_2 = objC2 * *(srcS1 + 0x3c);
                    }

                    float v_50;
                    Display_SetGammaRamp_15(&v_50, &v_20, a1);
                    long double x87_r7_12 = v_50;
                    long double f5_1 = 0.5f;
                    x87_r7_12 - f5_1;

                    if (*(&((x87_r7_12 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_12, f5_1) ? 1 : 0) << 0xa
                            | (x87_r7_12 == f5_1 ? 1 : 0) << 0xe) + 1) & 1)
                        v_50 = 0.5f;

                    float v_4c;
                    long double x87_r7_13 = v_4c;
                    long double f6_1 = 0.5f;
                    x87_r7_13 - f6_1;

                    if (*(&((x87_r7_13 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_13, f6_1) ? 1 : 0) << 0xa
                            | (x87_r7_13 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
                        v_4c = 0.5f;

                    long double x87_r7_14 = *(srcS1 + 0x2c);
                    long double f7_1 = 0f;
                    x87_r7_14 - f7_1;
                    float v_40_2;
                    float v_3c_2;
                    float v_38_2;
                    float v_34_2;
                    float v_30_2;
                    float v_2c_2;
                    float v_28_1;
                    long double x87_r7_21;
                    float v_44;

                    if (*(&((x87_r7_14 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_14, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_14 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    {
                        long double x87_r7_23 = v_48 - v_50;
                        v_30_2 = x87_r7_23;
                        long double x87_r6_34 = v_44 - v_4c;
                        v_2c_2 = x87_r6_34;
                        long double x87_r5_33 = v_48 + v_50;
                        v_38_2 = x87_r5_33;
                        v_34_2 = x87_r6_34;
                        v_28_1 = x87_r5_33;
                        v_40_2 = x87_r7_23;
                        x87_r7_21 = v_44 + v_4c;
                        v_3c_2 = x87_r7_21;
                    }
                    else
                    {
                        long double x87_r7_15 = srcS1[7];
                        long double fp0_1;
                        bool c1_1;
                        bool c2_14;
                        fp0_1 = __fcos(x87_r7_15);
                        float v_60_1 = fp0_1;
                        long double fp0_2;
                        bool c1_2;
                        bool c2_15;
                        fp0_2 = __fsin(x87_r7_15);
                        long double x87_r6_9 = -(v_4c);
                        float v_54_1 = x87_r6_9 * fp0_2;
                        float v_68_1 = v_60_1 * v_50;
                        long double x87_r6_10 = x87_r6_9 * v_60_1;
                        float v_64_1 = -(fp0_2) * v_50;
                        long double x87_r7_17 = fp0_2 * v_4c;
                        long double x87_r6_15 = v_60_1 * v_4c;
                        v_30_2 = v_48 + v_54_1 - v_68_1;
                        v_2c_2 = v_44 + x87_r6_10 - v_64_1;
                        v_38_2 = v_48 + v_68_1 + v_54_1;
                        v_34_2 = v_44 + v_64_1 + x87_r6_10;
                        v_40_2 = v_48 + x87_r7_17 - v_68_1;
                        v_3c_2 = v_44 + x87_r6_15 - v_64_1;
                        v_28_1 = v_48 + x87_r7_17 + v_68_1;
                        x87_r7_21 = v_44 + x87_r6_15 + v_64_1;
                    }
                    int32_t valA11 = *(dstD + 0xe8);
                    float v_24_2 = x87_r7_21;
                    float v_5c;

                    if (valA11)
                    {
                        if (!(valA11 & 0x80000))
                        {
                            v_5c = 1f;
                            flagP = *(dstD + 0xd0) * srcS1[6];
                            ctxB = *(dstD + 0xd4) * srcS1[6];
                            v_10 = *(dstD + 0xd8) * srcS1[6];
                        }
                        else
                            v_5c = srcS1[6];
                    }

                    int32_t* v_bc_1;
                    float v_b8_1;
                    float v_b4_1;
                    float v_b0_1;
                    float v_ac_1;
                    float v_a8_1;
                    float v_a4_1;
                    float v_a0_1;
                    float v_9c_1;
                    float v_98_1;
                    float v_94_1;
                    float v_90_1;
                    float v_8c_1;
                    float v_88_1;
                    int32_t v_84_3;
                    int32_t v_80_3;

                    if (!*(dstD + 0xfc))
                    {
                        int32_t v_7c_5 = 0;
                        v_80_3 = valA11 | 0x1000000;
                        v_84_3 = 0;
                        v_88_1 = v_5c;
                        v_8c_1 = a1;
                        v_90_1 = v_10;
                        v_94_1 = ctxB;
                        v_98_1 = flagP;
                        v_9c_1 = v_24_2;
                        v_a0_1 = v_28_1;
                        v_a4_1 = v_3c_2;
                        v_a8_1 = v_40_2;
                        v_ac_1 = v_34_2;
                        v_b0_1 = v_38_2;
                        v_b4_1 = v_2c_2;
                        v_b8_1 = v_30_2;
                        v_bc_1 = *(dstD + 0x80);
                    }
                    else
                    {
                        int32_t* objC6 = *(dstD + 0x80);
                        int32_t v_7c_4 = 0;
                        v_80_3 = valA11 | 0x1000000;
                        int32_t valA13 = 0;
                        valA13 = *(srcS1[5] + objC6[3] + 0x10);
                        v_84_3 = valA13 - 1;
                        v_88_1 = v_5c;
                        v_8c_1 = a1;
                        v_90_1 = v_10;
                        v_94_1 = ctxB;
                        v_98_1 = flagP;
                        v_9c_1 = v_24_2;
                        v_a0_1 = v_28_1;
                        v_a4_1 = v_3c_2;
                        v_a8_1 = v_40_2;
                        v_ac_1 = v_34_2;
                        v_b0_1 = v_38_2;
                        v_b4_1 = v_2c_2;
                        v_b8_1 = v_30_2;
                        v_bc_1 = objC6;
                    }

                    Qsprite_Register4Az(v_bc_1, v_b8_1, v_b4_1, v_b0_1, v_ac_1, v_a8_1,
                        v_a4_1, v_a0_1, v_9c_1, v_98_1, v_94_1, v_90_1, v_8c_1,
                        v_88_1, v_84_3, v_80_3, 0);
                }
            }

            i = i_1 + 1;
            i_1 = i;
        } while (i < *(dstD + 0xf0));
    }

    return i;
}

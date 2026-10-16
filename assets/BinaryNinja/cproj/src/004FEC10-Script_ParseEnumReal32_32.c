#include "gi_platform.h"
#include "004FEC10-Script_ParseEnumReal32_32.h"
char* Script_ParseEnumReal32_32(int32_t a1, float* a2, int32_t* a3, char* a4, float a5, int32_t a6, float* a7 )

{
    float v_140 = 0.0f;
    int32_t v_130 = 0;
    void* valA1 = Script_ExecuteLevelScript_4(a1);

    if (!valA1)
    {
        *a4 = valA1;
        return valA1;
    }

    int32_t* valA2 = QTask_DeleteTask_2(valA1, g_a7a620);
    int32_t* ctxB = valA2;
    int32_t* v_cc = ctxB;

    if (!ctxB)
    {
        *a4 = ctxB;
        return a4;
    }

    long double fpu7 = *(valA1 + 0x28);
    long double f1 = 0.0f;
    fpu7 - f1;
    valA2 = (fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe;

    if (!(*(&valA2 + 1) & 0x40))
    {
        long double x87_r7_1 = a5;
        long double f2_1 = 0.0f;
        x87_r7_1 - f2_1;
        valA2 = (x87_r7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&valA2 + 1) & 1)
        {
            do
            {
                x87_r7_1 = x87_r7_1 + *(valA1 + 0x28);
                long double f4_1 = 0.0f;
                x87_r7_1 - f4_1;
                valA2 = (x87_r7_1 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f4_1 ? 1 : 0) << 0xe | 0x3800;
            } while (*(&valA2 + 1) & 1);

            a5 = x87_r7_1;
        }

        long double f3_1 = *(valA1 + 0x28);
        x87_r7_1 - f3_1;
        valA2 = (x87_r7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f3_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&valA2 + 1) & 1))
        {
            do
            {
                x87_r7_1 = x87_r7_1 - *(valA1 + 0x28);
                long double f6_1 = *(valA1 + 0x28);
                x87_r7_1 - f6_1;
                valA2 = (x87_r7_1 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f6_1 ? 1 : 0) << 0xe | 0x3800;
            } while (!(*(&valA2 + 1) & 1));

            a5 = x87_r7_1;
        }

        long double f5_1 = 0.0f;
        x87_r7_1 - f5_1;
        valA2 = (x87_r7_1 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f5_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f5_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&valA2 + 1) & 0x40))
        {
            long double fpu6 = 0.0f;
            fpu6 - x87_r7_1;
            valA2 = (fpu6 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu6, x87_r7_1) ? 1 : 0) << 0xa
                | (fpu6 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800;

            if (*(&valA2 + 1) & 1)
            {
                void* ctxB2;

                do
                {
                    valA2 = g_a7a620;
                    valA2 = QTask_TriggerEvent_2(v_cc, valA2);

                    if (!valA2)
                    {
                        *a4 = 0;
                        return valA2;
                    }

                    ctxB2 = valA2[0x3c];
                    v_cc = valA2;
                    long double x87_r7_5 = v_140 + *(ctxB2 + 0xf8);
                    v_140 = x87_r7_5;
                    long double f8_1 = a5;
                    x87_r7_5 - f8_1;
                    valA2 = (x87_r7_5 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, f8_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == f8_1 ? 1 : 0) << 0xe;
                } while (*(&valA2 + 1) & 1);

                if (ctxB2)
                {
                    long double x87_r7_7 = v_140 - *(ctxB2 + 0xf8);
                    long double f9 = a5;
                    x87_r7_7 - f9;
                    valA2 = (x87_r7_7 < f9 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, f9) ? 1 : 0) << 0xa
                        | (x87_r7_7 == f9 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&valA2 + 1) & 0x40)
                    {
                        int32_t i_3 = a6 + 1;

                        if (i_3 > 0)
                        {
                            valA2 = a3;
                            int32_t i;

                            do
                            {
                                valA2 = &valA2[6];
                                i = i_3;
                                i_3 -= 1;
                                *(valA2 - 0x18) = *(ctxB2 + 0x104) + *(ctxB2 + 0x20);
                                *(valA2 - 0x10) = *(ctxB2 + 0x108) + *(ctxB2 + 0x28);
                                *(valA2 - 8) = *(ctxB2 + 0x10c) + *(ctxB2 + 0x30);
                            } while (i != 1);
                        }

                        if (a2)
                            memcpy(a2, ctxB2 + 0x200, 0x28);

                        *a4 = 1;
                        return valA2;
                    }

                    long double f10 = a5;
                    x87_r7_7 - f10;
                    int32_t dstD3;

                    if (!(*(&((x87_r7_7 < f10 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_7, f10) ? 1 : 0) << 0xa
                            | (x87_r7_7 == f10 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        dstD3 = v_130;
                    else
                    {
                        dstD3 = v_130;
                        float* objC5 = ctxB2 + 0x548;
                        long double f13_1;

                        do
                        {
                            if (dstD3 >= *(ctxB2 + 0x59c))
                            {
                                int32_t valA6 = a6;
                                int32_t i_5 = valA6 + 1;

                                if (i_5 > 0)
                                {
                                    int32_t* objC6 = a3;
                                    int32_t i_1;

                                    do
                                    {
                                        objC6 = &objC6[6];
                                        *(objC6 - 0x18) = *(ctxB2 + *(ctxB2 + 0x59c) * 0xc + 0x104)
                                            + *(ctxB2 + 0x20);
                                        i_1 = i_5;
                                        i_5 -= 1;
                                        *(objC6 - 0x10) = *(ctxB2 + (*(ctxB2 + 0x59c) + 0x16) * 0xc)
                                            + *(ctxB2 + 0x28);
                                        valA6 = *(ctxB2 + 0x59c) * 3;
                                        *(objC6 - 8) =
                                            *(ctxB2 + (valA6 << 2) + 0x10c) + *(ctxB2 + 0x30);
                                    } while (i_1 != 1);
                                }

                                if (a2)
                                {
                                    valA6 = *(ctxB2 + 0x59c);
                                    memcpy(a2, ctxB2 + valA6 * 0x28 + 0x200, 0x28);
                                }

                                *a4 = 1;
                                return valA6;
                            }

                            x87_r7_7 = x87_r7_7 + *objC5;
                            dstD3 += 1;
                            objC5 = &objC5[1];
                            f13_1 = a5;
                            x87_r7_7 - f13_1;
                        } while (*(&((x87_r7_7 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_7, f13_1) ? 1 : 0) << 0xa
                            | (x87_r7_7 == f13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1);
                    }

                    int32_t dstD5 = dstD3 - 1;
                    int32_t srcS5 = 0;
                    int32_t v_130_1 = dstD5;
                    v_140 = x87_r7_7 - *(ctxB2 + (dstD3 << 2) + 0x544);
                    void* valA14 = ctxB2 + dstD5 * 0xc;
                    float* v_b4 = valA14 + 0x104;
                    float* v_90 = valA14 + 0x110;
                    float v_154 = (a5 - v_140) / *(ctxB2 + (dstD5 << 2) + 0x548);
                    void* v_94 = ctxB2 + ((dstD5 * 3 + 0x45) << 2);
                    float* objC11 = ctxB2 + ((dstD5 * 3 + 0x42) << 2);
                    float* v_b0 = objC11;
                    float* v_98 = valA14 + 0x10c;
                    float* v_ac = valA14 + 0x118;
                    float v_88 = (*(ctxB2 + ((dstD5 * 3 + 0x45) << 2))
                        - *(ctxB2 + ((dstD5 * 3 + 0x42) << 2))) * v_154 + *objC11;
                    float* objC13 = a2;
                    int32_t* valA16 = a3;
                    float v_84 =
                        (*(valA14 + 0x118) - *(valA14 + 0x10c)) * v_154 + *(valA14 + 0x10c);
                    *valA16 = (*(valA14 + 0x110) - *(valA14 + 0x104)) * v_154 + *(valA14 + 0x104)
                        + *(ctxB2 + 0x20);
                    *(valA16 + 8) = v_88 + *(ctxB2 + 0x28);
                    *(valA16 + 0x10) = v_84 + *(ctxB2 + 0x30);
                    int16_t idx = 0;
                    char v_139;
                    float v_12c;
                    int32_t v_11c;
                    float v_118;
                    float v_114;
                    float v_c8;
                    int32_t v_a8;
                    float v_9c;

                    if (objC13)
                    {
                        int32_t tmpD8 = dstD5 * 5;
                        void* objC14 = ctxB2 + (tmpD8 << 3);
                        long double x87_r7_37 = *(ctxB2 + (tmpD8 << 3) + 0x220)
                            + *(ctxB2 + (tmpD8 << 3) + 0x210) + *(objC14 + 0x200);
                        long double f12_1 = 0.0f;
                        x87_r7_37 - f12_1;
                        float v_c4;
                        float v_c0;
                        float v_bc_1;
                        long double x87_r7_40;

                        if (*(&((x87_r7_37 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_37, f12_1) ? 1 : 0) << 0xa
                            | (x87_r7_37 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                        {
                            long double x87_r7_42 = *(objC14 + 0x210);
                            long double f14_1 = *(objC14 + 0x200);
                            x87_r7_42 - f14_1;
                            v_a8 = 1;
                            int32_t v_a4_1 = 2;
                            int32_t v_a0_1 = 0;
                            int32_t v_150_1 = 0;

                            if (!(*(&((x87_r7_42 < f14_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_42, f14_1) ? 1 : 0) << 0xa
                                | (x87_r7_42 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                srcS5 = 1;
                                v_150_1 = 1;
                            }

                            long double x87_r7_43 = *(objC14 + 0x220);
                            long double f15_1 = *((srcS5 << 4) + objC14 + 0x200);
                            x87_r7_43 - f15_1;

                            if (!(*(&((x87_r7_43 < f15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_43, f15_1) ? 1 : 0) << 0xa
                                | (x87_r7_43 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                srcS5 = 2;
                                v_150_1 = 2;
                            }

                            int32_t tmpD11 = (&v_a8)[srcS5];
                            x87_r7_40 = sqrtl(*((srcS5 << 4) + objC14 + 0x200)
                                - *((tmpD11 << 4) + objC14 + 0x200)
                                - *(((&v_a8)[tmpD11] << 4) + objC14 + 0x200) + 1.0f);
                            (&v_c8)[v_150_1] = x87_r7_40 * 0.5.0f;
                            long double f18_1 = 0.0f;
                            x87_r7_40 - f18_1;

                            if (!(*(&((x87_r7_40 < f18_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_40, f18_1) ? 1 : 0) << 0xa
                                    | (x87_r7_40 == f18_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                                x87_r7_40 = 0.5.0f / x87_r7_40;

                            int32_t valA24 = v_150_1 * 3;
                            int32_t valA25 = tmpD11 * 3;
                            int32_t valA28 = (&v_a8)[tmpD11];
                            (&v_c8)[tmpD11] = (*(objC14 + ((v_150_1 + valA25) << 2) + 0x200)
                                + *(objC14 + ((valA24 + tmpD11) << 2) + 0x200)) * x87_r7_40;
                            int32_t tmpD12 = valA28 * 3;
                            (&v_c8)[valA28] = (*(objC14 + ((v_150_1 + tmpD12) << 2) + 0x200)
                                + *(objC14 + ((valA24 + valA28) << 2) + 0x200)) * x87_r7_40;
                            v_bc_1 = -(((*(objC14 + ((valA28 + valA25) << 2) + 0x200)
                                - *(objC14 + ((tmpD11 + tmpD12) << 2) + 0x200)) * x87_r7_40));
                        }
                        else
                        {
                            long double x87_r7_39 = sqrtl(x87_r7_37 + 1.0f);
                            v_bc_1 = x87_r7_39 * 0.5.0f;
                            x87_r7_40 = 0.5.0f / x87_r7_39;
                            v_c8 = -(((*(objC14 + 0x214) - *(objC14 + 0x21c)) * x87_r7_40));
                            v_c4 = -(((*(objC14 + 0x218) - *(ctxB2 + ((dstD5 * 5 + 0x41) << 3)))
                                * x87_r7_40));
                            v_c0 = -(((*(objC14 + 0x204) - *(objC14 + 0x20c)) * x87_r7_40));
                        }
                        int32_t valA30 = *(objC14 + 0x224);
                        long double x87_r7_51 =
                            *(objC14 + 0x248) + *(objC14 + 0x238) + *(objC14 + 0x228);
                        long double f16_1 = 0.0f;
                        x87_r7_51 - f16_1;
                        float v_110;
                        float v_10c;
                        float v_108_1;
                        long double x87_r7_54;

                        if (*(&((x87_r7_51 < f16_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_51, f16_1) ? 1 : 0) << 0xa
                            | (x87_r7_51 == f16_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                        {
                            long double x87_r7_56 = *(objC14 + 0x238);
                            long double f19_1 = *(objC14 + 0x228);
                            x87_r7_56 - f19_1;
                            int32_t tmpD19 = 0;
                            v_a8 = 1;
                            int32_t v_a4_2 = 2;
                            int32_t v_a0_2 = 0;

                            if (!(*(&((x87_r7_56 < f19_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_56, f19_1) ? 1 : 0) << 0xa
                                    | (x87_r7_56 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                tmpD19 = 1;

                            long double x87_r7_57 = *(objC14 + 0x248);
                            long double f21_1 = *((tmpD19 << 4) + objC14 + 0x228);
                            x87_r7_57 - f21_1;

                            if (!(*(&((x87_r7_57 < f21_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_57, f21_1) ? 1 : 0) << 0xa
                                    | (x87_r7_57 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                tmpD19 = 2;

                            int32_t srcS12 = (&v_a8)[tmpD19];
                            x87_r7_54 = sqrtl(*((tmpD19 << 4) + objC14 + 0x228)
                                - *((srcS12 << 4) + objC14 + 0x228)
                                - *(((&v_a8)[srcS12] << 4) + objC14 + 0x228) + 1.0f);
                            (&v_114)[tmpD19] = x87_r7_54 * 0.5.0f;
                            long double f22_1 = 0.0f;
                            x87_r7_54 - f22_1;

                            if (!(*(&((x87_r7_54 < f22_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_54, f22_1) ? 1 : 0) << 0xa
                                    | (x87_r7_54 == f22_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                                x87_r7_54 = 0.5.0f / x87_r7_54;

                            int32_t dstD8 = srcS12 * 3;
                            int32_t valA40 = tmpD19 * 3;
                            int32_t valA42 = (&v_a8)[srcS12];
                            int32_t dstD10 = valA42 * 3;
                            (&v_114)[srcS12] = (*(objC14 + ((dstD8 + tmpD19) << 2) + 0x228)
                                + *(objC14 + ((valA40 + srcS12) << 2) + 0x228)) * x87_r7_54;
                            (&v_114)[valA42] = (*(objC14 + ((dstD10 + tmpD19) << 2) + 0x228)
                                + *(objC14 + ((valA40 + valA42) << 2) + 0x228)) * x87_r7_54;
                            v_108_1 = -(((*(objC14 + ((dstD8 + valA42) << 2) + 0x228)
                                - *(objC14 + ((dstD10 + srcS12) << 2) + 0x228)) * x87_r7_54));
                        }
                        else
                        {
                            long double x87_r7_53 = sqrtl(x87_r7_51 + 1.0f);
                            v_108_1 = x87_r7_53 * 0.5.0f;
                            x87_r7_54 = 0.5.0f / x87_r7_53;
                            v_114 = -(((*(objC14 + 0x23c) - *(objC14 + 0x244)) * x87_r7_54));
                            v_110 = -(((*(objC14 + 0x240) - *(ctxB2 + ((dstD5 * 5 + 0x46) << 3)))
                                * x87_r7_54));
                            v_10c = -(((*(objC14 + 0x22c) - *(objC14 + 0x234)) * x87_r7_54));
                        }
                        int32_t objC15 = *(objC14 + 0x24c);
                        Sys_CloseFileStream_13(&v_139, &v_118, &v_9c, &v_c8, &v_114);
                        int16_t valA46;
                        valA46 = v_139;

                        if (valA46)
                        {
                            v_114 = -(v_114);
                            v_110 = -(v_110);
                            v_10c = -(v_10c);
                            v_108_1 = -(v_108_1);
                        }

                        long double x87_r7_71 = v_118;
                        long double f23_1 = 0.0f;
                        x87_r7_71 - f23_1;
                        float v_128;
                        float v_124;
                        float v_120;

                        if (!(*(&((x87_r7_71 < f23_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_71, f23_1) ? 1 : 0) << 0xa
                            | (x87_r7_71 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                            long double x87_r7_72 = v_118;
                            long double f26_1 = 0.00999999978.0f;
                            x87_r7_72 - f26_1;
                            long double x87_r6_61;
                            long double x87_r7_74;

                            if (!(*(&((x87_r7_72 < f26_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_72, f26_1) ? 1 : 0) << 0xa
                                | (x87_r7_72 == f26_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                float v_138_3 = v_118 * v_154;
                                long double fp0_1;
                                bool c1_1;
                                bool c2_21;
                                fp0_1 = __fsin(v_118 - v_138_3);
                                x87_r7_74 = fp0_1 * v_9c;
                                long double fp0_2;
                                bool c1_2;
                                bool c2_22;
                                fp0_2 = __fsin(v_138_3);
                                x87_r6_61 = fp0_2 * v_9c;
                            }
                            else
                            {
                                x87_r7_74 = 1.0f - v_154;
                                x87_r6_61 = v_154;
                            }

                            v_11c = objC15 + valA30 + 1;
                            v_12c = x87_r6_61 * v_114 + x87_r7_74 * v_c8;
                            v_128 = x87_r6_61 * v_110 + x87_r7_74 * v_c4;
                            v_124 = x87_r6_61 * v_10c + x87_r7_74 * v_c0;
                            v_120 = x87_r6_61 * v_108_1 + x87_r7_74 * v_bc_1;
                        }
                        else
                            memcpy(&v_12c, &v_c8, 0x14);

                        long double x87_r7_83 = v_12c * v_12c;
                        dstD5 = v_130_1;
                        long double x87_r6_68 = v_128 * v_12c;
                        a2[9] = v_11c;
                        objC13 = a2;
                        long double x87_r6_69 = x87_r6_68 + x87_r6_68;
                        long double x87_r5_11 = v_124 * v_12c;
                        float v_148_3 = x87_r5_11 + x87_r5_11;
                        long double x87_r5_14 = v_120 * v_12c;
                        float v_150_2 = x87_r5_14 + x87_r5_14;
                        long double x87_r5_17 = v_128 * v_128;
                        float v_14c_1 = x87_r5_17 + x87_r5_17;
                        long double x87_r5_20 = v_124 * v_128;
                        float v_d0_1 = x87_r5_20 + x87_r5_20;
                        long double x87_r5_23 = v_120 * v_128;
                        float v_144_2 = x87_r5_23 + x87_r5_23;
                        long double x87_r5_26 = v_124 * v_124;
                        float v_138_4 = x87_r5_26 + x87_r5_26;
                        long double x87_r5_29 = v_120 * v_124;
                        long double x87_r5_30 = x87_r5_29 + x87_r5_29;
                        *a2 = 1.0f - v_14c_1 - v_138_4;
                        a2[1] = x87_r6_69 - x87_r5_30;
                        a2[2] = v_144_2 + v_148_3;
                        a2[3] = x87_r5_30 + x87_r6_69;
                        long double x87_r7_85 = 1.0f - (x87_r7_83 + x87_r7_83);
                        a2[4] = x87_r7_85 - v_138_4;
                        a2[5] = v_d0_1 - v_150_2;
                        a2[6] = v_148_3 - v_144_2;
                        a2[7] = v_d0_1 + v_150_2;
                        a2[8] = x87_r7_85 - v_14c_1;
                        idx = 0;
                        valA16 = a3;
                    }

                    float* srcS13 = a7;

                    if (srcS13)
                    {
                        float v_88_1 =
                            objC13[4] * srcS13[1] + objC13[3] * *srcS13 + objC13[5] * srcS13[2];
                        float v_84_1 =
                            objC13[7] * srcS13[1] + objC13[6] * *srcS13 + objC13[8] * srcS13[2];
                        *valA16 = objC13[1] * srcS13[1] + objC13[2] * srcS13[2] + *objC13 * *srcS13
                            + *valA16;
                        *(valA16 + 8) = v_88_1 + *(valA16 + 8);
                        *(valA16 + 0x10) = v_84_1 + *(valA16 + 0x10);
                        idx = 0;
                    }

                    int32_t valA49 = a6;
                    float v_d0_2 = a5;
                    int32_t v_138_5 = 0;

                    if (valA49 > 0)
                    {
🚫🚫                        while (true)
                        {
                            /* unimplemented  {fld fp0, dword [valA+objC*4]} */
🚫🚫                            float v_150_3 = /* float v_150_3 =
                                unimplemented  {fst dword [esp+0x10], fp0} */;
🚫🚫                            /* unimplemented  {fld fp0, fp0} */
🚫🚫                            /* unimplemented  {fmul fp0, fp1} */
                            int32_t* v_154_1 = a3;
                            a3 = &a3[6];
🚫🚫🚫                            float v_14c_2 = /* float v_14c_2 =
                                unimplemented  {fstp dword [esp+0x14], fp0} */;
                            /* unimplemented  {fstp dword [esp+0x14], fp0} */
🚫🚫                            /* unimplemented  {fld fp0, fp0} */
🚫🚫                            /* unimplemented  {fadd dword [esp+0x90]} */
🚫🚫🚫                            float v_d0_3 = /* float v_d0_3 =
                                unimplemented  {fstp dword [esp+0x90], fp0} */;
                            /* unimplemented  {fstp dword [esp+0x90], fp0} */

                            if (a2)
                                a2 = &a2[0xa];

⋯                            long double f20_1 = 0.0f;
                            /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f20_1 */
                                - f20_1;
                            bool c0_21 = /* bool c0_21 =
                                unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f20_1 */
                                < f20_1;
                            bool c2_23 = FCMP_UO(/* bool c2_23 = is_unordered.t(
                                unimplemented  {fcomp fp0, dword [&g_5333ec]}, f20_1) */,
                                f20_1);
                            bool c3_21 = /* bool c3_21 =
                                unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f20_1 */
                                == f20_1;
                            /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
                            int16_t top_49;
                            double v_100;
                            double v_e8;
                            double v_e0;
                            int32_t* valA58;
                            int16_t top_35;

                            if (!(*(&((c0_21 ? 1 : 0) << 8 | (c2_23 ? 1 : 0) << 0xa
                                | (c3_21 ? 1 : 0) << 0xe | (idx & 7) << 0xb) + 1) & 1))
                            {
🚫🚫                                /* unimplemented  {fld fp0, dword [objC]} */
🚫🚫                                /* unimplemented  {fadd qword [ctxB+0x20]} */
🚫🚫🚫                                v_e8 = /* v_e8 = unimplemented  {fstp qword [esp+0x78], fp0} */;
                                /* unimplemented  {fstp qword [esp+0x78], fp0} */
🚫🚫                                /* unimplemented  {fld fp0, dword [tmpD]} */
🚫🚫                                /* unimplemented  {fadd qword [ctxB+0x28]} */
🚫🚫🚫                                v_e0 = /* v_e0 = unimplemented  {fstp qword [esp+0x80], fp0} */;
                                /* unimplemented  {fstp qword [esp+0x80], fp0} */
🚫🚫                                /* unimplemented  {fld fp0, dword [valA]} */
🚫🚫                                /* unimplemented  {fadd qword [ctxB+0x30]} */
🚫🚫🚫                                double v_d8_5 = /* double v_d8_5 =
                                    unimplemented  {fstp qword [esp+0x88], fp0} */;
                                /* unimplemented  {fstp qword [esp+0x88], fp0} */

                                if (srcS13)
                                {
🚫🚫                                    /* unimplemented  {fld fp0, dword [ctxB+tmpD*8]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [srcS+0x8]} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [ctxB+objC*8+0x22c]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [srcS+0x4]} */
🚫🚫🚫                                    /* unimplemented  {faddp fp1, fp0} */
                                    /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [valA+0x228]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [srcS]} */
🚫🚫🚫                                    /* unimplemented  {faddp fp1, fp0} */
                                    /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [valA+0x238]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [srcS+0x4]} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [valA+0x234]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [srcS]} */
🚫🚫🚫                                    /* unimplemented  {faddp fp1, fp0} */
                                    /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [valA+0x23c]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [srcS+0x8]} */
🚫🚫🚫                                    /* unimplemented  {faddp fp1, fp0} */
                                    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫                                    float v_10_1 = /* float v_10_1 =
                                        unimplemented  {fstp dword [esp+0x150], fp0} */;
                                    /* unimplemented  {fstp dword [esp+0x150], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [valA+0x244]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [srcS+0x4]} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [valA+0x240]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [srcS]} */
🚫🚫🚫                                    /* unimplemented  {faddp fp1, fp0} */
                                    /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [valA+0x248]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [srcS+0x8]} */
🚫🚫🚫                                    /* unimplemented  {faddp fp1, fp0} */
                                    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫                                    float v_c_1 = /* float v_c_1 =
                                        unimplemented  {fstp dword [esp+0x154], fp0} */;
                                    /* unimplemented  {fstp dword [esp+0x154], fp0} */
🚫🚫                                    /* unimplemented  {fadd qword [esp+0x78]} */
🚫🚫🚫                                    v_e8 = /* v_e8 =
                                        unimplemented  {fstp qword [esp+0x78], fp0} */;
                                    /* unimplemented  {fstp qword [esp+0x78], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [esp+0x150]} */
🚫🚫                                    /* unimplemented  {fadd qword [esp+0x80]} */
🚫🚫🚫                                    v_e0 = /* v_e0 =
                                        unimplemented  {fstp qword [esp+0x80], fp0} */;
                                    /* unimplemented  {fstp qword [esp+0x80], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [esp+0x154]} */
🚫🚫                                    /* unimplemented  {fadd qword [esp+0x88]} */
🚫🚫🚫                                    double v_d8_6 = /* double v_d8_6 =
                                        unimplemented  {fstp qword [esp+0x88], fp0} */;
                                    /* unimplemented  {fstp qword [esp+0x88], fp0} */
                                }

🚫🚫                                int32_t objC29 = Sys_PushStack_11(v_154_1, &v_e8);
                                /* unimplemented  {call Sys_PushStack_11} */
⋯                                long double f24_1 = v_14c_2;
                                /* unimplemented  {fcomp fp0, dword [esp+0x1c]} f- f24_1 */
                                    - f24_1;
                                bool c0_26 = /* bool c0_26 =
                                    unimplemented  {fcomp fp0, dword [esp+0x1c]} f< f24_1 */
                                    < f24_1;
                                bool c2_30 = FCMP_UO(/* bool c2_30 = is_unordered.t(
                                    unimplemented  {fcomp fp0, dword [esp+0x1c]}, f24_1) */,
                                    f24_1);
                                bool c3_26 = /* bool c3_26 =
                                    unimplemented  {fcomp fp0, dword [esp+0x1c]} f== f24_1 */
                                    == f24_1;
                                /* unimplemented  {fcomp fp0, dword [esp+0x1c]} */
                                top_35 = idx;

                                if (*(&((c0_26 ? 1 : 0) << 8 | (c2_30 ? 1 : 0) << 0xa
                                    | (c3_26 ? 1 : 0) << 0xe | (top_35 & 7) << 0xb) + 1) & 0x41)
                                {
                                    int32_t valA77;

                                    do
                                    {
                                        int16_t top_266;

                                        if (dstD5 >= *(ctxB2 + 0x59c) - 1)
                                        {
                                            objC29 = g_a7a620;
                                            valA58 = QTask_TriggerEvent_2(v_cc, objC29);

                                            if (!valA58)
                                                goto label_50081a;

                                            void* objC30 = valA58[0x3c];

                                            if (!objC30)
                                                goto label_50081a;

                                            srcS13 = a7;
🚫🚫                                            /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫                                            /* unimplemented  {fadd dword [ctxB+tmpD*4+0x548]} */
                                            dstD5 = 0;
                                            v_cc = valA58;
                                            ctxB2 = objC30;
                                            v_130_1 = 0;
🚫🚫🚫                                            v_140 = /* v_140 =
                                                unimplemented  {fstp dword [esp+0x20], fp0} */;
                                            /* unimplemented  {fstp dword [esp+0x20], fp0} */
                                            top_266 = top_35;
                                        }
                                        else
                                        {
🚫🚫                                            /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫                                            /* unimplemented  {fadd dword [ctxB+dstD*4+0x548]} */
                                            dstD5 += 1;
                                            v_130_1 = dstD5;
🚫🚫🚫                                            v_140 = /* v_140 =
                                                unimplemented  {fstp dword [esp+0x20], fp0} */;
                                            /* unimplemented  {fstp dword [esp+0x20], fp0} */
                                            top_266 = top_35;
                                        }

                                        void* valA72 = ctxB2 + dstD5 * 0xc;
🚫🚫                                        /* unimplemented  {fld fp0, dword [valA+0x104]} */
🚫🚫                                        /* unimplemented  {fadd qword [ctxB+0x20]} */
                                        void* v_b4_2 = valA72 + 0x104;
🚫🚫🚫                                        v_100 = /* v_100 =
                                            unimplemented  {fstp qword [esp+0x60], fp0} */;
                                        /* unimplemented  {fstp qword [esp+0x60], fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [ctxB+objC*4]} */
🚫🚫                                        /* unimplemented  {fadd qword [ctxB+0x28]} */
                                        void* v_b0_2 = ctxB2 + ((dstD5 * 3 + 0x42) << 2);
                                        void* v_98_2 = valA72 + 0x10c;
🚫🚫🚫                                        double v_f8_9 = /* double v_f8_9 =
                                            unimplemented  {fstp qword [esp+0x68], fp0} */;
                                        /* unimplemented  {fstp qword [esp+0x68], fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [objC]} */
🚫🚫                                        /* unimplemented  {fadd qword [ctxB+0x30]} */
                                        void* v_90_2 = valA72 + 0x110;
                                        void* v_ac_2 = valA72 + 0x118;
🚫🚫🚫                                        double v_f0_9 = /* double v_f0_9 =
                                            unimplemented  {fstp qword [esp+0x70], fp0} */;
                                        /* unimplemented  {fstp qword [esp+0x70], fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [objC]} */
🚫🚫                                        /* unimplemented  {fadd qword [ctxB+0x20]} */
                                        void* v_94_2 = ctxB2 + ((dstD5 * 3 + 0x45) << 2);
🚫🚫🚫                                        v_e8 = /* v_e8 =
                                            unimplemented  {fstp qword [esp+0x78], fp0} */;
                                        /* unimplemented  {fstp qword [esp+0x78], fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [objC]} */
🚫🚫                                        /* unimplemented  {fadd qword [ctxB+0x28]} */
🚫🚫🚫                                        v_e0 = /* v_e0 =
                                            unimplemented  {fstp qword [esp+0x80], fp0} */;
                                        /* unimplemented  {fstp qword [esp+0x80], fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [valA]} */
🚫🚫                                        /* unimplemented  {fadd qword [ctxB+0x30]} */
🚫🚫🚫                                        double v_d8_9 = /* double v_d8_9 =
                                            unimplemented  {fstp qword [esp+0x88], fp0} */;
                                        /* unimplemented  {fstp qword [esp+0x88], fp0} */
                                        int16_t top_279 = top_266;

                                        if (srcS13)
                                        {
🚫🚫                                            /* unimplemented  {fld fp0, dword [ctxB+objC*8]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS+0x8]} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [ctxB+valA*8+0x204]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS+0x4]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x200]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x210]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS+0x4]} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x20c]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x214]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS+0x8]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫                                            float v_4c_1 = /* float v_4c_1 =
                                                unimplemented  {fstp dword [esp+0x114], fp0} */;
                                            /* unimplemented  {fstp dword [esp+0x114], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x21c]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS+0x4]} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x218]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x220]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS+0x8]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫                                            float v_48_1 = /* float v_48_1 =
                                                unimplemented  {fstp dword [esp+0x118], fp0} */;
                                            /* unimplemented  {fstp dword [esp+0x118], fp0} */
🚫🚫                                            /* unimplemented  {fadd qword [esp+0x60]} */
🚫🚫🚫                                            v_100 = /* v_100 =
                                                unimplemented  {fstp qword [esp+0x60], fp0} */;
                                            /* unimplemented  {fstp qword [esp+0x60], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [esp+0x114]} */
🚫🚫                                            /* unimplemented  {fadd qword [esp+0x68]} */
🚫🚫🚫                                            double v_f8_10 = /* double v_f8_10 =
                                                unimplemented  {fstp qword [esp+0x68], fp0} */;
                                            /* unimplemented  {fstp qword [esp+0x68], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [esp+0x118]} */
🚫🚫                                            /* unimplemented  {fadd qword [esp+0x70]} */
🚫🚫🚫                                            double v_f0_10 = /* double v_f0_10 =
                                                unimplemented  {fstp qword [esp+0x70], fp0} */;
                                            /* unimplemented  {fstp qword [esp+0x70], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [ctxB+tmpD*8]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS+0x8]} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x22c]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS+0x4]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x228]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x238]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS+0x4]} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x234]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x23c]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS+0x8]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫                                            float v_1c_1 = /* float v_1c_1 =
                                                unimplemented  {fstp dword [esp+0x144], fp0} */;
                                            /* unimplemented  {fstp dword [esp+0x144], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x244]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS+0x4]} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x240]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [valA+0x248]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [srcS+0x8]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫                                            float v_18_1 = /* float v_18_1 =
                                                unimplemented  {fstp dword [esp+0x148], fp0} */;
                                            /* unimplemented  {fstp dword [esp+0x148], fp0} */
🚫🚫                                            /* unimplemented  {fadd qword [esp+0x78]} */
🚫🚫🚫                                            v_e8 = /* v_e8 =
                                                unimplemented  {fstp qword [esp+0x78], fp0} */;
                                            /* unimplemented  {fstp qword [esp+0x78], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [esp+0x144]} */
🚫🚫                                            /* unimplemented  {fadd qword [esp+0x80]} */
🚫🚫🚫                                            v_e0 = /* v_e0 =
                                                unimplemented  {fstp qword [esp+0x80], fp0} */;
                                            /* unimplemented  {fstp qword [esp+0x80], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [esp+0x148]} */
🚫🚫                                            /* unimplemented  {fadd qword [esp+0x88]} */
🚫🚫🚫                                            double v_d8_10 = /* double v_d8_10 =
                                                unimplemented  {fstp qword [esp+0x88], fp0} */;
                                            /* unimplemented  {fstp qword [esp+0x88], fp0} */
                                            int16_t top_311;
                                            top_279 = top_311 + 2;
                                        }

🚫🚫                                        Sys_PushStack_11(v_154_1, &v_100);
                                        /* unimplemented  {call Sys_PushStack_11} */
🚫🚫🚫                                        float v_144_4 = /* float v_144_4 =
                                            unimplemented  {fstp dword [esp+0x24], fp0} */;
                                        /* unimplemented  {fstp dword [esp+0x24], fp0} */
🚫🚫                                        Sys_PushStack_11(v_154_1, &v_e8);
                                        /* unimplemented  {call Sys_PushStack_11} */
🚫🚫🚫                                        float v_148_5 = /* float v_148_5 =
                                            unimplemented  {fstp dword [esp+0x28], fp0} */;
                                        /* unimplemented  {fstp dword [esp+0x28], fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [esp+0x2c]} */
⋯                                        long double f29_1 = v_14c_2;
                                        /* unimplemented  {fcomp fp0, dword [esp+0x24]}
                                            f- f29_1 */ - f29_1;
                                        bool c0_27 = /* bool c0_27 =
                                            unimplemented  {fcomp fp0, dword [esp+0x24]}
                                            f< f29_1 */ < f29_1;
                                        bool c2_31 = FCMP_UO(/* bool c2_31 = is_unordered.t(
                                            unimplemented  {fcomp fp0, dword [esp+0x24]}, f29_1) */,
                                            f29_1);
                                        bool c3_27 = /* bool c3_27 =
                                            unimplemented  {fcomp fp0, dword [esp+0x24]}
                                            f== f29_1 */ == f29_1;
                                        /* unimplemented  {fcomp fp0, dword [esp+0x24]} */

                                        objC29 = *(&((c0_27 ? 1 : 0) << 8 | (c2_31 ? 1 : 0) << 0xa
                                            | (c3_27 ? 1 : 0) << 0xe | (top_279 & 7) << 0xb) + 1)
                                            & 0x41 ? 0 : 1;

🚫🚫                                        /* unimplemented  {fld fp0, dword [esp+0x18]} */
⋯                                        long double f34_1 = v_14c_2;
                                        /* unimplemented  {fcomp fp0, dword [esp+0x14]}
                                            f- f34_1 */ - f34_1;
                                        bool c0_28 = /* bool c0_28 =
                                            unimplemented  {fcomp fp0, dword [esp+0x14]}
                                            f< f34_1 */ < f34_1;
                                        bool c2_32 = FCMP_UO(/* bool c2_32 = is_unordered.t(
                                            unimplemented  {fcomp fp0, dword [esp+0x14]}, f34_1) */,
                                            f34_1);
                                        bool c3_28 = /* bool c3_28 =
                                            unimplemented  {fcomp fp0, dword [esp+0x14]}
                                            f== f34_1 */ == f34_1;
                                        /* unimplemented  {fcomp fp0, dword [esp+0x14]} */
                                        top_35 = top_279;

                                        valA77 = *(&((c0_28 ? 1 : 0) << 8 | (c2_32 ? 1 : 0) << 0xa
                                            | (c3_28 ? 1 : 0) << 0xe | (top_35 & 7) << 0xb) + 1) & 0x41
                                            ? 0 : 1;
                                    } while (objC29 == valA77);
🚫🚫                                    /* unimplemented  {fld fp0, dword [ctxB+dstD*4+0x548]} */
                                    int32_t v_164_13 = objC29;
🚫🚫🚫                                    float v_14c_4 = /* float v_14c_4 =
                                        unimplemented  {fstp dword [esp+0x18], fp0} */;
                                    /* unimplemented  {fstp dword [esp+0x18], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫                                    /* unimplemented  {fsqrt } */
🚫🚫🚫                                    float v_154_7 = /* float v_154_7 =
                                        unimplemented  {fstp dword [esp+0x10], fp0} */;
                                    /* unimplemented  {fstp dword [esp+0x10], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [esp+0x1c]} */
🚫🚫                                    /* unimplemented  {fsub fp0, dword [esp+0x20]} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [esp+0x18]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [esp+0x18]} */
🚫🚫🚫                                    /* unimplemented  {fsubp fp1, fp0} */
                                    /* unimplemented  {fsubp fp1, fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [esp+0x18]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [&g_534ba8]} */
🚫🚫🚫                                    /* unimplemented  {fdivp fp1, fp0} */
                                    /* unimplemented  {fdivp fp1, fp0} */
🚫🚫🚫                                    float v_164_14 = /* float v_164_14 =
                                        unimplemented  {fstp dword [esp], fp0} */;
                                    /* unimplemented  {fstp dword [esp], fp0} */
🚫🚫                                    Sys_DispatchOpcode_9(v_164_14);
                                    /* unimplemented  {call Sys_DispatchOpcode_9} */
🚫🚫                                    /* unimplemented  {fld fp0, fp0} */
🚫🚫🚫                                    long double fp0_5;
                                    bool c1_5;
                                    bool c2_33;
                                    fp0_5 = __fsin(/* fp0_5, c1_5, c2_33 =
                                        __fsin(unimplemented  {fsin }) */);
                                    /* unimplemented  {fsin } */
🚫🚫🚫                                    float v_144_5 = /* float v_144_5 =
                                        unimplemented  {fstp dword [esp+0x20], fp0} */;
                                    /* unimplemented  {fstp dword [esp+0x20], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [&g_533400]} */
🚫🚫                                    /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫                                    float v_134_4 = /* float v_134_4 =
                                        unimplemented  {fstp dword [esp+0x30], fp0} */;
                                    /* unimplemented  {fstp dword [esp+0x30], fp0} */
🚫🚫🚫                                    /* unimplemented  {fstp fp0, fp0} */
                                    /* unimplemented  {fstp fp0, fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫                                    /* unimplemented  {fdiv fp0, dword [esp+0x14]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [esp+0x10]} */
🚫🚫🚫                                    float v_164_15 = /* float v_164_15 =
                                        unimplemented  {fstp dword [esp], fp0} */;
                                    /* unimplemented  {fstp dword [esp], fp0} */
                                    int16_t top_346 = top_35 + 1;
🚫🚫                                    Sys_PushStack_9(v_164_15);
                                    /* unimplemented  {call Sys_PushStack_9} */
🚫🚫                                    /* unimplemented  {fsubr fp0, dword [esp+0x30]} */
🚫🚫🚫🚫🚫                                    long double f41_1 = 0.001;
                                    /* unimplemented  {fcom fp0, qword [&g_534ba0]}
                                        f- f41_1 */ - f41_1;
                                    bool c0_29 = /* bool c0_29 =
                                        unimplemented  {fcom fp0, qword [&g_534ba0]}
                                        f< f41_1 */ < f41_1;
                                    bool c2_34 = FCMP_UO(/* bool c2_34 = is_unordered.t(
                                        unimplemented  {fcom fp0, qword [&g_534ba0]}, f41_1) */,
                                        f41_1);
                                    bool c3_29 = /* bool c3_29 =
                                        unimplemented  {fcom fp0, qword [&g_534ba0]}
                                        f== f41_1 */ == f41_1;

                                    if (*(&((c0_29 ? 1 : 0) << 8 | (c2_34 ? 1 : 0) << 0xa
                                        | (c3_29 ? 1 : 0) << 0xe | (top_346 & 7) << 0xb) + 1) & 0x41)
                                    {
🚫🚫🚫                                        /* unimplemented  {fstp fp0, fp0} */
                                        /* unimplemented  {fstp fp0, fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [esp+0x18]} */
🚫🚫                                        /* unimplemented  {fsqrt } */
🚫🚫                                        /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫                                        /* unimplemented  {fsub fp0, dword [esp+0xc]} */
🚫🚫🚫🚫                                        /* unimplemented  {fxch fp0, fp1} */
                                        /* unimplemented  {fxch fp0, fp1} */
🚫🚫                                        /* unimplemented  {fsub fp0, dword [esp+0xc]} */
🚫🚫🚫                                        /* unimplemented  {fdivp fp1, fp0} */
                                        /* unimplemented  {fdivp fp1, fp0} */
                                    }
                                    else
                                    {
🚫🚫🚫                                        long double fp0_6;
                                        bool c1_6;
                                        bool c2_35;
                                        fp0_6 = __fsin(/* fp0_6, c1_6, c2_35 =
                                            __fsin(unimplemented  {fsin }) */);
                                        /* unimplemented  {fsin } */
🚫🚫                                        /* unimplemented  {fmul fp0, dword [esp+0x10]} */
🚫🚫                                        /* unimplemented  {fdiv fp0, dword [esp+0x1c]} */
🚫🚫                                        /* unimplemented  {fdiv fp0, dword [esp+0x14]} */
                                    }

🚫🚫🚫                                    float v_154_8 = /* float v_154_8 =
                                        unimplemented  {fstp dword [esp+0xc], fp0} */;
                                    /* unimplemented  {fstp dword [esp+0xc], fp0} */
                                    top_49 = top_346 + 1;
                                }
                                else
                                {
🚫🚫                                    /* unimplemented  {fld fp0, dword [esp+0x90]} */
🚫🚫                                    /* unimplemented  {fsub fp0, dword [esp+0x20]} */
🚫🚫                                    /* unimplemented  {fdiv fp0, dword [ctxB+dstD*4+0x548]} */
🚫🚫🚫                                    float v_154_6 = /* float v_154_6 =
                                        unimplemented  {fstp dword [esp+0xc], fp0} */;
                                    /* unimplemented  {fstp dword [esp+0xc], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [tmpD]} */
🚫🚫                                    /* unimplemented  {fadd qword [ctxB+0x20]} */
🚫🚫🚫                                    v_100 = /* v_100 =
                                        unimplemented  {fstp qword [esp+0x60], fp0} */;
                                    /* unimplemented  {fstp qword [esp+0x60], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [valA]} */
🚫🚫                                    /* unimplemented  {fadd qword [ctxB+0x28]} */
🚫🚫🚫                                    double v_f8_7 = /* double v_f8_7 =
                                        unimplemented  {fstp qword [esp+0x68], fp0} */;
                                    /* unimplemented  {fstp qword [esp+0x68], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [objC]} */
🚫🚫                                    /* unimplemented  {fadd qword [ctxB+0x30]} */
🚫🚫🚫                                    double v_f0_7 = /* double v_f0_7 =
                                        unimplemented  {fstp qword [esp+0x70], fp0} */;
                                    /* unimplemented  {fstp qword [esp+0x70], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [tmpD]} */
🚫🚫                                    /* unimplemented  {fadd qword [ctxB+0x20]} */
🚫🚫🚫                                    v_e8 = /* v_e8 =

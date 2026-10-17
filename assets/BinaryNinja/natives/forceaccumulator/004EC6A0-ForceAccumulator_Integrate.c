// Original IGI.EXE function: ForceAccumulator_Integrate (VA 0x004EC6A0; static CFG gate PASS, CFG score 1.000).
#include "ForceAccumulator_Integrate.h"
int32_t ForceAccumulator_Integrate(void* a1, float* a2)

{
    int32_t objC = 0;
    int32_t result = 0;
    int32_t result_1 = 0;
    long double x87_r7_2 = a2[4] + *a2 + a2[8];
    long double f1 = 0f;
    x87_r7_2 - f1;
    float v_88;
    float v_84;
    float v_80;
    float v_7c;
    float v_6c;

    if (*(&((x87_r7_2 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1) ? 1 : 0) << 0xa
        | (x87_r7_2 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_8 = a2[4];
        long double f2_1 = *a2;
        x87_r7_8 - f2_1;
        v_6c = 1.40129846e-45f;
        int32_t v_68_1 = 2;
        int32_t v_64_1 = 0;

        if (!(*(&((x87_r7_8 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            objC = 1;

        long double x87_r7_9 = a2[8];
        long double f3_1 = a2[objC * 4];
        x87_r7_9 - f3_1;

        if (!(*(&((x87_r7_9 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            objC = 2;

        int32_t tmpD1 = (&v_6c)[objC];
        int32_t dstD1 = (&v_6c)[tmpD1];
        long double x87_r7_14 =
            sqrtl(a2[objC * 4] - *((tmpD1 << 4) + a2) - *((dstD1 << 4) + a2) + 1f);
        (&v_88)[objC] = x87_r7_14 * 0.5f;
        long double f4_1 = 0f;
        x87_r7_14 - f4_1;

        if (!(*(&((x87_r7_14 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            x87_r7_14 = 0.5f / x87_r7_14;

        int32_t valA9 = objC * 3;
        int32_t ctxB5 = dstD1 * 3;
        result = result_1;
        (&v_88)[tmpD1] = (a2[tmpD1 * 3 + objC] + a2[valA9 + tmpD1]) * x87_r7_14;
        (&v_88)[dstD1] = (a2[objC + ctxB5] + a2[valA9 + dstD1]) * x87_r7_14;
        v_7c = -(((a2[tmpD1 * 3 + dstD1] - a2[ctxB5 + tmpD1]) * x87_r7_14));
    }
    else
    {
        long double x87_r7_4 = sqrtl(x87_r7_2 + 1f);
        v_7c = x87_r7_4 * 0.5f;
        long double x87_r7_5 = 0.5f / x87_r7_4;
        v_88 = -(((a2[5] - a2[7]) * x87_r7_5));
        v_84 = -(((a2[6] - a2[2]) * x87_r7_5));
        v_80 = -(((a2[1] - a2[3]) * x87_r7_5));
    }

    float i_2 = *(a1 + 0x5c);
    *(a1 + 0x60) = i_2;

    if (i_2 > 0)
    {
        long double x87_r7_16 = 0f;
        long double x87_r6_26 = 0f;
        float* tmpD2 = *(a1 + 0x54);
        float v_68_2 = x87_r6_26;
        long double x87_r5_1 = 0f;
        float v_50_1 = 0f;
        float v_64_2 = x87_r5_1;
        long double x87_r4_1 = 0f;
        long double x87_r3_1 = 0f;
        float* objC2 = &tmpD2[4];
        float i_1 = i_2;
        float i;

        do
        {
            x87_r4_1 = x87_r4_1 + *tmpD2;
            x87_r3_1 = x87_r3_1 + objC2[-3];
            v_50_1 = v_50_1 + objC2[-2];
            long double x87_r2_3 = objC2[-1];
            long double f7_1 = 0f;
            x87_r2_3 - f7_1;

            if (!(*(&((x87_r2_3 < f7_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r2_3, f7_1) ? 1 : 0) << 0xa
                | (x87_r2_3 == f7_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
            {
            label_4ec87d:
                long double x87_r2_6 = *tmpD2;
                long double f9_1 = 0f;
                x87_r2_6 - f9_1;

                if (!(*(&((x87_r2_6 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r2_6, f9_1) ? 1 : 0) << 0xa
                    | (x87_r2_6 == f9_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                {
                label_4ec8dc:
                    x87_r7_16 = x87_r7_16 + objC2[-2] * *objC2 - objC2[1] * objC2[-3];
                    x87_r6_26 = x87_r6_26 + -((objC2[-2] * objC2[-1] - *tmpD2 * objC2[1]));
                    x87_r5_1 = x87_r5_1 + objC2[-3] * objC2[-1] - *tmpD2 * *objC2;
                }
                else
                {
                    long double x87_r2_7 = objC2[-3];
                    long double f11_1 = 0f;
                    x87_r2_7 - f11_1;

                    if (!(*(&((x87_r2_7 < f11_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r2_7, f11_1) ? 1 : 0) << 0xa
                            | (x87_r2_7 == f11_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                        goto label_4ec8dc;

                    long double x87_r2_8 = objC2[-2];
                    long double f14_1 = 0f;
                    x87_r2_8 - f14_1;

                    if (!(*(&((x87_r2_8 < f14_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r2_8, f14_1) ? 1 : 0) << 0xa
                            | (x87_r2_8 == f14_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                        goto label_4ec8dc;
                }
            }
            else
            {
                long double x87_r2_4 = *objC2;
                long double f10_1 = 0f;
                x87_r2_4 - f10_1;

                if (!(*(&((x87_r2_4 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r2_4, f10_1) ? 1 : 0) << 0xa
                        | (x87_r2_4 == f10_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                    goto label_4ec87d;

                long double x87_r2_5 = objC2[1];
                long double f12_1 = 0f;
                x87_r2_5 - f12_1;

                if (!(*(&((x87_r2_5 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r2_5, f12_1) ? 1 : 0) << 0xa
                        | (x87_r2_5 == f12_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                    goto label_4ec87d;
            }

            tmpD2 = &tmpD2[6];
            objC2 = &objC2[6];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        float v_54_1 = x87_r3_1;
        float v_58_1 = x87_r4_1;
        float v_64_3 = x87_r5_1;
        *(a1 + 0x3c) = v_58_1;
        float v_68_3 = x87_r6_26;
        long double x87_r6_27 = *(a1 + 4);
        *(a1 + 0x40) = v_54_1;
        *(a1 + 0x44) = v_50_1;
        float v_38_1 = x87_r6_27 * v_58_1;
        float v_34_2 = x87_r6_27 * v_54_1;
        long double x87_r6_28 = x87_r6_27 * v_50_1;
        float v_58_2 = x87_r6_28 * a2[2] + v_34_2 * a2[1] + v_38_1 * *a2;
        float v_54_2 = x87_r6_28 * a2[5] + v_38_1 * a2[3] + v_34_2 * a2[4];
        long double x87_r5_16 = v_34_2 * a2[7] + v_38_1 * a2[6];
        long double x87_r5_18 = x87_r6_28 * a2[8];
        *(a1 + 0x5c) = 0;
        *(a1 + 0x18) = v_58_2 + *(a1 + 0x18);
        *(a1 + 0x1c) = v_54_2 + *(a1 + 0x1c);
        *(a1 + 0x20) = x87_r5_16 + x87_r5_18 + *(a1 + 0x20);
        *(a1 + 0x30) = x87_r7_16 + *(a1 + 0x30);
        *(a1 + 0x34) = v_68_3 + *(a1 + 0x34);
        *(a1 + 0x38) = v_64_3 + *(a1 + 0x38);
    }

    long double x87_r7_22 = *(a1 + 0x30);
    long double f5 = 0f;
    x87_r7_22 - f5;

    if (!(*(&((x87_r7_22 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, f5) ? 1 : 0) << 0xa
        | (x87_r7_22 == f5 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4eca05:
        float v_28;
        Sys_PushStack_12(&v_28, *(a1 + 0xc), *(a1 + 0x10), *(a1 + 0x14));
        float v_24;
        float v_20;
        v_6c = v_20 * *(a1 + 0x38) + v_24 * *(a1 + 0x34) + v_28 * *(a1 + 0x30);
        float v_14;
        long double x87_r7_30 = v_14 * *(a1 + 0x38);
        float v_18;
        long double x87_r6_37 = v_18 * *(a1 + 0x34);
        *(a1 + 0x48) = v_6c;
        float v_8;
        long double x87_r7_34 = v_8 * *(a1 + 0x38);
        float v_c;
        long double x87_r6_41 = v_c * *(a1 + 0x34);
        float v_1c;
        *(a1 + 0x4c) = x87_r7_30 + x87_r6_37 + v_1c * *(a1 + 0x30);
        float v_10;
        *(a1 + 0x50) = x87_r7_34 + x87_r6_41 + v_10 * *(a1 + 0x30);
        v_6c = *(a1 + 0x4c) * a2[1] + *a2 * *(a1 + 0x48) + *(a1 + 0x50) * a2[2];
        float v_68_5 =
            a2[3] * *(a1 + 0x48) + *(a1 + 0x50) * a2[5] + *(a1 + 0x4c) * a2[4];
        long double x87_r7_47 = a2[7] * *(a1 + 0x4c) + *(a1 + 0x50) * a2[8];
        long double x87_r6_55 = *(a1 + 0x48) * a2[6];
        *(a1 + 0x48) = v_6c;
        *(a1 + 0x4c) = v_68_5;
        *(a1 + 0x50) = x87_r7_47 + x87_r6_55;
        long double x87_r7_50 = *(a1 + 0x48) * 0.5f;
        long double x87_r6_57 = *(a1 + 0x4c) * 0.5f;
        long double x87_r5_24 = *(a1 + 0x50) * 0.5f;
        float v_64_6 = x87_r5_24;
        float v_44_1 = (v_64_6 + x87_r7_50) * (v_84 + v_88);
        float v_48_1 = (v_7c - v_80) * x87_r6_57;
        long double x87_r6_59 = (v_80 + v_7c) * -(x87_r6_57);
        long double x87_r6_61 = x87_r6_59 + v_48_1 + v_44_1;
        float v_74_1 = ((v_64_6 - x87_r7_50) * (v_88 - v_84) + x87_r6_61) * 0.5f;
        float v_68_6 = v_74_1 + (v_80 + v_84) * -(x87_r7_50) - x87_r6_59;
        float v_64_7 = v_74_1 + (v_64_6 + x87_r6_57) * (v_7c - v_88) - v_48_1;
        float v_60_1 = v_74_1 + (x87_r5_24 - x87_r6_57) * (v_84 - v_80) - v_44_1;
        v_88 = (v_88 + v_7c) * x87_r7_50 + v_74_1 - x87_r6_61 + v_88;
        float v_84_1 = v_68_6 + v_84;
        float v_80_1 = v_64_7 + v_80;
        long double x87_r7_61 = v_60_1 + v_7c;
        long double x87_r6_82 = 1.0 / sqrtl(v_80_1 * v_80_1 + v_84_1 * v_84_1
            + v_88 * v_88 + x87_r7_61 * x87_r7_61);
        v_88 = v_88 * x87_r6_82;
        float v_84_2 = v_84_1 * x87_r6_82;
        float v_80_2 = v_80_1 * x87_r6_82;
        long double x87_r6_84 = x87_r7_61 * x87_r6_82;
        long double x87_r6_93 = 1.0 / sqrtl(v_80_2 * v_80_2 + v_84_2 * v_84_2
            + v_88 * v_88 + x87_r6_84 * x87_r6_84);
        v_88 = v_88 * x87_r6_93;
        float v_84_3 = v_84_2 * x87_r6_93;
        float v_80_3 = v_80_2 * x87_r6_93;
        long double x87_r6_95 = x87_r6_84 * x87_r6_93;
        long double x87_r6_99 = v_88 * v_88;
        a2[9] = 0;
        result = 1;
        float v_2c_1 = x87_r6_99 + x87_r6_99;
        long double x87_r6_102 = v_84_3 * v_88;
        float v_44_2 = x87_r6_102 + x87_r6_102;
        long double x87_r6_105 = v_80_3 * v_88;
        float v_4c_2 = x87_r6_105 + x87_r6_105;
        long double x87_r6_108 = v_88 * x87_r6_95;
        float v_3c_2 = x87_r6_108 + x87_r6_108;
        long double x87_r6_111 = v_84_3 * v_84_3;
        float v_70_1 = x87_r6_111 + x87_r6_111;
        long double x87_r6_114 = v_80_3 * v_84_3;
        float v_40_2 = x87_r6_114 + x87_r6_114;
        long double x87_r6_117 = v_84_3 * x87_r6_95;
        float v_74_2 = x87_r6_117 + x87_r6_117;
        long double x87_r6_120 = v_80_3 * v_80_3;
        float v_48_2 = x87_r6_120 + x87_r6_120;
        long double x87_r7_66 = x87_r6_95 * v_80_3;
        long double x87_r7_67 = x87_r7_66 + x87_r7_66;
        *a2 = 1f - v_70_1 - v_48_2;
        a2[1] = v_44_2 - x87_r7_67;
        a2[2] = v_74_2 + v_4c_2;
        a2[3] = x87_r7_67 + v_44_2;
        long double x87_r7_70 = 1f - v_2c_1;
        a2[4] = x87_r7_70 - v_48_2;
        a2[5] = v_40_2 - v_3c_2;
        a2[6] = v_4c_2 - v_74_2;
        a2[7] = v_40_2 + v_3c_2;
        a2[8] = x87_r7_70 - v_70_1;
    }
    else
    {
        long double x87_r7_23 = *(a1 + 0x34);
        long double f6_1 = 0f;
        x87_r7_23 - f6_1;

        if (!(*(&((x87_r7_23 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4eca05;

        long double x87_r7_24 = *(a1 + 0x38);
        long double f8_1 = 0f;
        x87_r7_24 - f8_1;

        if (!(*(&((x87_r7_24 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_24, f8_1) ? 1 : 0) << 0xa
                | (x87_r7_24 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4eca05;
    }

    SoundSys_InitSoundSys_17(a1);
    return result;
}

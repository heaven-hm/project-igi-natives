// Original IGI.EXE function: Script_ParseEnumReal32_19 (VA 0x004F6750; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumReal32_19.h"
void Script_ParseEnumReal32_19(void* a1, int32_t* a2, int32_t* a3, float a4, float a5, int32_t a6)

{
    if (*(a1 + 0x2ca8) >= 0x14)
        return;

    float v_84_1 = *a3;
    long double x87_r7_1 = v_84_1;
    long double f1_1 = 0f;
    x87_r7_1 - f1_1;
    float v_80_1 = a3[1];
    float v_7c_1 = a3[2];

    if (!(*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4f67b9:
        long double x87_r7_4 = v_7c_1;
        long double x87_r6_1 = v_80_1;
        long double x87_r5_1 = v_84_1;
        long double x87_r7_6 =
            1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_4 * x87_r7_4);
        v_84_1 = v_84_1 * x87_r7_6;
        v_80_1 = v_80_1 * x87_r7_6;
        v_7c_1 = v_7c_1 * x87_r7_6;
    }
    else
    {
        long double x87_r7_2 = v_80_1;
        long double f2_1 = 0f;
        x87_r7_2 - f2_1;

        if (!(*(&((x87_r7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4f67b9;

        long double x87_r7_3 = v_7c_1;
        long double f4_1 = 0f;
        x87_r7_3 - f4_1;

        if (!(*(&((x87_r7_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4f67b9;
    }

    long double x87_r7_9 = 1f;
    long double x87_r6_9 = 0f;
    long double x87_r5_4 = fabsl(v_84_1);
    long double f3_1 = 0.75;
    x87_r5_4 - f3_1;

    if (!(*(&((x87_r5_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_4, f3_1) ? 1 : 0) << 0xa
        | (x87_r5_4 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
    {
        x87_r7_9 = 0f;
        x87_r6_9 = 1f;
    }

    float v_78 = x87_r6_9 * v_7c_1;
    float v_6c_1 = v_78;
    float v_74_1 = -((x87_r7_9 * v_7c_1));
    float v_68_1 = v_74_1;
    float v_70_1 = x87_r7_9 * v_80_1 - x87_r6_9 * v_84_1;
    long double x87_r7_13 = v_78;
    long double f5_1 = 0f;
    x87_r7_13 - f5_1;
    float v_64_1 = v_70_1;

    if (!(*(&((x87_r7_13 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, f5_1) ? 1 : 0) << 0xa
        | (x87_r7_13 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4f68a5:
        long double x87_r7_16 = v_70_1;
        long double x87_r6_15 = v_74_1;
        long double x87_r5_10 = v_78;
        long double x87_r7_18 =
            1.0 / sqrtl(x87_r5_10 * x87_r5_10 + x87_r6_15 * x87_r6_15 + x87_r7_16 * x87_r7_16);
        v_6c_1 = v_78 * x87_r7_18;
        v_68_1 = v_68_1 * x87_r7_18;
        v_64_1 = v_64_1 * x87_r7_18;
    }
    else
    {
        long double x87_r7_14 = v_74_1;
        long double f6_1 = 0f;
        x87_r7_14 - f6_1;

        if (!(*(&((x87_r7_14 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4f68a5;

        long double x87_r7_15 = v_70_1;
        long double f8_1 = 0f;
        x87_r7_15 - f8_1;

        if (!(*(&((x87_r7_15 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, f8_1) ? 1 : 0) << 0xa
                | (x87_r7_15 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4f68a5;
    }

    float v_60_1 = v_68_1 * v_7c_1 - v_64_1 * v_80_1;
    float v_5c_1 = -((v_6c_1 * v_7c_1 - v_64_1 * v_84_1));
    float v_58_1 = v_6c_1 * v_80_1 - v_68_1 * v_84_1;
    float v_54_1 = Sys_AllocateMemory_14(0xa76c90) * a4;
    int32_t objC3;
    long double fp0_2;
    fp0_2 = Sys_AllocateMemory_14(0xa76c90);
    int32_t v_94_1 = objC3;
    float v_28;
    Sys_ReadFileBlock_12(&v_28, a4 * 0.5f - v_54_1, 0f, 3.14159274f - fp0_2 * 6.28318548f);
    int32_t v_4;
    int32_t v_2c_1 = v_4 + 2;
    float v_20;
    float v_14;
    float v_8;
    float v_48_1 = v_20 * v_60_1 + v_14 * v_6c_1 + v_8 * v_84_1;
    float v_3c_1 = v_20 * v_5c_1 + v_14 * v_68_1 + v_8 * v_80_1;
    float v_30_1 = v_20 * v_58_1 + v_14 * v_64_1 + v_8 * v_7c_1;
    long double x87_r7_52 = Sys_AllocateMemory_14(0xa76c90) * 0.25f + 0.75f;
    v_78 = v_48_1;
    float v_74_2 = v_3c_1;
    long double x87_r7_53 = x87_r7_52 * a5;
    long double x87_r6_43 = v_30_1;
    long double x87_r5_12 = v_48_1;
    long double f7_1 = 0f;
    x87_r5_12 - f7_1;

    if (!(*(&((x87_r5_12 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_12, f7_1) ? 1 : 0) << 0xa
        | (x87_r5_12 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_4f6a72:
        long double x87_r6_45 = v_30_1;
        long double x87_r5_15 = v_3c_1;
        long double x87_r4_11 = v_48_1;
        long double x87_r6_47 =
            1.0 / sqrtl(x87_r4_11 * x87_r4_11 + x87_r5_15 * x87_r5_15 + x87_r6_45 * x87_r6_45);
        v_78 = v_48_1 * x87_r6_47;
        v_74_2 = v_3c_1 * x87_r6_47;
        x87_r6_43 = x87_r6_47 * v_30_1;
    }
    else
    {
        long double x87_r5_13 = v_3c_1;
        long double f9_1 = 0f;
        x87_r5_13 - f9_1;

        if (!(*(&((x87_r5_13 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_13, f9_1) ? 1 : 0) << 0xa
                | (x87_r5_13 == f9_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4f6a72;

        long double x87_r5_14 = v_30_1;
        long double f10_1 = 0f;
        x87_r5_14 - f10_1;

        if (!(*(&((x87_r5_14 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_14, f10_1) ? 1 : 0) << 0xa
                | (x87_r5_14 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4f6a72;
    }

    int32_t v_8c_2 = a6;
    v_78 = v_78 * x87_r7_53;
    float v_74_3 = v_74_2 * x87_r7_53;
    float v_70_2 = x87_r6_43 * x87_r7_53;
    Script_ParseEnumInt32_19(a1, a2, &v_78);
}

#include "004F6750-Script_ParseEnumReal32_19.h"
/* 0x004f6750 Script_ParseEnumReal32_19 full linked: callers=1 callees=5 */
void sub_4f6750(void* a1, int32_t* a2, int32_t* a3, float a4, float a5, int32_t a6)

{
    if (*(a1 + 0x2ca8) >= 0x14)
        return;

    float var_84_1 = *a3;
    long double x87_r7_1 = var_84_1;
    long double temp1_1 = 0f;
    x87_r7_1 - temp1_1;
    float var_80_1 = a3[1];
    float var_7c_1 = a3[2];

    if (!(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4f67b9:
        long double x87_r7_4 = var_7c_1;
        long double x87_r6_1 = var_80_1;
        long double x87_r5_1 = var_84_1;
        long double x87_r7_6 =
            1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_4 * x87_r7_4);
        var_84_1 = var_84_1 * x87_r7_6;
        var_80_1 = var_80_1 * x87_r7_6;
        var_7c_1 = var_7c_1 * x87_r7_6;
    }
    else
    {
        long double x87_r7_2 = var_80_1;
        long double temp2_1 = 0f;
        x87_r7_2 - temp2_1;

        if (!(*(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4f67b9;

        long double x87_r7_3 = var_7c_1;
        long double temp4_1 = 0f;
        x87_r7_3 - temp4_1;

        if (!(*(&((x87_r7_3 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4f67b9;
    }

    long double x87_r7_9 = 1f;
    long double x87_r6_9 = 0f;
    long double x87_r5_4 = fabsl(var_84_1);
    long double temp3_1 = 0.75;
    x87_r5_4 - temp3_1;

    if (!(*(&((x87_r5_4 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_4, temp3_1) ? 1 : 0) << 0xa
        | (x87_r5_4 == temp3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
    {
        x87_r7_9 = 0f;
        x87_r6_9 = 1f;
    }

    float var_78 = x87_r6_9 * var_7c_1;
    float var_6c_1 = var_78;
    float var_74_1 = -((x87_r7_9 * var_7c_1));
    float var_68_1 = var_74_1;
    float var_70_1 = x87_r7_9 * var_80_1 - x87_r6_9 * var_84_1;
    long double x87_r7_13 = var_78;
    long double temp5_1 = 0f;
    x87_r7_13 - temp5_1;
    float var_64_1 = var_70_1;

    if (!(*(&((x87_r7_13 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, temp5_1) ? 1 : 0) << 0xa
        | (x87_r7_13 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4f68a5:
        long double x87_r7_16 = var_70_1;
        long double x87_r6_15 = var_74_1;
        long double x87_r5_10 = var_78;
        long double x87_r7_18 =
            1.0 / sqrtl(x87_r5_10 * x87_r5_10 + x87_r6_15 * x87_r6_15 + x87_r7_16 * x87_r7_16);
        var_6c_1 = var_78 * x87_r7_18;
        var_68_1 = var_68_1 * x87_r7_18;
        var_64_1 = var_64_1 * x87_r7_18;
    }
    else
    {
        long double x87_r7_14 = var_74_1;
        long double temp6_1 = 0f;
        x87_r7_14 - temp6_1;

        if (!(*(&((x87_r7_14 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4f68a5;

        long double x87_r7_15 = var_70_1;
        long double temp8_1 = 0f;
        x87_r7_15 - temp8_1;

        if (!(*(&((x87_r7_15 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, temp8_1) ? 1 : 0) << 0xa
                | (x87_r7_15 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4f68a5;
    }

    float var_60_1 = var_68_1 * var_7c_1 - var_64_1 * var_80_1;
    float var_5c_1 = -((var_6c_1 * var_7c_1 - var_64_1 * var_84_1));
    float var_58_1 = var_6c_1 * var_80_1 - var_68_1 * var_84_1;
    float var_54_1 = sub_4b4770(0xa76c90) * a4;
    int32_t ecx_3;
    long double st0_2;
    st0_2 = sub_4b4770(0xa76c90);
    int32_t var_94_1 = ecx_3;
    float var_28;
    sub_4b38e0(&var_28, a4 * 0.5f - var_54_1, 0f, 3.14159274f - st0_2 * 6.28318548f);
    int32_t var_4;
    int32_t var_2c_1 = var_4 + 2;
    float var_20;
    float var_14;
    float var_8;
    float var_48_1 = var_20 * var_60_1 + var_14 * var_6c_1 + var_8 * var_84_1;
    float var_3c_1 = var_20 * var_5c_1 + var_14 * var_68_1 + var_8 * var_80_1;
    float var_30_1 = var_20 * var_58_1 + var_14 * var_64_1 + var_8 * var_7c_1;
    long double x87_r7_52 = sub_4b4770(0xa76c90) * 0.25f + 0.75f;
    var_78 = var_48_1;
    float var_74_2 = var_3c_1;
    long double x87_r7_53 = x87_r7_52 * a5;
    long double x87_r6_43 = var_30_1;
    long double x87_r5_12 = var_48_1;
    long double temp7_1 = 0f;
    x87_r5_12 - temp7_1;

    if (!(*(&((x87_r5_12 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_12, temp7_1) ? 1 : 0) << 0xa
        | (x87_r5_12 == temp7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_4f6a72:
        long double x87_r6_45 = var_30_1;
        long double x87_r5_15 = var_3c_1;
        long double x87_r4_11 = var_48_1;
        long double x87_r6_47 =
            1.0 / sqrtl(x87_r4_11 * x87_r4_11 + x87_r5_15 * x87_r5_15 + x87_r6_45 * x87_r6_45);
        var_78 = var_48_1 * x87_r6_47;
        var_74_2 = var_3c_1 * x87_r6_47;
        x87_r6_43 = x87_r6_47 * var_30_1;
    }
    else
    {
        long double x87_r5_13 = var_3c_1;
        long double temp9_1 = 0f;
        x87_r5_13 - temp9_1;

        if (!(*(&((x87_r5_13 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_13, temp9_1) ? 1 : 0) << 0xa
                | (x87_r5_13 == temp9_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4f6a72;

        long double x87_r5_14 = var_30_1;
        long double temp10_1 = 0f;
        x87_r5_14 - temp10_1;

        if (!(*(&((x87_r5_14 < temp10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_14, temp10_1) ? 1 : 0) << 0xa
                | (x87_r5_14 == temp10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4f6a72;
    }

    int32_t var_8c_2 = a6;
    var_78 = var_78 * x87_r7_53;
    float var_74_3 = var_74_2 * x87_r7_53;
    float var_70_2 = x87_r6_43 * x87_r7_53;
    sub_4f66a0(a1, a2, &var_78);
}

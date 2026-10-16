#include "004FE210-Script_ParseEnumInt32_31.h"
/* 0x004fe210 Script_ParseEnumInt32_31 full linked: callers=3 callees=5 */
int32_t sub_4fe210(void* a1, int32_t a2, int32_t* a3, float a4, float a5, float a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int16_t a11, int32_t a12)

{
    float var_84 = *a3;
    long double x87_r7 = var_84;
    long double temp1 = 0f;
    x87_r7 - temp1;
    float var_80 = a3[1];
    float var_7c = a3[2];

    if (!(*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4fe264:
        long double x87_r7_3 = var_7c;
        long double x87_r6_1 = var_80;
        long double x87_r5_1 = var_84;
        long double x87_r7_5 =
            1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_3 * x87_r7_3);
        var_84 = var_84 * x87_r7_5;
        var_80 = var_80 * x87_r7_5;
        var_7c = var_7c * x87_r7_5;
    }
    else
    {
        long double x87_r7_1 = var_80;
        long double temp2_1 = 0f;
        x87_r7_1 - temp2_1;

        if (!(*(&((x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4fe264;

        long double x87_r7_2 = var_7c;
        long double temp4_1 = 0f;
        x87_r7_2 - temp4_1;

        if (!(*(&((x87_r7_2 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4fe264;
    }

    long double x87_r7_8 = 1f;
    long double x87_r6_9 = 0f;
    long double x87_r5_4 = fabsl(var_84);
    long double temp3 = 0.75;
    x87_r5_4 - temp3;

    if (!(*(&((x87_r5_4 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_4, temp3) ? 1 : 0) << 0xa
        | (x87_r5_4 == temp3 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
    {
        x87_r7_8 = 0f;
        x87_r6_9 = 1f;
    }

    float var_78 = x87_r6_9 * var_7c;
    float var_6c = var_78;
    float var_74 = -((x87_r7_8 * var_7c));
    float var_68 = var_74;
    float var_70 = x87_r7_8 * var_80 - x87_r6_9 * var_84;
    long double x87_r7_12 = var_78;
    long double temp5 = 0f;
    x87_r7_12 - temp5;
    float var_64 = var_70;

    if (!(*(&((x87_r7_12 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, temp5) ? 1 : 0) << 0xa
        | (x87_r7_12 == temp5 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4fe350:
        long double x87_r7_15 = var_70;
        long double x87_r6_15 = var_74;
        long double x87_r5_10 = var_78;
        long double x87_r7_17 =
            1.0 / sqrtl(x87_r5_10 * x87_r5_10 + x87_r6_15 * x87_r6_15 + x87_r7_15 * x87_r7_15);
        var_6c = var_78 * x87_r7_17;
        var_68 = var_68 * x87_r7_17;
        var_64 = var_64 * x87_r7_17;
    }
    else
    {
        long double x87_r7_13 = var_74;
        long double temp6_1 = 0f;
        x87_r7_13 - temp6_1;

        if (!(*(&((x87_r7_13 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_13 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4fe350;

        long double x87_r7_14 = var_70;
        long double temp8_1 = 0f;
        x87_r7_14 - temp8_1;

        if (!(*(&((x87_r7_14 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp8_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4fe350;
    }

    float var_60 = var_68 * var_7c - var_64 * var_80;
    float var_5c = -((var_6c * var_7c - var_64 * var_84));
    float var_58 = var_6c * var_80 - var_68 * var_84;
    float var_54 = sub_4b4770(0xa7a4c0) * a4;
    int32_t ecx_2;
    long double st0_1;
    st0_1 = sub_4b4770(0xa7a4c0);
    int32_t var_90 = ecx_2;
    float var_28;
    sub_4b38e0(&var_28, a4 * 0.5f - var_54, 0f, 3.14159274f - st0_1 * 6.28318548f);
    int32_t var_4;
    int32_t var_2c = var_4 + 2;
    float var_20;
    float var_14;
    float var_8;
    float var_48 = var_20 * var_60 + var_14 * var_6c + var_8 * var_84;
    float var_3c = var_20 * var_5c + var_14 * var_68 + var_8 * var_80;
    float var_30 = var_20 * var_58 + var_14 * var_64 + var_8 * var_7c;
    long double st0_2 = sub_4b4770(0xa7a4c0);
    var_78 = var_48;
    float var_74_1 = var_3c;
    long double x87_r7_51 = st0_2 * (a6 - a5) + a5;
    long double x87_r6_45 = var_30;
    long double x87_r5_12 = var_48;
    long double temp7 = 0f;
    x87_r5_12 - temp7;

    if (!(*(&((x87_r5_12 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_12, temp7) ? 1 : 0) << 0xa
        | (x87_r5_12 == temp7 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_4fe521:
        long double x87_r6_47 = var_30;
        long double x87_r5_15 = var_3c;
        long double x87_r4_11 = var_48;
        long double x87_r6_49 =
            1.0 / sqrtl(x87_r4_11 * x87_r4_11 + x87_r5_15 * x87_r5_15 + x87_r6_47 * x87_r6_47);
        var_78 = var_48 * x87_r6_49;
        var_74_1 = var_3c * x87_r6_49;
        x87_r6_45 = x87_r6_49 * var_30;
    }
    else
    {
        long double x87_r5_13 = var_3c;
        long double temp9_1 = 0f;
        x87_r5_13 - temp9_1;

        if (!(*(&((x87_r5_13 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_13, temp9_1) ? 1 : 0) << 0xa
                | (x87_r5_13 == temp9_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4fe521;

        long double x87_r5_14 = var_30;
        long double temp10_1 = 0f;
        x87_r5_14 - temp10_1;

        if (!(*(&((x87_r5_14 < temp10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_14, temp10_1) ? 1 : 0) << 0xa
                | (x87_r5_14 == temp10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4fe521;
    }

    var_78 = var_78 * x87_r7_51;
    float var_74_2 = var_74_1 * x87_r7_51;
    float var_70_1 = x87_r6_45 * x87_r7_51;
    return sub_4fe120(a1, a2, &var_78, a7, a8, a9, a10, a11, a12);
}

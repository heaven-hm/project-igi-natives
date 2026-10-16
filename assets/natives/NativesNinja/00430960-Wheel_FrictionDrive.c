#include "00430960-Wheel_FrictionDrive.h"
/* 0x00430960 Wheel_FrictionDrive full linked: callers=1 callees=3 */
void* Wheel_FrictionDrive(float* a1, float* a2, float* a3, float* a4, float a5, float a6, float a7)

{
    float var_7c = *a1 * 44.6008873f * a4[2];
    float var_4c = *a2 * *a3 + a3[1] * a2[1] + a3[2] * a2[2];
    long double x87_r7_8 = a2[5] * a3[2];
    long double x87_r6_5 = a2[3] * *a3;
    float var_34 = var_4c;
    float var_30 = x87_r7_8 + x87_r6_5 + a2[4] * a3[1];
    float var_2c = a3[2] * a2[8] + a3[1] * a2[7] + *a3 * a2[6];
    float var_58;
    sub_4ecf80(&var_58, a1, &var_34);
    float var_54;
    float var_50;
    long double x87_r7_18 = var_50 * a4[2] + var_54 * a4[1] + var_58 * *a4;
    long double x87_r7_21 = *a4 * x87_r7_18 - var_58;
    long double x87_r6_23 = a4[1] * x87_r7_18 - var_54;
    long double x87_r5_1 = a4[2] * x87_r7_18 - var_50;
    float var_74 = sqrtl(x87_r7_21 * x87_r7_21 + x87_r6_23 * x87_r6_23 + x87_r5_1 * x87_r5_1);
    long double temp1 = 0f;
    x87_r7_21 - temp1;

    if (!(*(&((x87_r7_21 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, temp1) ? 1 : 0) << 0xa
        | (x87_r7_21 == temp1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
    {
    label_430ac5:
        long double x87_r4_5 = 1.0 / var_74;
        x87_r7_21 = x87_r7_21 * x87_r4_5;
        x87_r6_23 = x87_r6_23 * x87_r4_5;
        x87_r5_1 = x87_r5_1 * x87_r4_5;
    }
    else
    {
        long double temp2_1 = 0f;
        x87_r6_23 - temp2_1;

        if (!(*(&((x87_r6_23 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_23, temp2_1) ? 1 : 0) << 0xa
                | (x87_r6_23 == temp2_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            goto label_430ac5;

        long double temp4_1 = 0f;
        x87_r5_1 - temp4_1;

        if (!(*(&((x87_r5_1 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_1, temp4_1) ? 1 : 0) << 0xa
                | (x87_r5_1 == temp4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            goto label_430ac5;
    }

    float var_64 = x87_r6_23 * a2[3] + x87_r7_21 * *a2 + x87_r5_1 * a2[6];
    float var_60 = x87_r6_23 * a2[4] + x87_r5_1 * a2[7] + x87_r7_21 * a2[1];
    float var_5c = x87_r6_23 * a2[5] + x87_r7_21 * a2[2] + x87_r5_1 * a2[8];
    float var_28;
    sub_4b3be0(&var_28, a5);
    float var_24;
    float var_20;
    var_4c = var_20 * var_5c + var_24 * var_60 + var_28 * var_64;
    float var_70_2 = var_4c;
    float var_10;
    float var_c;
    float var_8;
    float var_44_1 = var_8 * var_5c + var_c * var_60 + var_10 * var_64;
    long double x87_r7_39 = var_4c * a6;
    float var_1c;
    float var_18;
    float var_14;
    long double x87_r6_40 = (var_14 * var_5c + var_18 * var_60 + var_1c * var_64) * a7;
    float var_64_1 = var_10 * var_44_1 + var_1c * x87_r6_40 + var_28 * x87_r7_39;
    float var_70_3 = var_64_1;
    float var_60_1 = var_c * var_44_1 + var_18 * x87_r6_40 + var_24 * x87_r7_39;
    float var_5c_1 = var_8 * var_44_1 + var_14 * x87_r6_40 + var_20 * x87_r7_39;
    long double x87_r7_43 = var_7c * 4f / *a1;
    long double temp3 = var_74;
    x87_r7_43 - temp3;
    long double x87_r7_44 = var_64_1;
    float var_70_4;
    float var_6c_4;
    long double x87_r7_52;

    if (!(*(&((x87_r7_43 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_43, temp3) ? 1 : 0) << 0xa
        | (x87_r7_43 == temp3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        var_70_4 = x87_r7_44 * var_74 * *a1 * 0.100000001f;
        var_6c_4 = var_74 * var_60_1 * *a1 * 0.100000001f;
        x87_r7_52 = var_74 * var_5c_1 * *a1 * 0.100000001f;
    }
    else
    {
        var_70_4 = x87_r7_44 * var_7c * 0.239999995f;
        var_6c_4 = var_60_1 * var_7c * 0.239999995f;
        x87_r7_52 = var_5c_1 * var_7c * 0.239999995f;
    }

    var_4c = var_70_4;
    float var_48_2 = var_6c_4;
    float var_40 = *a3;
    float var_44_2 = x87_r7_52;
    int32_t var_3c = a3[1];
    int32_t var_38 = a3[2];
    return sub_4ecf50(a1, &var_4c);
}

#include "00414A60-WeaponType_SetCategory.h"
/* 0x00414a60 WeaponType_SetCategory full linked: callers=5 callees=0 */
float* WeaponType_SetCategory(float* a1, int32_t* a2)

{
    long double x87_r7 = a2[2];
    long double temp0 = 0f;
    x87_r7 - temp0;
    long double x87_r7_1 = a2[2];

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_1 = -(x87_r7_1);

    long double temp1 = 0.949999988f;
    x87_r7_1 - temp1;
    float var_30;
    float var_2c;
    float var_28;
    float var_24;
    float var_20;
    float var_1c;
    float var_18;
    float var_14_1;
    long double x87_r7_27;

    if (*(&((x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_28 = 0f;
        var_2c = a2[1];
        var_30 = *a2;
        var_28 = a2[2];
        float var_c_1 = var_2c - x87_r7_28;
        var_18 = var_c_1;
        float var_8_1 = -((var_30 - x87_r7_28));
        long double x87_r7_30 = var_c_1;
        long double temp2_1 = 0f;
        x87_r7_30 - temp2_1;
        var_14_1 = var_8_1;

        if (!(*(&((x87_r7_30 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_30, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_30 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_414cbb:
            long double x87_r7_33 = 0f;
            long double x87_r6_30 = var_8_1;
            long double x87_r5_5 = var_c_1;
            long double x87_r7_35 =
                1.0 / sqrtl(x87_r5_5 * x87_r5_5 + x87_r6_30 * x87_r6_30 + x87_r7_33 * x87_r7_33);
            var_18 = var_c_1 * x87_r7_35;
            var_14_1 = var_14_1 * x87_r7_35;
            x87_r7_27 = x87_r7_35 * 0f;
        }
        else
        {
            long double x87_r7_31 = var_8_1;
            long double temp4_1 = 0f;
            x87_r7_31 - temp4_1;

            if (!(*(&((x87_r7_31 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414cbb;

            long double x87_r7_32 = 0f;
            long double temp7_1 = 0f;
            x87_r7_32 - temp7_1;

            if (!(*(&((x87_r7_32 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_32, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_32 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414cbb;

            x87_r7_27 = 0f;
        }

        float var_c_2 = var_28 * var_14_1 - var_2c * x87_r7_27;
        var_24 = var_c_2;
        float var_8_2 = -((var_28 * var_18 - var_30 * x87_r7_27));
        var_20 = var_8_2;
        float var_4_1 = var_2c * var_18 - var_30 * var_14_1;
        long double x87_r6_46 = var_c_2;
        long double temp6_1 = 0f;
        x87_r6_46 - temp6_1;
        var_1c = var_4_1;

        if (!(*(&((x87_r6_46 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_46, temp6_1) ? 1 : 0) << 0xa
            | (x87_r6_46 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_414d8e:
            long double x87_r6_49 = var_4_1;
            long double x87_r5_13 = var_8_2;
            long double x87_r4_16 = var_c_2;
            long double x87_r6_51 =
                1.0 / sqrtl(x87_r4_16 * x87_r4_16 + x87_r5_13 * x87_r5_13 + x87_r6_49 * x87_r6_49);
            var_24 = var_c_2 * x87_r6_51;
            var_20 = var_20 * x87_r6_51;
            var_1c = var_1c * x87_r6_51;
        }
        else
        {
            long double x87_r6_47 = var_8_2;
            long double temp10_1 = 0f;
            x87_r6_47 - temp10_1;

            if (!(*(&((x87_r6_47 < temp10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_47, temp10_1) ? 1 : 0) << 0xa
                    | (x87_r6_47 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_414d8e;

            long double x87_r6_48 = var_4_1;
            long double temp12_1 = 0f;
            x87_r6_48 - temp12_1;

            if (!(*(&((x87_r6_48 < temp12_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_48, temp12_1) ? 1 : 0) << 0xa
                    | (x87_r6_48 == temp12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_414d8e;
        }
    }
    else
    {
        long double x87_r7_2 = 0f;
        var_30 = *a2;
        var_28 = a2[2];
        var_2c = a2[1];
        var_24 = 0f;
        float var_14 = -((var_28 - x87_r7_2));
        var_20 = var_14;
        float var_10_1 = var_2c - x87_r7_2;
        long double x87_r7_4 = 0f;
        long double temp3_1 = 0f;
        x87_r7_4 - temp3_1;
        var_1c = var_10_1;

        if (!(*(&((x87_r7_4 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_414b12:
            long double x87_r7_7 = var_10_1;
            long double x87_r6_5 = var_14;
            long double x87_r5_1 = 0f;
            long double x87_r7_9 =
                1.0 / sqrtl(x87_r6_5 * x87_r6_5 + x87_r7_7 * x87_r7_7 + x87_r5_1 * x87_r5_1);
            var_24 = 0f * x87_r7_9;
            var_20 = var_20 * x87_r7_9;
            var_1c = var_1c * x87_r7_9;
        }
        else
        {
            long double x87_r7_5 = var_14;
            long double temp5_1 = 0f;
            x87_r7_5 - temp5_1;

            if (!(*(&((x87_r7_5 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_5, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414b12;

            long double x87_r7_6 = var_10_1;
            long double temp9_1 = 0f;
            x87_r7_6 - temp9_1;

            if (!(*(&((x87_r7_6 < temp9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_6, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414b12;
        }

        float var_c = var_2c * var_1c - var_28 * var_20;
        var_18 = var_c;
        float var_8 = -((var_30 * var_1c - var_28 * var_24));
        var_14_1 = var_8;
        float var_4 = var_30 * var_20 - var_2c * var_24;
        long double x87_r7_21 = var_c;
        long double temp8_1 = 0f;
        x87_r7_21 - temp8_1;

        if (!(*(&((x87_r7_21 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, temp8_1) ? 1 : 0) << 0xa
            | (x87_r7_21 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_414bef:
            long double x87_r7_24 = var_4;
            long double x87_r6_19 = var_8;
            long double x87_r5_3 = var_c;
            long double x87_r7_26 =
                1.0 / sqrtl(x87_r5_3 * x87_r5_3 + x87_r6_19 * x87_r6_19 + x87_r7_24 * x87_r7_24);
            var_18 = var_c * x87_r7_26;
            var_14_1 = var_14_1 * x87_r7_26;
            x87_r7_27 = x87_r7_26 * var_4;
        }
        else
        {
            long double x87_r7_22 = var_8;
            long double temp11_1 = 0f;
            x87_r7_22 - temp11_1;

            if (!(*(&((x87_r7_22 < temp11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_22, temp11_1) ? 1 : 0) << 0xa
                    | (x87_r7_22 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414bef;

            long double x87_r7_23 = var_4;
            long double temp13_1 = 0f;
            x87_r7_23 - temp13_1;

            if (!(*(&((x87_r7_23 < temp13_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_23, temp13_1) ? 1 : 0) << 0xa
                    | (x87_r7_23 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414bef;

            x87_r7_27 = var_4;
        }
    }

    a1[3] = var_14_1;
    *a1 = var_18;
    a1[1] = var_30;
    a1[6] = x87_r7_27;
    a1[4] = var_2c;
    a1[7] = var_28;
    a1[2] = var_24;
    a1[5] = var_20;
    a1[8] = var_1c;
    return a1;
}

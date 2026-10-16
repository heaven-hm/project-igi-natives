#include "0051A4A0-Terrain_UpdateWaterWaves_10.h"
/* 0x0051a4a0 Terrain_UpdateWaterWaves_10 full linked: callers=1 callees=4 */
float* sub_51a4a0(float a1, float* a2, float a3, float a4)

{
    char var_75;
    float var_74;
    float var_6c;
    sub_4b44d0(&var_75, &var_74, &var_6c, *(a1 + (a3 << 2) + 0x68) + 0x60,
        *(a1 + (a3 << 2) + 0x6c) + 0x60);
    int16_t eax_3;
    eax_3 = var_75;
    float var_50;
    float var_4c;
    float var_48;
    float var_44;

    if (!eax_3)
        memcpy(&var_50, *(a1 + (a3 << 2) + 0x6c) + 0x60, 0x14);
    else
    {
        void* eax_4 = *(a1 + (a3 << 2) + 0x6c);
        var_50 = -(*(eax_4 + 0x60));
        var_4c = -(*(eax_4 + 0x64));
        var_48 = -(*(eax_4 + 0x68));
        var_44 = -(*(eax_4 + 0x6c));
    }

    long double x87_r7_9 = var_74;
    long double temp1 = 0f;
    x87_r7_9 - temp1;
    float var_3c;
    float var_38;
    float var_34;
    long double x87_r7_10;

    if (!(*(&((x87_r7_9 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp1) ? 1 : 0) << 0xa
        | (x87_r7_9 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_11 = var_74;
        long double temp2_1 = 0.00999999978f;
        x87_r7_11 - temp2_1;
        long double x87_r6_1;
        long double x87_r7_13;

        if (!(*(&((x87_r7_11 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            float var_70_1 = var_74 * a4;
            long double st0_1;
            bool c1_1;
            bool c2_2;
            st0_1 = __fsin(var_74 - var_70_1);
            x87_r7_13 = st0_1 * var_6c;
            long double st0_2;
            bool c1_2;
            bool c2_3;
            st0_2 = __fsin(var_70_1);
            x87_r6_1 = st0_2 * var_6c;
        }
        else
        {
            x87_r7_13 = 1f - a4;
            x87_r6_1 = a4;
        }

        void* eax_5 = *(a1 + (a3 << 2) + 0x68);
        var_3c = x87_r7_13 * *(eax_5 + 0x60) + x87_r6_1 * var_50;
        var_38 = x87_r7_13 * *(eax_5 + 0x64) + x87_r6_1 * var_4c;
        var_34 = x87_r7_13 * *(eax_5 + 0x68) + x87_r6_1 * var_48;
        x87_r7_10 = x87_r7_13 * *(eax_5 + 0x6c) + x87_r6_1 * var_44;
    }
    else
    {
        memcpy(&var_3c, *(a1 + (a3 << 2) + 0x68) + 0x60, 0x14);
        float var_30;
        x87_r7_10 = var_30;
    }

    long double x87_r6_9 = x87_r7_10 * var_38;
    long double x87_r5_11 = var_34 * var_3c;
    float var_20 = x87_r6_9 + x87_r6_9 + x87_r5_11 + x87_r5_11;
    long double x87_r6_13 = var_34 * var_38;
    long double x87_r6_16 = x87_r7_10 * var_3c;
    float var_14 = x87_r6_13 + x87_r6_13 - (x87_r6_16 + x87_r6_16);
    long double x87_r7_24 = var_3c * var_3c;
    long double x87_r6_19 = var_38 * var_38;
    float var_8 = 1f - (x87_r7_24 + x87_r7_24) - (x87_r6_19 + x87_r6_19);
    float* eax_6 = sub_51a370(&var_3c, a1, a3, a4);
    long double x87_r7_28 = *eax_6;
    long double temp3 = 0f;
    x87_r7_28 - temp3;
    float var_60 = eax_6[2];
    float var_64 = eax_6[1];

    if (!(*(&((x87_r7_28 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_28, temp3) ? 1 : 0) << 0xa
        | (x87_r7_28 == temp3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_51a696:
        long double x87_r6_23 = var_60;
        long double x87_r5_13 = var_64;
        long double x87_r6_25 =
            1.0 / sqrtl(x87_r7_28 * x87_r7_28 + x87_r5_13 * x87_r5_13 + x87_r6_23 * x87_r6_23);
        x87_r7_28 = x87_r7_28 * x87_r6_25;
        var_64 = var_64 * x87_r6_25;
        var_60 = var_60 * x87_r6_25;
    }
    else
    {
        long double x87_r6_21 = var_64;
        long double temp4_1 = 0f;
        x87_r6_21 - temp4_1;

        if (!(*(&((x87_r6_21 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_21, temp4_1) ? 1 : 0) << 0xa
                | (x87_r6_21 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a696;

        long double x87_r6_22 = var_60;
        long double temp6_1 = 0f;
        x87_r6_22 - temp6_1;

        if (!(*(&((x87_r6_22 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_22, temp6_1) ? 1 : 0) << 0xa
                | (x87_r6_22 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a696;
    }

    var_50 = var_64 * var_8 - var_60 * var_14;
    float var_5c = var_50;
    float var_4c_1 = -((x87_r7_28 * var_8 - var_60 * var_20));
    float var_58 = var_4c_1;
    float var_48_1 = x87_r7_28 * var_14 - var_64 * var_20;
    long double x87_r6_40 = var_50;
    long double temp5 = 0f;
    x87_r6_40 - temp5;
    long double x87_r6_46;

    if (!(*(&((x87_r6_40 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_40, temp5) ? 1 : 0) << 0xa
        | (x87_r6_40 == temp5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_51a765:
        long double x87_r6_43 = var_48_1;
        long double x87_r5_25 = var_4c_1;
        long double x87_r4_9 = var_50;
        long double x87_r6_45 =
            1.0 / sqrtl(x87_r4_9 * x87_r4_9 + x87_r5_25 * x87_r5_25 + x87_r6_43 * x87_r6_43);
        var_5c = var_50 * x87_r6_45;
        var_58 = var_58 * x87_r6_45;
        x87_r6_46 = x87_r6_45 * var_48_1;
    }
    else
    {
        long double x87_r6_41 = var_4c_1;
        long double temp7_1 = 0f;
        x87_r6_41 - temp7_1;

        if (!(*(&((x87_r6_41 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_41, temp7_1) ? 1 : 0) << 0xa
                | (x87_r6_41 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a765;

        long double x87_r6_42 = var_48_1;
        long double temp9_1 = 0f;
        x87_r6_42 - temp9_1;

        if (!(*(&((x87_r6_42 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_42, temp9_1) ? 1 : 0) << 0xa
                | (x87_r6_42 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a765;

        x87_r6_46 = var_48_1;
    }

    var_50 = var_58 * var_60 - x87_r6_46 * var_64;
    var_3c = var_50;
    float var_4c_2 = -((var_5c * var_60 - x87_r6_46 * x87_r7_28));
    float var_38_1 = var_4c_2;
    float var_48_2 = var_5c * var_64 - var_58 * x87_r7_28;
    long double x87_r5_41 = var_50;
    long double temp8 = 0f;
    x87_r5_41 - temp8;
    long double x87_r5_47;

    if (!(*(&((x87_r5_41 < temp8 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_41, temp8) ? 1 : 0) << 0xa
        | (x87_r5_41 == temp8 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_51a834:
        long double x87_r5_44 = var_48_2;
        long double x87_r4_17 = var_4c_2;
        long double x87_r3_11 = var_50;
        long double x87_r5_46 =
            1.0 / sqrtl(x87_r3_11 * x87_r3_11 + x87_r4_17 * x87_r4_17 + x87_r5_44 * x87_r5_44);
        var_3c = var_50 * x87_r5_46;
        var_38_1 = var_38_1 * x87_r5_46;
        x87_r5_47 = x87_r5_46 * var_48_2;
    }
    else
    {
        long double x87_r5_42 = var_4c_2;
        long double temp10_1 = 0f;
        x87_r5_42 - temp10_1;

        if (!(*(&((x87_r5_42 < temp10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_42, temp10_1) ? 1 : 0) << 0xa
                | (x87_r5_42 == temp10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_51a834;

        long double x87_r5_43 = var_48_2;
        long double temp11_1 = 0f;
        x87_r5_43 - temp11_1;

        if (!(*(&((x87_r5_43 < temp11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_43, temp11_1) ? 1 : 0) << 0xa
                | (x87_r5_43 == temp11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_51a834;

        x87_r5_47 = var_48_2;
    }

    float edx_4 = var_64;
    *a2 = var_5c;
    a2[6] = x87_r6_46;
    a2[3] = var_58;
    a2[1] = x87_r7_28;
    a2[4] = edx_4;
    float edx_5 = var_3c;
    a2[8] = x87_r5_47;
    a2[7] = var_60;
    a2[2] = edx_5;
    a2[5] = var_38_1;
    return a2;
}

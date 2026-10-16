#include "004B4010-Sys_ResolveSymbol_12.h"
/* 0x004b4010 Sys_ResolveSymbol_12 full linked: callers=8 callees=2 */
float sub_4b4010(int32_t a1, int32_t* a2) __location("eax")

{
    float ecx = *a2;
    long double x87_r7 = ecx;
    float edx = a2[1];
    long double temp0 = 0f;
    x87_r7 - temp0;
    float eax_1 = a2[2];
    long double x87_r7_1;
    long double temp2_1;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        x87_r7_1 = edx;
        temp2_1 = 0f;
        x87_r7_1 - temp2_1;
    }

    float var_44;
    float var_40;
    int32_t var_3c_2;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&((x87_r7_1 < temp2_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe) + 1)
        & 0x40))
    {
        var_40 = -(ecx);
        long double x87_r7_4 = edx;
        long double temp1_1 = 0f;
        x87_r7_4 - temp1_1;
        int32_t var_3c_1 = 0;
        var_44 = edx;
        long double x87_r7_5;
        long double temp3_1;

        if (*(&((x87_r7_4 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            x87_r7_5 = var_40;
            temp3_1 = 0f;
            x87_r7_5 - temp3_1;
        }

        if (!(*(&((x87_r7_4 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
            (x87_r7_5 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double x87_r7_6 = var_40;
            long double x87_r6_1 = edx;
            long double x87_r7_8 = 1.0 / sqrtl(x87_r6_1 * x87_r6_1 + x87_r7_6 * x87_r7_6);
            var_44 = edx * x87_r7_8;
            var_40 = var_40 * x87_r7_8;
            var_3c_2 = 0;
        }
    }
    else
    {
        var_44 = 0f;
        var_40 = 1f;
        var_3c_2 = 0;
    }
    float var_68 = eax_1 * var_40 - 0f * edx;
    float var_28 = var_68;
    float var_64 = -((eax_1 * var_44 - 0f * ecx));
    float var_24 = var_64;
    float var_60 = var_44 * edx - var_40 * ecx;
    long double x87_r7_20 = var_68;
    long double temp4 = 0f;
    x87_r7_20 - temp4;
    float var_20 = var_60;

    if (!(*(&((x87_r7_20 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, temp4) ? 1 : 0) << 0xa
        | (x87_r7_20 == temp4 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4b4166:
        long double x87_r7_23 = var_60;
        long double x87_r6_13 = var_64;
        long double x87_r5_5 = var_68;
        long double x87_r7_25 =
            1.0 / sqrtl(x87_r5_5 * x87_r5_5 + x87_r6_13 * x87_r6_13 + x87_r7_23 * x87_r7_23);
        var_28 = var_68 * x87_r7_25;
        var_24 = var_24 * x87_r7_25;
        var_20 = var_20 * x87_r7_25;
    }
    else
    {
        long double x87_r7_21 = var_64;
        long double temp5_1 = 0f;
        x87_r7_21 - temp5_1;

        if (!(*(&((x87_r7_21 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_21 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4b4166;

        long double x87_r7_22 = var_60;
        long double temp7_1 = 0f;
        x87_r7_22 - temp7_1;

        if (!(*(&((x87_r7_22 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, temp7_1) ? 1 : 0) << 0xa
                | (x87_r7_22 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4b4166;
    }

    float var_5c = var_60 * edx - var_64 * eax_1;
    float var_1c = var_5c;
    float var_58 = -((var_60 * ecx - var_68 * eax_1));
    float var_54 = var_64 * ecx - var_68 * edx;
    float var_68_1 = var_54 * var_24 - var_58 * var_20;
    float var_10 = var_68_1;
    float result_1 = -((var_54 * var_28 - var_5c * var_20));
    float result = result_1;
    float result_2 = result;
    float var_60_1 = var_58 * var_28 - var_5c * var_24;
    long double x87_r7_47 = var_5c;
    long double temp6 = 0f;
    x87_r7_47 - temp6;
    result = (x87_r7_47 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_47, temp6) ? 1 : 0) << 0xa
        | (x87_r7_47 == temp6 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
    label_4b429b:
        long double x87_r7_50 = var_5c;
        long double x87_r6_33 = var_58;
        long double x87_r5_7 = var_54;
        long double x87_r7_52 =
            1.0 / sqrtl(x87_r5_7 * x87_r5_7 + x87_r6_33 * x87_r6_33 + x87_r7_50 * x87_r7_50);
        float var_1c_1 = var_5c * x87_r7_52;
        float var_18_1 = var_58 * x87_r7_52;
        float var_14_1 = var_54 * x87_r7_52;
    }
    else
    {
        long double x87_r7_48 = var_58;
        long double temp8_1 = 0f;
        x87_r7_48 - temp8_1;
        result = (x87_r7_48 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_48, temp8_1) ? 1 : 0) << 0xa
            | (x87_r7_48 == temp8_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4b429b;

        long double x87_r7_49 = var_54;
        long double temp10_1 = 0f;
        x87_r7_49 - temp10_1;
        result = (x87_r7_49 < temp10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_49, temp10_1) ? 1 : 0) << 0xa
            | (x87_r7_49 == temp10_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4b429b;
    }

    long double x87_r7_54 = var_68_1;
    long double temp9 = 0f;
    x87_r7_54 - temp9;
    result = (x87_r7_54 < temp9 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_54, temp9) ? 1 : 0) << 0xa
        | (x87_r7_54 == temp9 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
    label_4b4318:
        long double x87_r7_57 = var_60_1;
        long double x87_r6_41 = result_1;
        long double x87_r5_9 = var_68_1;
        long double x87_r7_59 =
            1.0 / sqrtl(x87_r5_9 * x87_r5_9 + x87_r6_41 * x87_r6_41 + x87_r7_57 * x87_r7_57);
        float var_10_1 = var_68_1 * x87_r7_59;
        float var_c = result_2 * x87_r7_59;
        float var_8_1 = var_60_1 * x87_r7_59;
    }
    else
    {
        long double x87_r7_55 = result_1;
        long double temp11_1 = 0f;
        x87_r7_55 - temp11_1;
        result = (x87_r7_55 < temp11_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_55, temp11_1) ? 1 : 0) << 0xa
            | (x87_r7_55 == temp11_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4b4318;

        long double x87_r7_56 = var_60_1;
        long double temp12_1 = 0f;
        x87_r7_56 - temp12_1;
        result = (x87_r7_56 < temp12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_56, temp12_1) ? 1 : 0) << 0xa
            | (x87_r7_56 == temp12_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4b4318;
    }

    void var_50;
    memcpy(&var_50, &var_28, 0x28);
    int32_t var_2c = 0;
    memcpy(a1, &var_50, 0x28);
    return result;
}

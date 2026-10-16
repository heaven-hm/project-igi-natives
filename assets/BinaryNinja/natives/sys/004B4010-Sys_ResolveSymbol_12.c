#include "Sys_ResolveSymbol_12.h"
float Sys_ResolveSymbol_12(int32_t a1, int32_t* a2) __location("valA")

{
    float objC = *a2;
    long double fpu7 = objC;
    float tmpD = a2[1];
    long double f0 = 0f;
    fpu7 - f0;
    float valA1 = a2[2];
    long double x87_r7_1;
    long double f2_1;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        x87_r7_1 = tmpD;
        f2_1 = 0f;
        x87_r7_1 - f2_1;
    }

    float v_44;
    float v_40;
    int32_t v_3c_2;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&((x87_r7_1 < f2_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe) + 1)
        & 0x40))
    {
        v_40 = -(objC);
        long double x87_r7_4 = tmpD;
        long double f1_1 = 0f;
        x87_r7_4 - f1_1;
        int32_t v_3c_1 = 0;
        v_44 = tmpD;
        long double x87_r7_5;
        long double f3_1;

        if (*(&((x87_r7_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            x87_r7_5 = v_40;
            f3_1 = 0f;
            x87_r7_5 - f3_1;
        }

        if (!(*(&((x87_r7_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
            (x87_r7_5 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double x87_r7_6 = v_40;
            long double x87_r6_1 = tmpD;
            long double x87_r7_8 = 1.0 / sqrtl(x87_r6_1 * x87_r6_1 + x87_r7_6 * x87_r7_6);
            v_44 = tmpD * x87_r7_8;
            v_40 = v_40 * x87_r7_8;
            v_3c_2 = 0;
        }
    }
    else
    {
        v_44 = 0f;
        v_40 = 1f;
        v_3c_2 = 0;
    }
    float v_68 = valA1 * v_40 - 0f * tmpD;
    float v_28 = v_68;
    float v_64 = -((valA1 * v_44 - 0f * objC));
    float v_24 = v_64;
    float v_60 = v_44 * tmpD - v_40 * objC;
    long double x87_r7_20 = v_68;
    long double f4 = 0f;
    x87_r7_20 - f4;
    float v_20 = v_60;

    if (!(*(&((x87_r7_20 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, f4) ? 1 : 0) << 0xa
        | (x87_r7_20 == f4 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4b4166:
        long double x87_r7_23 = v_60;
        long double x87_r6_13 = v_64;
        long double x87_r5_5 = v_68;
        long double x87_r7_25 =
            1.0 / sqrtl(x87_r5_5 * x87_r5_5 + x87_r6_13 * x87_r6_13 + x87_r7_23 * x87_r7_23);
        v_28 = v_68 * x87_r7_25;
        v_24 = v_24 * x87_r7_25;
        v_20 = v_20 * x87_r7_25;
    }
    else
    {
        long double x87_r7_21 = v_64;
        long double f5_1 = 0f;
        x87_r7_21 - f5_1;

        if (!(*(&((x87_r7_21 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_21 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4b4166;

        long double x87_r7_22 = v_60;
        long double f7_1 = 0f;
        x87_r7_22 - f7_1;

        if (!(*(&((x87_r7_22 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, f7_1) ? 1 : 0) << 0xa
                | (x87_r7_22 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4b4166;
    }

    float v_5c = v_60 * tmpD - v_64 * valA1;
    float v_1c = v_5c;
    float v_58 = -((v_60 * objC - v_68 * valA1));
    float v_54 = v_64 * objC - v_68 * tmpD;
    float v_68_1 = v_54 * v_24 - v_58 * v_20;
    float v_10 = v_68_1;
    float result_1 = -((v_54 * v_28 - v_5c * v_20));
    float result = result_1;
    float result_2 = result;
    float v_60_1 = v_58 * v_28 - v_5c * v_24;
    long double x87_r7_47 = v_5c;
    long double f6 = 0f;
    x87_r7_47 - f6;
    result = (x87_r7_47 < f6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_47, f6) ? 1 : 0) << 0xa
        | (x87_r7_47 == f6 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
    label_4b429b:
        long double x87_r7_50 = v_5c;
        long double x87_r6_33 = v_58;
        long double x87_r5_7 = v_54;
        long double x87_r7_52 =
            1.0 / sqrtl(x87_r5_7 * x87_r5_7 + x87_r6_33 * x87_r6_33 + x87_r7_50 * x87_r7_50);
        float v_1c_1 = v_5c * x87_r7_52;
        float v_18_1 = v_58 * x87_r7_52;
        float v_14_1 = v_54 * x87_r7_52;
    }
    else
    {
        long double x87_r7_48 = v_58;
        long double f8_1 = 0f;
        x87_r7_48 - f8_1;
        result = (x87_r7_48 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_48, f8_1) ? 1 : 0) << 0xa
            | (x87_r7_48 == f8_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4b429b;

        long double x87_r7_49 = v_54;
        long double f10_1 = 0f;
        x87_r7_49 - f10_1;
        result = (x87_r7_49 < f10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_49, f10_1) ? 1 : 0) << 0xa
            | (x87_r7_49 == f10_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4b429b;
    }

    long double x87_r7_54 = v_68_1;
    long double f9 = 0f;
    x87_r7_54 - f9;
    result = (x87_r7_54 < f9 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_54, f9) ? 1 : 0) << 0xa
        | (x87_r7_54 == f9 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
    label_4b4318:
        long double x87_r7_57 = v_60_1;
        long double x87_r6_41 = result_1;
        long double x87_r5_9 = v_68_1;
        long double x87_r7_59 =
            1.0 / sqrtl(x87_r5_9 * x87_r5_9 + x87_r6_41 * x87_r6_41 + x87_r7_57 * x87_r7_57);
        float v_10_1 = v_68_1 * x87_r7_59;
        float v_c = result_2 * x87_r7_59;
        float v_8_1 = v_60_1 * x87_r7_59;
    }
    else
    {
        long double x87_r7_55 = result_1;
        long double f11_1 = 0f;
        x87_r7_55 - f11_1;
        result = (x87_r7_55 < f11_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_55, f11_1) ? 1 : 0) << 0xa
            | (x87_r7_55 == f11_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4b4318;

        long double x87_r7_56 = v_60_1;
        long double f12_1 = 0f;
        x87_r7_56 - f12_1;
        result = (x87_r7_56 < f12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_56, f12_1) ? 1 : 0) << 0xa
            | (x87_r7_56 == f12_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4b4318;
    }

    void v_50;
    memcpy(&v_50, &v_28, 0x28);
    int32_t v_2c = 0;
    memcpy(a1, &v_50, 0x28);
    return result;
}

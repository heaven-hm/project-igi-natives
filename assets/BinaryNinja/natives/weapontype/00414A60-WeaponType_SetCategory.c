#include "WeaponType_SetCategory.h"
float* WeaponType_SetCategory(float* a1, int32_t* a2)

{
    long double fpu7 = a2[2];
    long double f0 = 0f;
    fpu7 - f0;
    long double x87_r7_1 = a2[2];

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_1 = -(x87_r7_1);

    long double f1 = 0.949999988f;
    x87_r7_1 - f1;
    float v_30;
    float v_2c;
    float v_28;
    float v_24;
    float v_20;
    float v_1c;
    float v_18;
    float v_14_1;
    long double x87_r7_27;

    if (*(&((x87_r7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1) ? 1 : 0) << 0xa
        | (x87_r7_1 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_28 = 0f;
        v_2c = a2[1];
        v_30 = *a2;
        v_28 = a2[2];
        float v_c_1 = v_2c - x87_r7_28;
        v_18 = v_c_1;
        float v_8_1 = -((v_30 - x87_r7_28));
        long double x87_r7_30 = v_c_1;
        long double f2_1 = 0f;
        x87_r7_30 - f2_1;
        v_14_1 = v_8_1;

        if (!(*(&((x87_r7_30 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_30, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_30 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_414cbb:
            long double x87_r7_33 = 0f;
            long double x87_r6_30 = v_8_1;
            long double x87_r5_5 = v_c_1;
            long double x87_r7_35 =
                1.0 / sqrtl(x87_r5_5 * x87_r5_5 + x87_r6_30 * x87_r6_30 + x87_r7_33 * x87_r7_33);
            v_18 = v_c_1 * x87_r7_35;
            v_14_1 = v_14_1 * x87_r7_35;
            x87_r7_27 = x87_r7_35 * 0f;
        }
        else
        {
            long double x87_r7_31 = v_8_1;
            long double f4_1 = 0f;
            x87_r7_31 - f4_1;

            if (!(*(&((x87_r7_31 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414cbb;

            long double x87_r7_32 = 0f;
            long double f7_1 = 0f;
            x87_r7_32 - f7_1;

            if (!(*(&((x87_r7_32 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_32, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_32 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414cbb;

            x87_r7_27 = 0f;
        }

        float v_c_2 = v_28 * v_14_1 - v_2c * x87_r7_27;
        v_24 = v_c_2;
        float v_8_2 = -((v_28 * v_18 - v_30 * x87_r7_27));
        v_20 = v_8_2;
        float v_4_1 = v_2c * v_18 - v_30 * v_14_1;
        long double x87_r6_46 = v_c_2;
        long double f6_1 = 0f;
        x87_r6_46 - f6_1;
        v_1c = v_4_1;

        if (!(*(&((x87_r6_46 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_46, f6_1) ? 1 : 0) << 0xa
            | (x87_r6_46 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_414d8e:
            long double x87_r6_49 = v_4_1;
            long double x87_r5_13 = v_8_2;
            long double x87_r4_16 = v_c_2;
            long double x87_r6_51 =
                1.0 / sqrtl(x87_r4_16 * x87_r4_16 + x87_r5_13 * x87_r5_13 + x87_r6_49 * x87_r6_49);
            v_24 = v_c_2 * x87_r6_51;
            v_20 = v_20 * x87_r6_51;
            v_1c = v_1c * x87_r6_51;
        }
        else
        {
            long double x87_r6_47 = v_8_2;
            long double f10_1 = 0f;
            x87_r6_47 - f10_1;

            if (!(*(&((x87_r6_47 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_47, f10_1) ? 1 : 0) << 0xa
                    | (x87_r6_47 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_414d8e;

            long double x87_r6_48 = v_4_1;
            long double f12_1 = 0f;
            x87_r6_48 - f12_1;

            if (!(*(&((x87_r6_48 < f12_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_48, f12_1) ? 1 : 0) << 0xa
                    | (x87_r6_48 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_414d8e;
        }
    }
    else
    {
        long double x87_r7_2 = 0f;
        v_30 = *a2;
        v_28 = a2[2];
        v_2c = a2[1];
        v_24 = 0f;
        float v_14 = -((v_28 - x87_r7_2));
        v_20 = v_14;
        float v_10_1 = v_2c - x87_r7_2;
        long double x87_r7_4 = 0f;
        long double f3_1 = 0f;
        x87_r7_4 - f3_1;
        v_1c = v_10_1;

        if (!(*(&((x87_r7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_414b12:
            long double x87_r7_7 = v_10_1;
            long double x87_r6_5 = v_14;
            long double x87_r5_1 = 0f;
            long double x87_r7_9 =
                1.0 / sqrtl(x87_r6_5 * x87_r6_5 + x87_r7_7 * x87_r7_7 + x87_r5_1 * x87_r5_1);
            v_24 = 0f * x87_r7_9;
            v_20 = v_20 * x87_r7_9;
            v_1c = v_1c * x87_r7_9;
        }
        else
        {
            long double x87_r7_5 = v_14;
            long double f5_1 = 0f;
            x87_r7_5 - f5_1;

            if (!(*(&((x87_r7_5 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_5, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414b12;

            long double x87_r7_6 = v_10_1;
            long double f9_1 = 0f;
            x87_r7_6 - f9_1;

            if (!(*(&((x87_r7_6 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_6, f9_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414b12;
        }

        float v_c = v_2c * v_1c - v_28 * v_20;
        v_18 = v_c;
        float v_8 = -((v_30 * v_1c - v_28 * v_24));
        v_14_1 = v_8;
        float v_4 = v_30 * v_20 - v_2c * v_24;
        long double x87_r7_21 = v_c;
        long double f8_1 = 0f;
        x87_r7_21 - f8_1;

        if (!(*(&((x87_r7_21 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, f8_1) ? 1 : 0) << 0xa
            | (x87_r7_21 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_414bef:
            long double x87_r7_24 = v_4;
            long double x87_r6_19 = v_8;
            long double x87_r5_3 = v_c;
            long double x87_r7_26 =
                1.0 / sqrtl(x87_r5_3 * x87_r5_3 + x87_r6_19 * x87_r6_19 + x87_r7_24 * x87_r7_24);
            v_18 = v_c * x87_r7_26;
            v_14_1 = v_14_1 * x87_r7_26;
            x87_r7_27 = x87_r7_26 * v_4;
        }
        else
        {
            long double x87_r7_22 = v_8;
            long double f11_1 = 0f;
            x87_r7_22 - f11_1;

            if (!(*(&((x87_r7_22 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_22, f11_1) ? 1 : 0) << 0xa
                    | (x87_r7_22 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414bef;

            long double x87_r7_23 = v_4;
            long double f13_1 = 0f;
            x87_r7_23 - f13_1;

            if (!(*(&((x87_r7_23 < f13_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_23, f13_1) ? 1 : 0) << 0xa
                    | (x87_r7_23 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414bef;

            x87_r7_27 = v_4;
        }
    }

    a1[3] = v_14_1;
    *a1 = v_18;
    a1[1] = v_30;
    a1[6] = x87_r7_27;
    a1[4] = v_2c;
    a1[7] = v_28;
    a1[2] = v_24;
    a1[5] = v_20;
    a1[8] = v_1c;
    return a1;
}

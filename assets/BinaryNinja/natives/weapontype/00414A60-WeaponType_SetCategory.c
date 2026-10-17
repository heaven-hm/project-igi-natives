// IGI native provenance: WeaponType_SetCategory - 0x00414A60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00414A60-WeaponType_SetCategory.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponType_SetCategory.h"
float* WeaponType_SetCategory(float* context, int32_t* param_2)

{
    long double fpu7 = param_2[2];
    long double f0 = 0.0f;
    fpu7 - f0;
    long double fpu_val_7_1 = param_2[2];

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        fpu_val_7_1 = -(fpu_val_7_1);

    long double f1 = 0.949999988f;
    fpu_val_7_1 - f1;
    float item_30;
    float item_2c;
    float item_28;
    float item_24;
    float item_20;
    float item_1c;
    float item_18;
    float item_14_1;
    long double fpu_val_7_27;

    if (*(&((fpu_val_7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double fpu_val_7_28 = 0.0f;
        item_2c = param_2[1];
        item_30 = *param_2;
        item_28 = param_2[2];
        float item_c_1 = item_2c - fpu_val_7_28;
        item_18 = item_c_1;
        float item_8_1 = -((item_30 - fpu_val_7_28));
        long double fpu_val_7_30 = item_c_1;
        long double f2_1 = 0.0f;
        fpu_val_7_30 - f2_1;
        item_14_1 = item_8_1;

        if (!(*(&((fpu_val_7_30 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_30, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_30 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_414cbb:
            long double fpu_val_7_33 = 0.0f;
            long double fpu_val_6_30 = item_8_1;
            long double fpu_val_5_5 = item_c_1;
            long double fpu_val_7_35 =
                1.0 / sqrtl(fpu_val_5_5 * fpu_val_5_5 + fpu_val_6_30 * fpu_val_6_30 + fpu_val_7_33 * fpu_val_7_33);
            item_18 = item_c_1 * fpu_val_7_35;
            item_14_1 = item_14_1 * fpu_val_7_35;
            fpu_val_7_27 = fpu_val_7_35 * 0.0f;
        }
        else
        {
            long double fpu_val_7_31 = item_8_1;
            long double f4_1 = 0.0f;
            fpu_val_7_31 - f4_1;

            if (!(*(&((fpu_val_7_31 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_31, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_31 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414cbb;

            long double fpu_val_7_32 = 0.0f;
            long double f7_1 = 0.0f;
            fpu_val_7_32 - f7_1;

            if (!(*(&((fpu_val_7_32 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_32, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_32 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414cbb;

            fpu_val_7_27 = 0.0f;
        }

        float item_c_2 = item_28 * item_14_1 - item_2c * fpu_val_7_27;
        item_24 = item_c_2;
        float item_8_2 = -((item_28 * item_18 - item_30 * fpu_val_7_27));
        item_20 = item_8_2;
        float item_4_1 = item_2c * item_18 - item_30 * item_14_1;
        long double fpu_val_6_46 = item_c_2;
        long double f6_1 = 0.0f;
        fpu_val_6_46 - f6_1;
        item_1c = item_4_1;

        if (!(*(&((fpu_val_6_46 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_46, f6_1) ? 1 : 0) << 0xa
            | (fpu_val_6_46 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_414d8e:
            long double fpu_val_6_49 = item_4_1;
            long double fpu_val_5_13 = item_8_2;
            long double fpu_val_4_16 = item_c_2;
            long double fpu_val_6_51 =
                1.0 / sqrtl(fpu_val_4_16 * fpu_val_4_16 + fpu_val_5_13 * fpu_val_5_13 + fpu_val_6_49 * fpu_val_6_49);
            item_24 = item_c_2 * fpu_val_6_51;
            item_20 = item_20 * fpu_val_6_51;
            item_1c = item_1c * fpu_val_6_51;
        }
        else
        {
            long double fpu_val_6_47 = item_8_2;
            long double f10_1 = 0.0f;
            fpu_val_6_47 - f10_1;

            if (!(*(&((fpu_val_6_47 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_47, f10_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_47 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_414d8e;

            long double fpu_val_6_48 = item_4_1;
            long double f12_1 = 0.0f;
            fpu_val_6_48 - f12_1;

            if (!(*(&((fpu_val_6_48 < f12_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_48, f12_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_48 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_414d8e;
        }
    }
    else
    {
        long double fpu_val_7_2 = 0.0f;
        item_30 = *param_2;
        item_28 = param_2[2];
        item_2c = param_2[1];
        item_24 = 0.0f;
        float item_14 = -((item_28 - fpu_val_7_2));
        item_20 = item_14;
        float item_10_1 = item_2c - fpu_val_7_2;
        long double fpu_val_7_4 = 0.0f;
        long double f3_1 = 0.0f;
        fpu_val_7_4 - f3_1;
        item_1c = item_10_1;

        if (!(*(&((fpu_val_7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_414b12:
            long double fpu_val_7_7 = item_10_1;
            long double fpu_val_6_5 = item_14;
            long double fpu_val_5_1 = 0.0f;
            long double fpu_val_7_9 =
                1.0 / sqrtl(fpu_val_6_5 * fpu_val_6_5 + fpu_val_7_7 * fpu_val_7_7 + fpu_val_5_1 * fpu_val_5_1);
            item_24 = 0.0f * fpu_val_7_9;
            item_20 = item_20 * fpu_val_7_9;
            item_1c = item_1c * fpu_val_7_9;
        }
        else
        {
            long double fpu_val_7_5 = item_14;
            long double f5_1 = 0.0f;
            fpu_val_7_5 - f5_1;

            if (!(*(&((fpu_val_7_5 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_5, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_5 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414b12;

            long double fpu_val_7_6 = item_10_1;
            long double f9_1 = 0.0f;
            fpu_val_7_6 - f9_1;

            if (!(*(&((fpu_val_7_6 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_6, f9_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_6 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414b12;
        }

        float item_c = item_2c * item_1c - item_28 * item_20;
        item_18 = item_c;
        float item_8 = -((item_30 * item_1c - item_28 * item_24));
        item_14_1 = item_8;
        float item_4 = item_30 * item_20 - item_2c * item_24;
        long double fpu_val_7_21 = item_c;
        long double f8_1 = 0.0f;
        fpu_val_7_21 - f8_1;

        if (!(*(&((fpu_val_7_21 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_21, f8_1) ? 1 : 0) << 0xa
            | (fpu_val_7_21 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_414bef:
            long double fpu_val_7_24 = item_4;
            long double fpu_val_6_19 = item_8;
            long double fpu_val_5_3 = item_c;
            long double fpu_val_7_26 =
                1.0 / sqrtl(fpu_val_5_3 * fpu_val_5_3 + fpu_val_6_19 * fpu_val_6_19 + fpu_val_7_24 * fpu_val_7_24);
            item_18 = item_c * fpu_val_7_26;
            item_14_1 = item_14_1 * fpu_val_7_26;
            fpu_val_7_27 = fpu_val_7_26 * item_4;
        }
        else
        {
            long double fpu_val_7_22 = item_8;
            long double f11_1 = 0.0f;
            fpu_val_7_22 - f11_1;

            if (!(*(&((fpu_val_7_22 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_22, f11_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_22 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414bef;

            long double fpu_val_7_23 = item_4;
            long double f13_1 = 0.0f;
            fpu_val_7_23 - f13_1;

            if (!(*(&((fpu_val_7_23 < f13_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_23, f13_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_23 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_414bef;

            fpu_val_7_27 = item_4;
        }
    }

    context[3] = item_14_1;
    *context = item_18;
    context[1] = item_30;
    context[6] = fpu_val_7_27;
    context[4] = item_2c;
    context[7] = item_28;
    context[2] = item_24;
    context[5] = item_20;
    context[8] = item_1c;
    return context;
}

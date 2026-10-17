// IGI native provenance: Sys_ResolveSymbol_12 - 0x004B4010 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B4010-Sys_ResolveSymbol_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_12.h"
float Sys_ResolveSymbol_12(int32_t context, int32_t* param_2) {
    float entity_val = *param_2;
    long double fpu7 = entity_val;
    float temp_val = param_2[1];
    long double f0 = 0.0f;
    fpu7 - f0;
    float data_1 = param_2[2];
    long double fpu_val_7_1;
    long double f2_1;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        fpu_val_7_1 = temp_val;
        f2_1 = 0.0f;
        fpu_val_7_1 - f2_1;
    }

    float item_44;
    float item_40;
    int32_t item_3c_2;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&((fpu_val_7_1 < f2_1 ? 1 : 0) << 8
        | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe) + 1)
        & 0x40))
    {
        item_40 = -(entity_val);
        long double fpu_val_7_4 = temp_val;
        long double f1_1 = 0.0f;
        fpu_val_7_4 - f1_1;
        int32_t item_3c_1 = 0;
        item_44 = temp_val;
        long double fpu_val_7_5;
        long double f3_1;

        if (*(&((fpu_val_7_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            fpu_val_7_5 = item_40;
            f3_1 = 0.0f;
            fpu_val_7_5 - f3_1;
        }

        if (!(*(&((fpu_val_7_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
            (fpu_val_7_5 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double fpu_val_7_6 = item_40;
            long double fpu_val_6_1 = temp_val;
            long double fpu_val_7_8 = 1.0 / sqrtl(fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_6 * fpu_val_7_6);
            item_44 = temp_val * fpu_val_7_8;
            item_40 = item_40 * fpu_val_7_8;
            item_3c_2 = 0;
        }
    }
    else
    {
        item_44 = 0.0f;
        item_40 = 1.0f;
        item_3c_2 = 0;
    }
    float item_68 = data_1 * item_40 - 0.0f * temp_val;
    float item_28 = item_68;
    float item_64 = -((data_1 * item_44 - 0.0f * entity_val));
    float item_24 = item_64;
    float item_60 = item_44 * temp_val - item_40 * entity_val;
    long double fpu_val_7_20 = item_68;
    long double f4 = 0.0f;
    fpu_val_7_20 - f4;
    float item_20 = item_60;

    if (!(*(&((fpu_val_7_20 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_20, f4) ? 1 : 0) << 0xa
        | (fpu_val_7_20 == f4 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4b4166:
        long double fpu_val_7_23 = item_60;
        long double fpu_val_6_13 = item_64;
        long double fpu_val_5_5 = item_68;
        long double fpu_val_7_25 =
            1.0 / sqrtl(fpu_val_5_5 * fpu_val_5_5 + fpu_val_6_13 * fpu_val_6_13 + fpu_val_7_23 * fpu_val_7_23);
        item_28 = item_68 * fpu_val_7_25;
        item_24 = item_24 * fpu_val_7_25;
        item_20 = item_20 * fpu_val_7_25;
    }
    else
    {
        long double fpu_val_7_21 = item_64;
        long double f5_1 = 0.0f;
        fpu_val_7_21 - f5_1;

        if (!(*(&((fpu_val_7_21 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_21, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_7_21 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4b4166;

        long double fpu_val_7_22 = item_60;
        long double f7_1 = 0.0f;
        fpu_val_7_22 - f7_1;

        if (!(*(&((fpu_val_7_22 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_22, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_7_22 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4b4166;
    }

    float item_5c = item_60 * temp_val - item_64 * data_1;
    float item_1c = item_5c;
    float item_58 = -((item_60 * entity_val - item_68 * data_1));
    float item_54 = item_64 * entity_val - item_68 * temp_val;
    float item_68_1 = item_54 * item_24 - item_58 * item_20;
    float item_10 = item_68_1;
    float result_1 = -((item_54 * item_28 - item_5c * item_20));
    float result = result_1;
    float result_2 = result;
    float item_60_1 = item_58 * item_28 - item_5c * item_24;
    long double fpu_val_7_47 = item_5c;
    long double f6 = 0.0f;
    fpu_val_7_47 - f6;
    result = (fpu_val_7_47 < f6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_47, f6) ? 1 : 0) << 0xa
        | (fpu_val_7_47 == f6 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
    label_4b429b:
        long double fpu_val_7_50 = item_5c;
        long double fpu_val_6_33 = item_58;
        long double fpu_val_5_7 = item_54;
        long double fpu_val_7_52 =
            1.0 / sqrtl(fpu_val_5_7 * fpu_val_5_7 + fpu_val_6_33 * fpu_val_6_33 + fpu_val_7_50 * fpu_val_7_50);
        float item_1c_1 = item_5c * fpu_val_7_52;
        float item_18_1 = item_58 * fpu_val_7_52;
        float item_14_1 = item_54 * fpu_val_7_52;
    }
    else
    {
        long double fpu_val_7_48 = item_58;
        long double f8_1 = 0.0f;
        fpu_val_7_48 - f8_1;
        result = (fpu_val_7_48 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_48, f8_1) ? 1 : 0) << 0xa
            | (fpu_val_7_48 == f8_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4b429b;

        long double fpu_val_7_49 = item_54;
        long double f10_1 = 0.0f;
        fpu_val_7_49 - f10_1;
        result = (fpu_val_7_49 < f10_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_49, f10_1) ? 1 : 0) << 0xa
            | (fpu_val_7_49 == f10_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4b429b;
    }

    long double fpu_val_7_54 = item_68_1;
    long double f9 = 0.0f;
    fpu_val_7_54 - f9;
    result = (fpu_val_7_54 < f9 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_54, f9) ? 1 : 0) << 0xa
        | (fpu_val_7_54 == f9 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
    label_4b4318:
        long double fpu_val_7_57 = item_60_1;
        long double fpu_val_6_41 = result_1;
        long double fpu_val_5_9 = item_68_1;
        long double fpu_val_7_59 =
            1.0 / sqrtl(fpu_val_5_9 * fpu_val_5_9 + fpu_val_6_41 * fpu_val_6_41 + fpu_val_7_57 * fpu_val_7_57);
        float item_10_1 = item_68_1 * fpu_val_7_59;
        float item_c = result_2 * fpu_val_7_59;
        float item_8_1 = item_60_1 * fpu_val_7_59;
    }
    else
    {
        long double fpu_val_7_55 = result_1;
        long double f11_1 = 0.0f;
        fpu_val_7_55 - f11_1;
        result = (fpu_val_7_55 < f11_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_55, f11_1) ? 1 : 0) << 0xa
            | (fpu_val_7_55 == f11_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4b4318;

        long double fpu_val_7_56 = item_60_1;
        long double f12_1 = 0.0f;
        fpu_val_7_56 - f12_1;
        result = (fpu_val_7_56 < f12_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_56, f12_1) ? 1 : 0) << 0xa
            | (fpu_val_7_56 == f12_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4b4318;
    }

    void item_50;
    memcpy(&item_50, &item_28, 0x28);
    int32_t item_2c = 0;
    memcpy(context, &item_50, 0x28);
    return result;
}

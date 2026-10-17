// IGI native provenance: Script_ParseEnumReal32_19 - 0x004F6750 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F6750-Script_ParseEnumReal32_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumReal32_19.h"
void Script_ParseEnumReal32_19(void* context, int32_t* param_2, int32_t* param_3, float param_4, float param_5, int32_t param_6)

{
    if (*(context + 0x2ca8) >= 0x14)
        return;

    float item_84_1 = *param_3;
    long double fpu_val_7_1 = item_84_1;
    long double f1_1 = 0.0f;
    fpu_val_7_1 - f1_1;
    float item_80_1 = param_3[1];
    float item_7c_1 = param_3[2];

    if (!(*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4f67b9:
        long double fpu_val_7_4 = item_7c_1;
        long double fpu_val_6_1 = item_80_1;
        long double fpu_val_5_1 = item_84_1;
        long double fpu_val_7_6 =
            1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_4 * fpu_val_7_4);
        item_84_1 = item_84_1 * fpu_val_7_6;
        item_80_1 = item_80_1 * fpu_val_7_6;
        item_7c_1 = item_7c_1 * fpu_val_7_6;
    }
    else
    {
        long double fpu_val_7_2 = item_80_1;
        long double f2_1 = 0.0f;
        fpu_val_7_2 - f2_1;

        if (!(*(&((fpu_val_7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4f67b9;

        long double fpu_val_7_3 = item_7c_1;
        long double f4_1 = 0.0f;
        fpu_val_7_3 - f4_1;

        if (!(*(&((fpu_val_7_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_3 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4f67b9;
    }

    long double fpu_val_7_9 = 1.0f;
    long double fpu_val_6_9 = 0.0f;
    long double fpu_val_5_4 = fabsl(item_84_1);
    long double f3_1 = 0.75;
    fpu_val_5_4 - f3_1;

    if (!(*(&((fpu_val_5_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_4, f3_1) ? 1 : 0) << 0xa
        | (fpu_val_5_4 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
    {
        fpu_val_7_9 = 0.0f;
        fpu_val_6_9 = 1.0f;
    }

    float item_78 = fpu_val_6_9 * item_7c_1;
    float item_6c_1 = item_78;
    float item_74_1 = -((fpu_val_7_9 * item_7c_1));
    float item_68_1 = item_74_1;
    float item_70_1 = fpu_val_7_9 * item_80_1 - fpu_val_6_9 * item_84_1;
    long double fpu_val_7_13 = item_78;
    long double f5_1 = 0.0f;
    fpu_val_7_13 - f5_1;
    float item_64_1 = item_70_1;

    if (!(*(&((fpu_val_7_13 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_13, f5_1) ? 1 : 0) << 0xa
        | (fpu_val_7_13 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4f68a5:
        long double fpu_val_7_16 = item_70_1;
        long double fpu_val_6_15 = item_74_1;
        long double fpu_val_5_10 = item_78;
        long double fpu_val_7_18 =
            1.0 / sqrtl(fpu_val_5_10 * fpu_val_5_10 + fpu_val_6_15 * fpu_val_6_15 + fpu_val_7_16 * fpu_val_7_16);
        item_6c_1 = item_78 * fpu_val_7_18;
        item_68_1 = item_68_1 * fpu_val_7_18;
        item_64_1 = item_64_1 * fpu_val_7_18;
    }
    else
    {
        long double fpu_val_7_14 = item_74_1;
        long double f6_1 = 0.0f;
        fpu_val_7_14 - f6_1;

        if (!(*(&((fpu_val_7_14 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_14, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_7_14 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4f68a5;

        long double fpu_val_7_15 = item_70_1;
        long double f8_1 = 0.0f;
        fpu_val_7_15 - f8_1;

        if (!(*(&((fpu_val_7_15 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_15, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_7_15 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4f68a5;
    }

    float item_60_1 = item_68_1 * item_7c_1 - item_64_1 * item_80_1;
    float item_5c_1 = -((item_6c_1 * item_7c_1 - item_64_1 * item_84_1));
    float item_58_1 = item_6c_1 * item_80_1 - item_68_1 * item_84_1;
    float item_54_1 = Sys_AllocateMemory_14(0xa76c90) * param_4;
    int32_t entity_3;
    long double fp0_2;
    fp0_2 = Sys_AllocateMemory_14(0xa76c90);
    int32_t item_94_1 = entity_3;
    float item_28;
    Sys_ReadFileBlock_12(&item_28, param_4 * 0.5f - item_54_1, 0.0f, 3.14159274f - fp0_2 * 6.28318548f);
    int32_t item_4;
    int32_t item_2c_1 = item_4 + 2;
    float item_20;
    float item_14;
    float item_8;
    float item_48_1 = item_20 * item_60_1 + item_14 * item_6c_1 + item_8 * item_84_1;
    float item_3c_1 = item_20 * item_5c_1 + item_14 * item_68_1 + item_8 * item_80_1;
    float item_30_1 = item_20 * item_58_1 + item_14 * item_64_1 + item_8 * item_7c_1;
    long double fpu_val_7_52 = Sys_AllocateMemory_14(0xa76c90) * 0.25f + 0.75f;
    item_78 = item_48_1;
    float item_74_2 = item_3c_1;
    long double fpu_val_7_53 = fpu_val_7_52 * param_5;
    long double fpu_val_6_43 = item_30_1;
    long double fpu_val_5_12 = item_48_1;
    long double f7_1 = 0.0f;
    fpu_val_5_12 - f7_1;

    if (!(*(&((fpu_val_5_12 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_12, f7_1) ? 1 : 0) << 0xa
        | (fpu_val_5_12 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_4f6a72:
        long double fpu_val_6_45 = item_30_1;
        long double fpu_val_5_15 = item_3c_1;
        long double fpu_val_4_11 = item_48_1;
        long double fpu_val_6_47 =
            1.0 / sqrtl(fpu_val_4_11 * fpu_val_4_11 + fpu_val_5_15 * fpu_val_5_15 + fpu_val_6_45 * fpu_val_6_45);
        item_78 = item_48_1 * fpu_val_6_47;
        item_74_2 = item_3c_1 * fpu_val_6_47;
        fpu_val_6_43 = fpu_val_6_47 * item_30_1;
    }
    else
    {
        long double fpu_val_5_13 = item_3c_1;
        long double f9_1 = 0.0f;
        fpu_val_5_13 - f9_1;

        if (!(*(&((fpu_val_5_13 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_13, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_5_13 == f9_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4f6a72;

        long double fpu_val_5_14 = item_30_1;
        long double f10_1 = 0.0f;
        fpu_val_5_14 - f10_1;

        if (!(*(&((fpu_val_5_14 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_14, f10_1) ? 1 : 0) << 0xa
                | (fpu_val_5_14 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4f6a72;
    }

    int32_t item_8c_2 = param_6;
    item_78 = item_78 * fpu_val_7_53;
    float item_74_3 = item_74_2 * fpu_val_7_53;
    float item_70_2 = fpu_val_6_43 * fpu_val_7_53;
    Script_ParseEnumInt32_19(context, param_2, &item_78);
}

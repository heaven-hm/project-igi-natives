// IGI native provenance: SoundSys_LoadSoundDef - 0x004E1130 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E1130-SoundSys_LoadSoundDef.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_LoadSoundDef.h"
int32_t SoundSys_LoadSoundDef(int32_t context, int32_t param_2, int32_t* param_3, float param_4, int32_t* param_5, float param_6)

{
    long double fpu7 = param_4;
    long double f1 = 0.0f;
    fpu7 - f1;
    int16_t result;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double fpu_val_7_1 = param_6;
        long double f2_1 = 0.0f;
        fpu_val_7_1 - f2_1;
        result = (fpu_val_7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe;
    }

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&result + 1) & 0x40))
    {
        double item_84;
        memcpy(&item_84, context, 0x18);
        double item_7c;
        double item_74;
        long double fpu_val_4_4 = g_bcab00 * (item_74 - g_bcab18)
            + g_bcaafc * (item_7c - g_bcab10) + g_bcaaf8 * (item_84 - g_bcab08);
        double item_9c;
        memcpy(&item_9c, param_2, 0x18);
        float item_a0 = fpu_val_4_4;
        double item_94;
        double item_8c;
        float item_a4 = g_bcab00 * (item_8c - g_bcab18) + g_bcaafc * (item_94 - g_bcab10)
            + g_bcaaf8 * (item_9c - g_bcab08);
        long double fpu_val_7_8 = item_a0;
        long double f3_1 = 409.600006f;
        fpu_val_7_8 - f3_1;
        long double fpu_val_7_9 = item_a4;
        long double f4_1 = 409.600006f;
        fpu_val_7_9 - f4_1;
        result = (fpu_val_7_9 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_7_9 == f4_1 ? 1 : 0) << 0xe;

        if (!(*(&((fpu_val_7_8 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_8 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            if (*(&result + 1) & 0x41)
            {
                long double fpu_val_7_18 = (409.600006f - item_a4) / (item_a0 - item_a4);
                item_9c = (item_84 - item_9c) * fpu_val_7_18 + item_9c;
                double item_94_1 = (item_7c - item_94) * fpu_val_7_18 + item_94;
                double item_8c_1 = (item_74 - item_8c) * fpu_val_7_18 + item_8c;
            }

            goto label_4e12eb;
        }

        if (!(*(&result + 1) & 0x41))
        {
            long double fpu_val_7_12 = (409.600006f - item_a0) / (item_a4 - item_a0);
            item_84 = (item_9c - item_84) * fpu_val_7_12 + item_84;
            double item_7c_1 = (item_94 - item_7c) * fpu_val_7_12 + item_7c;
            double item_74_1 = (item_8c - item_74) * fpu_val_7_12 + item_74;
        label_4e12eb:
            float item_64;
            Display_RestoreDevice_15(&item_64, &item_a0, &item_84);
            double* item_b4 = &item_9c;
            float item_6c;
            Display_RestoreDevice_15(&item_6c, &item_a4, item_b4);
            long double fpu_val_7_22 = param_4;
            int32_t item_30_1 = *param_3;
            int32_t item_28_1 = param_3[2];
            int32_t item_2c_1 = param_3[1];
            float temp_2 = item_a0;
            float item_48 = item_64;
            float item_34_1 = param_4;
            float item_40_1 = temp_2;
            int32_t item_60;
            int32_t item_44_1 = item_60;
            int32_t item_c_1 = *param_5;
            long double f5_1 = 1.0f;
            fpu_val_7_22 - f5_1;
            float item_10_1 = param_6;
            int32_t item_68;
            int32_t item_20_1 = item_68;
            int32_t item_8_1 = param_5[1];
            int32_t item_4_1 = param_5[2];
            int32_t item_3c_1 = 0;
            int32_t item_38_1 = 0;
            int32_t item_18_1 = 0;
            int32_t item_14_1 = 0;
            float item_1c_1 = item_a4;
            float item_24_1 = item_6c;
            long double fpu_val_7_23;
            long double f6_1;

            if (*(&((fpu_val_7_22 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_22, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_7_22 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                fpu_val_7_23 = param_6;
                f6_1 = 1.0f;
                fpu_val_7_23 - f6_1;
                int32_t item_58_1 = 0x40060000;
            }

            if (!(*(&((fpu_val_7_22 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_22, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_22 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
                    (fpu_val_7_23 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_23, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_23 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                int32_t item_58_2 = 0xc0000;

            g_a84a50 = 0;
            g_a84a58 = 0;
            int32_t data_7 = g_a84a54;
            int32_t item_5c;
            int32_t* saved_esi_2 = &item_5c;
            item_5c = 1;
            int32_t item_54_1 = 0xffffffff;
            int32_t item_50_1 = 2;
            float* item_4c_1 = &item_48;
            return (*((data_7 << 2) + &g_a94e84))(saved_esi_2);
        }
    }

    return result;
}

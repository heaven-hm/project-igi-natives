// IGI native provenance: AI_MoveToNode_17 - 0x0045F580 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045F580-AI_MoveToNode_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_MoveToNode_17.h"
int32_t AI_MoveToNode_17(void* context, double* param_2, double* param_3, int32_t param_4)

{
    int32_t dest_val = 0;

    if (param_4 > 0)
    {
        double* temp_1 = param_3;
        double* entity_1 = param_2;
        float data_1 = *(context + 0xa0);

        do
        {
            float item_50_1 = *entity_1 - *(context + 0x20);
            float item_4c_1 = entity_1[1] - *(context + 0x28);
            float item_48_1 = entity_1[2] - *(context + 0x30);
            float item_44_1 = *temp_1 - *(context + 0x20);
            float item_40_1 = temp_1[1] - *(context + 0x28);
            float item_3c_1 = temp_1[2] - *(context + 0x30);
            long double fpu_val_7_13 = item_50_1;
            long double f1_1 = item_44_1;
            fpu_val_7_13 - f1_1;
            long double fpu_val_7_14;

            fpu_val_7_14 = !(*(&((fpu_val_7_13 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_13, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_13 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? item_44_1 : item_50_1;

            long double fpu_val_6_1 = item_4c_1;
            long double f2_1 = item_40_1;
            fpu_val_6_1 - f2_1;
            float data_4 = item_4c_1;

            if (!(*(&((fpu_val_6_1 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_1, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                data_4 = item_40_1;

            long double fpu_val_6_2 = item_48_1;
            long double f3_1 = item_3c_1;
            fpu_val_6_2 - f3_1;
            float data_6 = item_48_1;

            if (!(*(&((fpu_val_6_2 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                data_6 = item_3c_1;

            long double fpu_val_6_3 = item_50_1;
            long double f4_1 = item_44_1;
            fpu_val_6_3 - f4_1;
            float data_8 = item_50_1;

            if (*(&((fpu_val_6_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_3, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                data_8 = item_44_1;

            long double fpu_val_6_4 = item_4c_1;
            long double f5_1 = item_40_1;
            fpu_val_6_4 - f5_1;
            float data_10 = item_4c_1;

            if (*(&((fpu_val_6_4 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_4, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_4 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                data_10 = item_40_1;

            long double fpu_val_6_5 = item_48_1;
            long double f6_1 = item_3c_1;
            fpu_val_6_5 - f6_1;
            float data_12 = item_48_1;

            if (*(&((fpu_val_6_5 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_5, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_5 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                data_12 = item_3c_1;

            float item_2c_1 = *temp_1 - *entity_1;
            float item_28_1 = temp_1[1] - entity_1[1];
            float item_24_1 = temp_1[2] - entity_1[2];
            float item_38_1 = item_50_1;
            float item_38_2 = -(item_50_1);
            float item_34_2 = -(item_4c_1);
            long double fpu_val_6_17 = -(item_48_1);
            long double fpu_val_5_1 = item_34_2;
            long double fpu_val_4_1 = item_38_2;
            double item_58_1 = item_24_1;
            double item_60_1 = item_28_1;
            double item_68_1 = item_2c_1;
            float item_6c_1 = fpu_val_6_17 * item_24_1 + item_34_2 * item_28_1 + item_38_2 * item_2c_1;
            long double fpu_val_6_21 = fpu_val_4_1 * fpu_val_4_1 + fpu_val_5_1 * fpu_val_5_1
                + fpu_val_6_17 * fpu_val_6_17 - 1.0f
                / (item_68_1 * item_68_1 + item_60_1 * item_60_1 + item_58_1 * item_58_1) * item_6c_1
                * item_6c_1;
            long double fpu_val_5_12 = data_1 * data_1;
            fpu_val_5_12 - fpu_val_6_21;

            if (!(*(&((fpu_val_5_12 < fpu_val_6_21 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_12, fpu_val_6_21) ? 1 : 0) << 0xa
                | (fpu_val_5_12 == fpu_val_6_21 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double f7_1 = data_1;
                fpu_val_7_14 - f7_1;

                if (*(&((fpu_val_7_14 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_14, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_14 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double fpu_val_7_15 = data_4;
                    long double f8_1 = data_1;
                    fpu_val_7_15 - f8_1;

                    if (*(&((fpu_val_7_15 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_15, f8_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_15 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double fpu_val_7_16 = data_6;
                        long double f9_1 = data_1;
                        fpu_val_7_16 - f9_1;

                        if (*(&((fpu_val_7_16 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_16, f9_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_16 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            float item_6c_2 = -(data_1);
                            long double fpu_val_7_19 = data_8;
                            long double f10_1 = item_6c_2;
                            fpu_val_7_19 - f10_1;

                            if (!(*(&((fpu_val_7_19 < f10_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_19, f10_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_19 == f10_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                long double fpu_val_7_20 = data_10;
                                long double f11_1 = item_6c_2;
                                fpu_val_7_20 - f11_1;

                                if (!(*(&((fpu_val_7_20 < f11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_20, f11_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_20 == f11_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double fpu_val_7_21 = data_12;
                                    long double f12_1 = item_6c_2;
                                    fpu_val_7_21 - f12_1;

                                    if (!(*(&((fpu_val_7_21 < f12_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_21, f12_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_21 == f12_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        return 1;
                                }
                            }
                        }
                    }
                }
            }

            entity_1 = &entity_1[3];
            temp_1 = &temp_1[3];
            dest_val += 1;
        } while (dest_val < param_4);
    }

    return 0;
}

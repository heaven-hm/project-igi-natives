// IGI native provenance: Water_Setup - 0x00518CA0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00518CA0-Water_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Water_Setup.h"
double* Water_Setup(void* context, int32_t* param_2)

{
    int32_t* source_val = param_2;
    double* i_1 = nullptr;
    void* context_val = source_val[8];
    double* temp_val = *source_val;
    double* i = source_val[1];

    if (source_val[2] > 0)
    {
        double* item_80_1 = &i[2];

        do
        {
            long double fpu_val_7_1 = *temp_val;
            long double f0_1 = *(context + 0x4be8);
            fpu_val_7_1 - f0_1;

            if (!(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double fpu_val_7_2 = *temp_val;
                long double f1_1 = *(context + 0x4c00);
                fpu_val_7_2 - f1_1;

                if (*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double fpu_val_7_3 = temp_val[1];
                    long double f2_1 = *(context + 0x4bf0);
                    fpu_val_7_3 - f2_1;

                    if (!(*(&((fpu_val_7_3 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_3, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_3 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        long double fpu_val_7_4 = temp_val[1];
                        long double f3_1 = *(context + 0x4c08);
                        fpu_val_7_4 - f3_1;

                        if (*(&((fpu_val_7_4 < f3_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_4, f3_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            void* data_1 = g_a44344;
                            int32_t item_40_1 = 0;
                            int32_t item_3c_1 = 0;
                            int32_t item_38_1 = 0x3f800000;
                            long double fpu_val_7_7 = *(context + 0x4b78) * 0.5f + *(context + 0x4b8c);
                            int32_t item_28_1 = *(data_1 + 0xd3c);
                            int32_t item_70_1 = *temp_val;
                            double item_60_1 = fpu_val_7_7;
                            long double fpu_val_6_2 = temp_val[2] - fpu_val_7_7;
                            int32_t item_2c_1 = *(data_1 + 0xd64);
                            int32_t item_68_1 = temp_val[1];
                            int32_t item_6c_1 = *(temp_val + 4);
                            long double f4_1 = 0.0;
                            fpu_val_6_2 - f4_1;
                            int32_t item_64_1 = *(temp_val + 0xc);

                            if (*(&((fpu_val_6_2 < f4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_2, f4_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_2 == f4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                fpu_val_6_2 = -(fpu_val_6_2);

                            long double f5_1 = *item_80_1;
                            fpu_val_7_7 - f5_1;
                            int32_t entity_3;

                            entity_3 = !(*(&((fpu_val_7_7 < f5_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_7, f5_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_7 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                            long double f6_1 = temp_val[2];
                            fpu_val_7_7 - f6_1;
                            int32_t data_6;

                            data_6 = !(*(&((fpu_val_7_7 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_7, f6_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_7 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                            if (entity_3 != data_6)
                            {
                                long double f7_1;

                                if (*(context_val + 0x58))
                                {
                                    f7_1 = *(context_val + 0x60);
                                    fpu_val_6_2 - f7_1;
                                }

                                if (!*(context_val + 0x58) || *(&((fpu_val_6_2 < f7_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_2, f7_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_2 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                {
                                    long double fpu_val_7_8 = fpu_val_7_7 - temp_val[2];
                                    int32_t item_20_1 = 1;
                                    int32_t item_78 = 0;
                                    long double f8_1 = 0.0;
                                    fpu_val_7_8 - f8_1;

                                    if (*(&((fpu_val_7_8 < f8_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_8, f8_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_8 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        fpu_val_7_8 = -(fpu_val_7_8);

                                    double item_18_1 = fpu_val_7_8;
                                    memcpy(context_val, &item_78, 0x70);
                                    source_val = param_2;
                                }
                            }
                        }
                    }
                }
            }

            temp_val = &temp_val[3];
            item_80_1 = &item_80_1[3];
            context_val += 0x70;
            i = i_1 + 1;
            i_1 = i;
        } while (i < source_val[2]);
    }

    return i;
}

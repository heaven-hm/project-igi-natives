// IGI native provenance: Ladder_Update - 0x004404C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004404C0-Ladder_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Ladder_Update.h"
int32_t Ladder_Update(double* context, int32_t* param_2)

{
    long double fpu_val_7_1 = *(param_2 + 8) - context[4];
    long double fpu_val_6_1 = *(param_2 + 0x10) - context[5];
    long double fpu_val_5_1 = *(param_2 + 0x18) - context[6];
    void* context_val = *param_2;
    double item_38 = context[0x11] * fpu_val_5_1 + *(context + 0x7c) * fpu_val_6_1 + context[0xe] * fpu_val_7_1;
    long double fpu_val_7_2 =
        *(context + 0x8c) * fpu_val_5_1 + *(context + 0x74) * fpu_val_7_1 + context[0x10] * fpu_val_6_1;
    long double f0 = 0.0;
    fpu_val_7_2 - f0;
    long double fpu_val_6_3 = fpu_val_7_2;

    if (*(&((fpu_val_7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f0 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        fpu_val_6_3 = -(fpu_val_6_3);

    long double f1 = *(param_2 + 0x78);
    fpu_val_6_3 - f1;

    if (*(&((fpu_val_6_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_3, f1) ? 1 : 0) << 0xa
        | (fpu_val_6_3 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
    {
        long double fpu_val_6_4 = item_38;
        long double f2_1 = -2867.1999999999998;
        fpu_val_6_4 - f2_1;

        if (!(*(&((fpu_val_6_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_4, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_6_4 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            long double fpu_val_6_5 = item_38;
            long double f4_1 = 2867.1999999999998;
            fpu_val_6_5 - f4_1;

            if (*(&((fpu_val_6_5 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_5, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_6_5 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                int32_t entity_1 = param_2[0xc];
                long double f5_1 = 0.0;
                fpu_val_7_2 - f5_1;
                int32_t temp_1 = param_2[0xf];
                int32_t item_44 = param_2[9];
                int32_t item_40_1 = entity_1;
                float entity_2 = context[0x10];
                float item_50 = *(context + 0x74);
                int32_t item_3c_1 = temp_1;
                float temp_2 = *(context + 0x8c);

                if (!(*(&((fpu_val_7_2 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_2, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    item_50 = -(item_50);
                    float item_4c_2 = -(entity_2);
                    float item_48_2 = -(temp_2);
                }

                float item_54_1 = Sys_PushStack_10(&item_44, &item_50);
                double item_20[0x2];
                WeaponType_UpdateAnim(&item_20, context, 1);
                double item_10;
                fpu_val_7_2 = item_10 + context[6];
                long double fpu_val_6_6 = item_54_1;
                long double f6_1 = 0.785398185f;
                fpu_val_6_6 - f6_1;

                if (*(&((fpu_val_6_6 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_6, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_6 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    long double f7_1 = *(param_2 + 0x18);
                    fpu_val_7_2 - f7_1;

                    if (!(*(&((fpu_val_7_2 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_2, f7_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_2 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        long double fpu_val_7_11 = *(param_2 + 0x18);
                        long double f8_1 = context[6];
                        fpu_val_7_11 - f8_1;

                        if (!(*(&((fpu_val_7_11 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_11, f8_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_11 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            param_2[0x20] = context;
                            param_2[0x1c] = 0;
                            param_2[0x1d] = 0;
                            *(context_val + 0xd7b) = 0;
                        }
                    }
                }
            }
        }
    }

    WeaponType_UpdateAnim(&item_38, context, 1);
    long double fpu_val_7_14 = item_38 + context[4];
    item_38 = fpu_val_7_14;
    double item_28;
    long double fpu_val_4_10 = *(context + 0x8c) * (*(param_2 + 0x18) - (item_28 + context[6]))
        + *(context + 0x74) * (*(param_2 + 8) - fpu_val_7_14);
    double item_30;
    long double fpu_val_3_11 = context[0x10] * (*(param_2 + 0x10) - (item_30 + context[5]));
    long double fpu_val_4_11 = fpu_val_4_10 + fpu_val_3_11;
    long double f3 = 0.0;
    fpu_val_4_11 - f3;
    int16_t result = (fpu_val_4_11 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_11, f3) ? 1 : 0) << 0xa
        | (fpu_val_4_11 == f3 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        long double fpu0;
        long double fpu1;
        long double fpu2;
        result = Level_InitSprites_5(fpu0, fpu1, fpu2, fpu_val_3_11, param_2, context, &item_38);

        if (result)
            *(context_val + 0xd7b) = 1;
    }

    return result;
}

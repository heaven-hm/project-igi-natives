// IGI native provenance: Display_SetDisplayMode_18 - 0x0049A050 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049A050-Display_SetDisplayMode_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetDisplayMode_18.h"
void* Display_SetDisplayMode_18(float context, int32_t param_2, void* param_3, int32_t* param_4 )

{
    float temp_val = context;
    int32_t* flagP = &g_b46d40;
    void* source_1 = *(*(*(*(*(temp_val + 0x6c) + (param_2 << 2)) + 0xc) + 0xc) + 0x2c) + (param_3 << 5);
    float* entity_4 = *(source_1 + 0x14);
    param_3 = source_1;

    if (!*(temp_val + 0x5b4))
    {
        char data_3 = *(temp_val + 0x5b5);
        long double fpu_val_7_12;

        if (!data_3)
            fpu_val_7_12 = *(temp_val + 0xfc);
        else
            fpu_val_7_12 = *(temp_val + 0x100);

        long double fpu_val_6_4 = *(temp_val + 0x59c) * 1.0f / (*(temp_val + 0x100) - *(temp_val + 0xfc));

        if (data_3)
            fpu_val_6_4 = -(fpu_val_6_4);

        param_2 = 0;

        if (*(source_1 + 4) > 0)
        {
            int32_t i;

            do
            {
                long double fpu_val_5_8 = (-(fpu_val_7_12) + *entity_4) * fpu_val_6_4;
                int32_t source_2 = fpu_val_5_8;
                context = source_2;

                if (source_2 == *(temp_val + 0x59c))
                {
                    source_2 -= 1;
                    context = source_2;
                }

                long double fpu_val_5_9 = fpu_val_5_8 - context;
                long double fpu_val_4_10 = 0.0f;
                fpu_val_4_10 - fpu_val_5_9;

                if (*(&((fpu_val_4_10 < fpu_val_5_9 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_4_10, fpu_val_5_9) ? 1 : 0) << 0xa
                    | (fpu_val_4_10 == fpu_val_5_9 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                {
                    long double fpu_val_4_11 = 1.0f;
                    fpu_val_4_11 - fpu_val_5_9;

                    if (*(&((fpu_val_4_11 < fpu_val_5_9 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_4_11, fpu_val_5_9) ? 1 : 0) << 0xa
                            | (fpu_val_4_11 == fpu_val_5_9 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                        fpu_val_5_9 = 1.0f;
                }
                else
                    fpu_val_5_9 = 0.0f;

                int32_t data_7 = source_2 * 5;
                entity_4 = &entity_4[4];
                void* data_8 = temp_val + (data_7 << 3);
                void* dest_5 = temp_val + source_2 * 0xc;
                flagP = &flagP[3];
                long double fpu_val_4_15 = *(temp_val + (data_7 << 3) + 0x208) * entity_4[-2]
                    + *(temp_val + (data_7 << 3) + 0x204) * entity_4[-3] + *(dest_5 + 0x104);
                long double fpu_val_3_18 = *(data_8 + 0x214) * entity_4[-2] + *(data_8 + 0x210) * entity_4[-3]
                    + *(temp_val + ((source_2 * 3 + 0x42) << 2));
                float item_14_2 = fpu_val_3_18;
                float item_10_2 =
                    *(data_8 + 0x220) * entity_4[-2] + *(data_8 + 0x21c) * entity_4[-3] + *(dest_5 + 0x10c);
                source_1 = param_3;
                long double fpu_val_2_14 = *(data_8 + 0x23c) * entity_4[-2] + *(data_8 + 0x238) * entity_4[-3]
                    + *(temp_val + ((source_2 * 3 + 0x45) << 2));
                i = param_2 + 1;
                param_2 = i;
                float item_4_3 =
                    *(data_8 + 0x248) * entity_4[-2] + *(data_8 + 0x244) * entity_4[-3] + *(dest_5 + 0x118);
                flagP[-3] = (*(data_8 + 0x230) * entity_4[-2] + *(data_8 + 0x22c) * entity_4[-3]
                    + *(dest_5 + 0x110) - fpu_val_4_15) * fpu_val_5_9 + fpu_val_4_15;
                flagP[-2] = (fpu_val_2_14 - item_14_2) * fpu_val_5_9 + item_14_2;
                flagP[-1] = (item_4_3 - item_10_2) * fpu_val_5_9 + item_10_2;
            } while (i < *(source_1 + 4));
        }
    }
    else
    {
        int32_t i_1 = 0;
        float item_18_1 = (*(temp_val + 0xfc) + *(temp_val + 0x100)) * 0.5f;

        if (*(source_1 + 4) > 0)
        {
            do
            {
                long double fpu_val_7_7 = *entity_4 - item_18_1;
                long double fpu_val_6_1 = entity_4[1];
                long double fpu_val_5_1 = entity_4[2];
                int32_t* dest_2 = flagP;
                i_1 += 1;
                entity_4 = &entity_4[4];
                flagP = &flagP[3];
                float item_8_1 =
                    fpu_val_7_7 * *(temp_val + 0x7c) + fpu_val_5_1 * *(temp_val + 0x84) + fpu_val_6_1 * *(temp_val + 0x80);
                long double fpu_val_7_10 = fpu_val_7_7 * *(temp_val + 0x88) + fpu_val_5_1 * *(temp_val + 0x90);
                long double fpu_val_6_2 = fpu_val_6_1 * *(temp_val + 0x8c);
                *dest_2 =
                    fpu_val_7_7 * *(temp_val + 0x70) + fpu_val_5_1 * *(temp_val + 0x78) + fpu_val_6_1 * *(temp_val + 0x74);
                dest_2[1] = item_8_1;
                dest_2[2] = fpu_val_7_10 + fpu_val_6_2;
            } while (i_1 < *(source_1 + 4));
        }
    }

    if (param_4)
        *param_4 = *(source_1 + 4);

    return flagP - *(source_1 + 4) * 0xc;
}

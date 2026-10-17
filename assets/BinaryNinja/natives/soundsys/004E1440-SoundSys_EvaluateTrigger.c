// Original IGI.EXE function: SoundSys_EvaluateTrigger (VA 0x004E1440; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_EvaluateTrigger.h"
int32_t* SoundSys_EvaluateTrigger(float context, int32_t* param_2)

{
    float temp_val = context;
    float* entity_val = *param_2;
    int32_t* i_1;

    if (!*(temp_val + 0x5b4))
    {
        char data_val = *(temp_val + 0x5b5);
        long double fpu_val_7_12;

        if (!data_val)
            fpu_val_7_12 = *(temp_val + 0xfc);
        else
            fpu_val_7_12 = *(temp_val + 0x100);

        long double fpu_val_6_4 = *(temp_val + 0x59c) * 1.0f / (*(temp_val + 0x100) - *(temp_val + 0xfc));

        if (data_val)
            fpu_val_6_4 = -(fpu_val_6_4);

        i_1 = param_2[1];
        int32_t i = 0;

        if (i_1 > 0)
        {
            do
            {
                long double fpu_val_5_8 = (-(fpu_val_7_12) + *entity_val) * fpu_val_6_4;
                int32_t source_1 = fpu_val_5_8;
                context = source_1;

                if (source_1 == *(temp_val + 0x59c))
                {
                    source_1 -= 1;
                    context = source_1;
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

                int32_t data_3 = source_1 * 5;
                i += 1;
                long double fpu_val_4_13 = *(temp_val + (data_3 << 3) + 0x208) * entity_val[2];
                void* data_4 = temp_val + (data_3 << 3);
                void* dest_5 = temp_val + source_1 * 0xc;
                long double fpu_val_3_10 = *(temp_val + (data_3 << 3) + 0x204) * entity_val[1];
                entity_val = &entity_val[6];
                long double fpu_val_4_15 = fpu_val_4_13 + fpu_val_3_10 + *(dest_5 + 0x104);
                long double fpu_val_3_18 = *(data_4 + 0x214) * entity_val[-4] + *(data_4 + 0x210) * entity_val[-5]
                    + *(temp_val + ((source_1 * 3 + 0x42) << 2));
                float item_14_2 = fpu_val_3_18;
                float item_10_2 =
                    *(data_4 + 0x220) * entity_val[-4] + *(data_4 + 0x21c) * entity_val[-5] + *(dest_5 + 0x10c);
                long double fpu_val_2_14 = *(data_4 + 0x23c) * entity_val[-4] + *(data_4 + 0x238) * entity_val[-5]
                    + *(temp_val + ((source_1 * 3 + 0x45) << 2));
                i_1 = param_2;
                float item_4_3 =
                    *(data_4 + 0x248) * entity_val[-4] + *(data_4 + 0x244) * entity_val[-5] + *(dest_5 + 0x118);
                entity_val[-6] = (*(data_4 + 0x230) * entity_val[-4] + *(data_4 + 0x22c) * entity_val[-5]
                    + *(dest_5 + 0x110) - fpu_val_4_15) * fpu_val_5_9 + fpu_val_4_15;
                entity_val[-5] = (fpu_val_2_14 - item_14_2) * fpu_val_5_9 + item_14_2;
                entity_val[-4] = (item_4_3 - item_10_2) * fpu_val_5_9 + item_10_2;
            } while (i < i_1[1]);
        }
    }
    else
    {
        i_1 = nullptr;
        float item_18_1 = (*(temp_val + 0xfc) + *(temp_val + 0x100)) * 0.5f;

        if (param_2[1] > 0)
        {
            do
            {
                long double fpu_val_7_7 = *entity_val - item_18_1;
                long double fpu_val_6_1 = entity_val[1];
                long double fpu_val_5_1 = entity_val[2];
                float* dest_2 = entity_val;
                i_1 += 1;
                entity_val = &entity_val[6];
                float item_8_1 =
                    fpu_val_5_1 * *(temp_val + 0x84) + fpu_val_6_1 * *(temp_val + 0x80) + fpu_val_7_7 * *(temp_val + 0x7c);
                long double fpu_val_7_10 = fpu_val_7_7 * *(temp_val + 0x88) + fpu_val_5_1 * *(temp_val + 0x90);
                long double fpu_val_6_2 = fpu_val_6_1 * *(temp_val + 0x8c);
                *dest_2 =
                    fpu_val_7_7 * *(temp_val + 0x70) + fpu_val_5_1 * *(temp_val + 0x78) + fpu_val_6_1 * *(temp_val + 0x74);
                dest_2[1] = item_8_1;
                dest_2[2] = fpu_val_7_10 + fpu_val_6_2;
            } while (i_1 < param_2[1]);
        }
    }

    return i_1;
}

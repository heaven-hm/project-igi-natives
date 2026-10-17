// Original IGI.EXE function: Display_CheckCapabilities_19 (VA 0x0049CC80; static CFG gate PASS, CFG score 1.000).
#include "Display_CheckCapabilities_19.h"
❓  int32_t Display_CheckCapabilities_19(int32_t* context, float param_2)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    int32_t* flagP = context;
    int32_t source_val;
    int32_t item_3c = source_val;
    int32_t dest_val;
    int32_t item_40 = dest_val;
    int32_t* data_1 = g_bcad90;
    int32_t* item_48 = &context;
    int32_t entity_1 = *data_1;
    int32_t result;
    int32_t result_1;

    if (g_bcad98 + flagP[3] > g_bcad94)
    {
        int32_t data_3 = (*(entity_1 + 0xc))(data_1, 0x2020, item_48, 0);
        result = 0;
        result_1 = 0;
        g_bcad98 = flagP[3];

        if (!data_3)
        {
        label_49cd09:

            if (context)
            {
                float temp_4 = param_2;
                float* entity_4 = flagP[4];
                int32_t context_val;
                int32_t item_44 = context_val;
                long double fpu7 = *(temp_4 + 0x100);

                if (!*(temp_4 + 0x5b4))
                {
                    char data_5 = *(temp_4 + 0x5b5);
                    long double fpu_val_7_9;

                    if (!data_5)
                        fpu_val_7_9 = *(temp_4 + 0xfc);
                    else
                        fpu_val_7_9 = *(temp_4 + 0x100);

                    long double fpu_val_6_7 = *(temp_4 + 0x59c) * 1.0f / (fpu7 - *(temp_4 + 0xfc));

                    if (data_5)
                        fpu_val_6_7 = -(fpu_val_6_7);

                    int32_t item_30_1 = 0;

                    if (flagP[3] > 0)
                    {
                        bool flag_8_1;

                        do
                        {
                            long double fpu_val_5_7 = (-(fpu_val_7_9) + *entity_4) * fpu_val_6_7;
                            int32_t source_7 = fpu_val_5_7;
                            param_2 = source_7;

                            if (source_7 == *(temp_4 + 0x59c))
                            {
                                source_7 -= 1;
                                param_2 = source_7;
                            }

                            long double fpu_val_5_8 = fpu_val_5_7 - param_2;
                            long double fpu_val_4_10 = 0.0f;
                            fpu_val_4_10 - fpu_val_5_8;

                            if (*(&((fpu_val_4_10 < fpu_val_5_8 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_4_10, fpu_val_5_8) ? 1 : 0) << 0xa
                                | (fpu_val_4_10 == fpu_val_5_8 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                            {
                                long double fpu_val_4_11 = 1.0f;
                                fpu_val_4_11 - fpu_val_5_8;

                                if (*(&((fpu_val_4_11 < fpu_val_5_8 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_4_11, fpu_val_5_8) ? 1 : 0) << 0xa
                                        | (fpu_val_4_11 == fpu_val_5_8 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                                    fpu_val_5_8 = 1.0f;
                            }
                            else
                                fpu_val_5_8 = 0.0f;

                            int32_t data_10 = source_7 * 5;
                            void* data_11 = temp_4 + (data_10 << 3);
                            void* dest_14 = temp_4 + source_7 * 0xc;
                            long double fpu_val_4_15 = *(temp_4 + (data_10 << 3) + 0x208) * entity_4[2]
                                + *(temp_4 + (data_10 << 3) + 0x204) * entity_4[1] + *(dest_14 + 0x104);
                            long double fpu_val_3_18 = *(data_11 + 0x214) * entity_4[2]
                                + *(data_11 + 0x210) * entity_4[1]
                                + *(temp_4 + ((source_7 * 3 + 0x42) << 2));
                            float item_20_2 = fpu_val_3_18;
                            float item_1c_2 = *(data_11 + 0x220) * entity_4[2]
                                + *(data_11 + 0x21c) * entity_4[1] + *(dest_14 + 0x10c);
                            long double fpu_val_2_14 = *(data_11 + 0x23c) * entity_4[2]
                                + *(data_11 + 0x238) * entity_4[1]
                                + *(temp_4 + ((source_7 * 3 + 0x45) << 2));
                            float item_10_3 = *(data_11 + 0x248) * entity_4[2]
                                + *(data_11 + 0x244) * entity_4[1] + *(dest_14 + 0x118);
                            *context = (*(data_11 + 0x230) * entity_4[2] + *(data_11 + 0x22c) * entity_4[1]
                                + *(dest_14 + 0x110) - fpu_val_4_15) * fpu_val_5_8 + fpu_val_4_15;
                            context[1] = (fpu_val_2_14 - item_20_2) * fpu_val_5_8 + item_20_2;
                            context[2] = (item_10_3 - item_1c_2) * fpu_val_5_8 + item_1c_2;
                            long double fpu_val_5_14 = *(temp_4 + ((source_7 * 5 + 0x41) << 3)) * entity_4[5]
                                + *(data_11 + 0x204) * entity_4[4];
                            long double fpu_val_4_28 = entity_4[3] * *(data_11 + 0x200);
                            entity_4 = &entity_4[8];
                            long double fpu_val_5_19 = *(data_11 + 0x210) * entity_4[-4]
                                + *(data_11 + 0x20c) * entity_4[-5] + *(data_11 + 0x214) * entity_4[-3];
                            int32_t* data_13 = &context[3];
                            long double fpu_val_5_23 = *(data_11 + 0x21c) * entity_4[-4]
                                + *(data_11 + 0x218) * entity_4[-5] + *(data_11 + 0x220) * entity_4[-3];
                            *data_13 = fpu_val_5_14 + fpu_val_4_28;
                            data_13[1] = fpu_val_5_19;
                            data_13[2] = fpu_val_5_23;
                            context[6] = entity_4[-2];
                            context[7] = entity_4[-1];
                            flag_8_1 = item_30_1 + 1 < flagP[3];
                            item_30_1 += 1;
                            context = &context[8];
                        } while (flag_8_1);
                        result = result_1;
                    }
                }
                else
                {
                    int32_t data_6 = 0;
                    float item_c_1 = (fpu7 + *(temp_4 + 0xfc)) * 0.5f;

                    if (flagP[3] > 0)
                    {
                        bool flag_5_1;

                        do
                        {
                            long double fpu_val_7_4 = *entity_4 - item_c_1;
                            long double fpu_val_6_1 = entity_4[1];
                            long double fpu_val_5_1 = entity_4[2];
                            int32_t* source_1 = context;
                            float item_14_1 = fpu_val_7_4 * *(temp_4 + 0x7c) + fpu_val_5_1 * *(temp_4 + 0x84)
                                + fpu_val_6_1 * *(temp_4 + 0x80);
                            long double fpu_val_6_3 =
                                fpu_val_5_1 * *(temp_4 + 0x90) + fpu_val_6_1 * *(temp_4 + 0x8c);
                            long double fpu_val_6_5 = fpu_val_7_4 * *(temp_4 + 0x88);
                            *source_1 = fpu_val_5_1 * *(temp_4 + 0x78) + fpu_val_6_1 * *(temp_4 + 0x74)
                                + fpu_val_7_4 * *(temp_4 + 0x70);
                            source_1[1] = item_14_1;
                            source_1[2] = fpu_val_6_3 + fpu_val_6_5;
                            int32_t* source_2 = &entity_4[3];
                            int32_t* dest_8 = &context[3];
                            data_6 += 1;
                            entity_4 = &entity_4[8];
                            *dest_8 = *source_2;
                            dest_8[1] = source_2[1];
                            dest_8[2] = source_2[2];
                            context[6] = entity_4[-2];
                            context[7] = entity_4[-1];
                            flag_5_1 = data_6 < flagP[3];
                            context = &context[8];
                        } while (flag_5_1);
                        result = result_1;
                    }
                }

                int32_t* data_18 = g_bcad90;
                (*(*data_18 + 0x10))(data_18);
            }
        }
    }
    else
    {
        int32_t data_2 = (*(entity_1 + 0xc))(data_1, 0x1020, item_48, 0);
        int32_t result_2 = g_bcad98;
        result = result_2;
        int32_t entity_2 = result_2 + flagP[3];
        result_1 = result;
        context = &context[result_2 * 8];
        g_bcad98 = entity_2;

        if (!data_2)
            goto label_49cd09;
    }
    return result;
}

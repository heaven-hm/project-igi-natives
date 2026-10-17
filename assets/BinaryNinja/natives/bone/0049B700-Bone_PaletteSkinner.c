// Original IGI.EXE function: Bone_PaletteSkinner (VA 0x0049B700; static CFG gate PASS, CFG score 1.000).
#include "Bone_PaletteSkinner.h"
int32_t Bone_PaletteSkinner(void* context, int32_t param_2, float param_3, int32_t param_4)

{
    void* source_val = context;
    int32_t saved_ebp_1 = *(source_val + 0x10);

    if (saved_ebp_1 <= 0xfa0)
    {
        int32_t* data_3 = g_bcad90;
        int32_t result;

        if (saved_ebp_1 + g_bcad98 > g_bcad94)
        {
            int32_t data_5 = (*(*data_3 + 0xc))(data_3, 0x2020, &context, 0);
            result = 0;
            param_2 = 0;
            g_bcad98 = *(source_val + 0x10);

            if (!data_5)
            {
            label_49b7ae:
                void* temp_5 = context;

                if (temp_5)
                {
                    int32_t i_6 = *(source_val + 0x10);
                    float* data_7 = *(source_val + 0x18);

                    if (!param_4)
                    {
                        if (i_6 > 0)
                        {
                            float* temp_6 = temp_5 + 8;
                            int32_t i_4 = i_6;
                            int32_t i;

                            do
                            {
                                int32_t entity_5 = 0;
                                entity_5 = *(data_7 + 0x26);
                                long double fpu_val_7_1 = data_7[8];
                                int32_t flagP3 = entity_5 * 0x21;
                                int32_t entity_6 = *(param_3 + 8);
                                void* entity_7 = entity_6 + (flagP3 << 2);
                                long double fpu_val_6_4 = *data_7 * *(entity_6 + (flagP3 << 2) + 0x24)
                                    + data_7[2] * *(entity_6 + (flagP3 << 2) + 0x2c)
                                    + data_7[1] * *(entity_7 + 0x28);
                                float item_18_1 = fpu_val_6_4;
                                float item_24_1 = item_18_1;
                                float item_20_2 = *data_7 * *(entity_7 + 0x30)
                                    + data_7[2] * *(entity_7 + 0x38) + data_7[1] * *(entity_7 + 0x34)
                                    + *(entity_7 + 0x1c);
                                float item_1c_2 = data_7[2] * *(entity_7 + 0x44)
                                    + *(entity_7 + 0x40) * data_7[1] + *(entity_7 + 0x3c) * *data_7
                                    + *(entity_7 + 0x20);
                                temp_6[-2] = (item_18_1 + *(entity_7 + 0x18)) * fpu_val_7_1;
                                temp_6[-1] = item_20_2 * fpu_val_7_1;
                                *temp_6 = item_1c_2 * fpu_val_7_1;
                                temp_6[4] = data_7[6];
                                temp_6[5] = data_7[7];
                                long double fpu_val_7_6 = *(entity_7 + 0x28) * data_7[4]
                                    + *(entity_7 + 0x2c) * data_7[5] + data_7[3] * *(entity_7 + 0x24);
                                long double fpu_val_7_10 = data_7[5] * *(entity_7 + 0x38)
                                    + data_7[4] * *(entity_7 + 0x34) + data_7[3] * *(entity_7 + 0x30);
                                long double fpu_val_7_12 = *(entity_7 + 0x3c) * data_7[3];
                                long double fpu_val_6_29 = *(entity_7 + 0x44) * data_7[5];
                                data_7 = &data_7[0xa];
                                int32_t* entity_8 = &temp_6[1];
                                temp_6 = &temp_6[8];
                                i = i_4;
                                i_4 -= 1;
                                long double fpu_val_7_14 =
                                    fpu_val_7_12 + fpu_val_6_29 + *(entity_7 + 0x40) * data_7[-6];
                                *entity_8 = fpu_val_7_6;
                                entity_8[1] = fpu_val_7_10;
                                entity_8[2] = fpu_val_7_14;
                            } while (i != 1);
                            result = param_2;
                        }

                        int32_t i_3 = *(source_val + 0xc);
                        void* data_10 = *(source_val + 0x18) + *(source_val + 0x10) * 0x28;

                        if (i_3 > 0)
                        {
                            int32_t i_1;

                            do
                            {
                                int32_t entity_10 = 0;
                                entity_10 = *(data_10 + 0x26);
                                data_10 += 0x28;
                                int32_t source_3 = entity_10 * 0x21;
                                int32_t entity_11 = *(param_3 + 8);
                                void* entity_12 = entity_11 + (source_3 << 2);
                                long double fpu_val_7_18 =
                                    *(entity_11 + (source_3 << 2) + 0x2c) * *(data_10 - 0x20)
                                    + *(entity_11 + (source_3 << 2) + 0x28) * *(data_10 - 0x24)
                                    + *(entity_12 + 0x24) * *(data_10 - 0x28);
                                float item_18_2 = fpu_val_7_18;
                                float item_24_2 = item_18_2;
                                long double fpu_val_7_22 = *(entity_12 + 0x38) * *(data_10 - 0x20)
                                    + *(entity_12 + 0x34) * *(data_10 - 0x24)
                                    + *(entity_12 + 0x30) * *(data_10 - 0x28);
                                long double fpu_val_7_26 = *(entity_12 + 0x44) * *(data_10 - 0x20)
                                    + *(entity_12 + 0x40) * *(data_10 - 0x24)
                                    + *(entity_12 + 0x3c) * *(data_10 - 0x28);
                                float item_20_4 = fpu_val_7_22 + *(entity_12 + 0x1c);
                                float entity_13 = *(data_10 - 8);
                                int32_t entity_14 = 0;
                                entity_14 = *(data_10 - 4);
                                float item_1c_4 = fpu_val_7_26 + *(entity_12 + 0x20);
                                float* entity_16 = (entity_14 << 5) + context;
                                i_1 = i_3;
                                i_3 -= 1;
                                *entity_16 = entity_13 * (item_18_2 + *(entity_12 + 0x18)) + *entity_16;
                                entity_16[1] = entity_13 * item_20_4 + entity_16[1];
                                entity_16[2] = entity_13 * item_1c_4 + entity_16[2];
                            } while (i_1 != 1);
                            int32_t* data_11 = g_bcad90;
                            (*(*data_11 + 0x10))(data_11);
                            return result;
                        }
                    }
                    else if (i_6 > 0)
                    {
                        float* temp_8 = temp_5 + 8;
                        int32_t i_5 = i_6;
                        int32_t i_2;

                        do
                        {
                            int32_t entity_17 = 0;
                            entity_17 = *(data_7 + 0x26);
                            int32_t flagP15 = entity_17 * 0x21;
                            int32_t entity_18 = *(param_3 + 8);
                            void* entity_19 = entity_18 + (flagP15 << 2);
                            long double fpu_val_7_39 = *data_7 * *(entity_18 + (flagP15 << 2) + 0x24)
                                + data_7[2] * *(entity_18 + (flagP15 << 2) + 0x2c)
                                + data_7[1] * *(entity_19 + 0x28);
                            long double fpu_val_6_58 = *data_7 * *(entity_19 + 0x30)
                                + data_7[2] * *(entity_19 + 0x38) + data_7[1] * *(entity_19 + 0x34);
                            long double fpu_val_6_62 = data_7[2] * *(entity_19 + 0x44)
                                + *(entity_19 + 0x40) * data_7[1] + *(entity_19 + 0x3c) * *data_7;
                            temp_8[-2] = fpu_val_7_39 + *(entity_19 + 0x18);
                            temp_8[-1] = fpu_val_6_58 + *(entity_19 + 0x1c);
                            *temp_8 = fpu_val_6_62 + *(entity_19 + 0x20);
                            long double fpu_val_7_48 = *(entity_19 + 0x28) * data_7[4]
                                + *(entity_19 + 0x2c) * data_7[5] + data_7[3] * *(entity_19 + 0x24);
                            long double fpu_val_7_52 = data_7[5] * *(entity_19 + 0x38)
                                + data_7[4] * *(entity_19 + 0x34) + data_7[3] * *(entity_19 + 0x30);
                            long double fpu_val_7_55 =
                                *(entity_19 + 0x3c) * data_7[3] + *(entity_19 + 0x44) * data_7[5];
                            long double fpu_val_6_74 = *(entity_19 + 0x40) * data_7[4];
                            int32_t* entity_20 = &temp_8[1];
                            temp_8 = &temp_8[8];
                            data_7 = &data_7[0xa];
                            *entity_20 = fpu_val_7_48;
                            entity_20[1] = fpu_val_7_52;
                            entity_20[2] = fpu_val_7_55 + fpu_val_6_74;
                            temp_8[-4] = data_7[-4];
                            temp_8[-3] = data_7[-3];
                            i_2 = i_5;
                            i_5 -= 1;
                        } while (i_2 != 1);
                    }

                    int32_t* data_13 = g_bcad90;
                    (*(*data_13 + 0x10))(data_13);
                }
            }
        }
        else
        {
            int32_t data_4 = (*(*data_3 + 0xc))(data_3, 0x1020, &context, 0);
            int32_t result_1 = g_bcad98;
            result = result_1;
            int32_t entity_2 = result_1 + *(source_val + 0x10);
            param_2 = result;
            context += result_1 << 5;
            g_bcad98 = entity_2;

            if (!data_4)
                goto label_49b7ae;
        }

        return result;
    }

    int32_t saved_frame = saved_ebp_1;
    int32_t item_38 = param_2 + 0x14;
    Error_Show("Bone model too large. Model %s has %d vertices.");

    while (true)
        /* nop */
}

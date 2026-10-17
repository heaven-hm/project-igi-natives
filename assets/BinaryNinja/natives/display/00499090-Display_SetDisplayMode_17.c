// Original IGI.EXE function: Display_SetDisplayMode_17 (VA 0x00499090; static CFG gate FAIL, CFG score 0.667).
#include "Display_SetDisplayMode_17.h"
int32_t Display_SetDisplayMode_17(float context)

{
    float context_val = context;
    int32_t data_val = *(context_val + 0x56c8);
    float* entity_val = context_val + 0x57c;
    int32_t data_1 = *(context_val + 0xe3c);
    float* dest_val = entity_val;
    context = *(context_val + 0x56a8) * 81.9199982f;
    float item_20 = *(context_val + 0x56a8) * 2048.0f;

    if (data_1 > 1)
    {
        int32_t i_2 = data_1 - 1;
        int32_t i;

        do
        {
            long double fpu_val_7_4 = entity_val[2];
            long double f0_1 = dest_val[2];
            fpu_val_7_4 - f0_1;

            if (!(*(&((fpu_val_7_4 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_4, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                dest_val = entity_val;

            entity_val = &entity_val[7];
            i = i_2;
            i_2 -= 1;
        } while (i != 1);
    }

    int32_t* data_3 = *(context_val + 0x56cc);
    int32_t item_10 = 0;
    int32_t data_4 = (*(*data_3 + 0xc))(data_3, 0x20, &item_10, 0);

    if (!data_4)
    {
        *(context_val + 0x6c) = 0;
        void item_c;
        void* data_5 = &item_c;
        void* entity_2 = context_val + 0x1b0;
        int32_t i_3 = 3;
        int32_t i_1;

        do
        {
            int32_t flagP1 = *(data_5 - 4);
            data_5 += 4;
            entity_2 += 0x144;
            *(data_5 - 4) = flagP1 + 0x2d00;
            *(entity_2 - 0x144) = 0;
            i_1 = i_3;
            i_3 -= 1;
        } while (i_1 != 1);
        float* temp_1 = dest_val;
        int32_t item_2c_1 = 0;

        if (*(context_val + 0xe3c) > 0)
        {
            bool flag_3_1;

            do
            {
                int32_t flagP3 = temp_1[6];
                float* data_7 = (&item_10)[flagP3];
                void* data_8;

                if (*(context_val + 0x5650) != 1)
                {
                    data_7[3] = 0xffffff;
                    data_7[9] = data_val;
                    data_8 = &data_7[0xc];
                    long double fpu_val_7_17 = *temp_1;
                    *(data_8 - 0x18) = fpu_val_7_17;
                    *(data_8 - 0x30) = fpu_val_7_17;
                    long double fpu_val_7_18 = temp_1[1];
                    *(data_8 - 0x14) = fpu_val_7_18;
                    *(data_8 - 0x2c) = fpu_val_7_18;
                    *(data_8 - 0x28) = item_20 + temp_1[2];
                    *(data_8 - 0x10) = temp_1[2];
                }
                else
                {
                    float item_1c_1 =
                        g_bcaae4 * temp_1[1] + g_bcaae0 * *temp_1 + g_bcaae8 * temp_1[2];
                    float item_18_1 =
                        g_bcaaf0 * temp_1[1] + g_bcaaec * *temp_1 + g_bcaaf4 * temp_1[2];
                    long double fpu_val_7_15 = g_bcaafc * temp_1[1] + g_bcaaf8 * *temp_1;
                    long double fpu_val_6_12 = g_bcab00 * temp_1[2];
                    data_7[4] = 0;
                    data_7[5] = 0;
                    data_7[0xb] = 0;
                    data_7[0x10] = 0;
                    long double fpu_val_7_16 = fpu_val_7_15 + fpu_val_6_12;
                    long double fpu_val_6_14 = item_1c_1 - context;
                    data_7[3] = 0xffffffff;
                    data_7[9] = 0xffffffff;
                    data_7[0xf] = 0xffffffff;
                    data_7[0x15] = 0xffffffff;
                    *data_7 = fpu_val_6_14;
                    long double fpu_val_5_2 = item_1c_1 + context;
                    data_7[0xa] = 0x3f800000;
                    data_7[0x11] = 0x3f800000;
                    data_7[0x16] = 0x3f800000;
                    data_7[0x17] = 0x3f800000;
                    data_7[6] = fpu_val_5_2;
                    data_7[0xc] = fpu_val_6_14;
                    long double fpu_val_6_16 = item_18_1 - context;
                    data_7[0x12] = fpu_val_5_2;
                    data_7[1] = fpu_val_6_16;
                    data_7[7] = fpu_val_6_16;
                    long double fpu_val_6_18 = item_18_1 + context;
                    data_7[0xd] = fpu_val_6_18;
                    data_7[0x13] = fpu_val_6_18;
                    data_7[8] = fpu_val_7_16;
                    data_7[2] = fpu_val_7_16;
                    data_7[0xe] = fpu_val_7_16;
                    data_7[0x14] = fpu_val_7_16;
                    memcpy(&data_7[0x18], &data_7[6], 0x18);
                    data_8 = &data_7[0x24];
                    memcpy(&data_7[0x1e], &data_7[0xc], 0x18);
                }

                temp_1 -= 0x1c;

                if (temp_1 < context_val + 0x57c)
                    temp_1 = &temp_1[*(context_val + 0xe3c) * 7];

                (&item_10)[flagP3] = data_8;
                int32_t data_10 = flagP3 * 0x51;
                *(context_val + ((flagP3 * 0x51 + *(context_val + (data_10 << 2) + 0x6c)) << 2) + 0x70) = temp_1[2];
                *(context_val + (data_10 << 2) + 0x6c) += 1;
                flag_3_1 = item_2c_1 + 1 < *(context_val + 0xe3c);
                item_2c_1 += 1;
            } while (flag_3_1);
        }

        int32_t* data_14 = *(context_val + 0x56cc);
        (*(*data_14 + 0x10))(data_14);
        int32_t data_15 = *(context_val + 0x5650);

        if (data_15 == 1)
        {
            *(context_val + 0x5658) = g_bcaae0 * g_bcabec;
            *(context_val + 0x565c) = g_bcaae4 * g_bcabec;
            long double fpu_val_7_26 = g_bcaae8 * g_bcabec;
            *(context_val + 0x5664) = 0;
            *(context_val + 0x5660) = fpu_val_7_26;
            *(context_val + 0x5668) = g_bcaaec * g_bcabec;
            *(context_val + 0x566c) = g_bcaaf0 * g_bcabec;
            long double fpu_val_7_32 = g_bcaaf4 * g_bcabec;
            *(context_val + 0x5674) = 0;
            *(context_val + 0x5670) = fpu_val_7_32;
            *(context_val + 0x5678) = g_bcaaf8 * g_bcabec;
            *(context_val + 0x567c) = g_bcaafc * g_bcabec;
            long double fpu_val_7_38 = g_bcab00 * g_bcabec;
            *(context_val + 0x5684) = 0;
            *(context_val + 0x5680) = fpu_val_7_38;
            return data_15;
        }

        data_4 = g_bcabec;
        *(context_val + 0x565c) = 0;
        *(context_val + 0x5658) = data_4;
        *(context_val + 0x5660) = 0;
        *(context_val + 0x5664) = 0;
        *(context_val + 0x5668) = 0;
        int32_t entity_12 = g_bcabec;
        *(context_val + 0x5670) = 0;
        *(context_val + 0x566c) = entity_12;
        *(context_val + 0x5674) = 0;
        *(context_val + 0x5678) = 0;
        *(context_val + 0x567c) = 0;
        int32_t temp_3 = g_bcabec;
        *(context_val + 0x5684) = 0;
        *(context_val + 0x5680) = temp_3;
    }

    return data_4;
}

// Original IGI.EXE function: Light_ApplyLightmap_12 (VA 0x0052E2D0; static CFG gate FAIL, CFG score 0.765).
#include "Light_ApplyLightmap_12.h"
int32_t Light_ApplyLightmap_12(int32_t context , float param_2)

{
    int32_t data_val = *(param_2 + 0x4ab4);
    int32_t item_e8 = 0;

    if (data_val > 0)
    {
        int32_t* source_1 = param_2 + 0x40;
        int32_t* item_ec_1 = source_1;
        bool flag_0_1;

        do
        {
            int32_t i = 0;

            if (data_val > 0)
            {
                do
                {
                    int32_t data_1 = source_1[0xa];
                    source_1[6] = 0;

                    if (!data_1)
                    {
                        Light_RenderLensflare_13(param_2, source_1);
                        int32_t item_104_1 = 0;
                        int32_t item_108_1 = 0;
                        int32_t item_10c_1 = 0;
                        void item_8;
                        Light_UpdateGlobalLight_12(param_2, source_1, item_8, context, return_addr);
                    }

                    i += 1;
                    source_1 = &source_1[0xc];
                } while (i < *(param_2 + 0x4ab4));
            }

            data_val = *(param_2 + 0x4ab4);
            source_1 = &item_ec_1[0x60];
            flag_0_1 = item_e8 + 1 < data_val;
            item_e8 += 1;
            item_ec_1 = source_1;
        } while (flag_0_1);
    }

    int32_t item_ec_2 = 0;
    double item_c8;

    if (*(param_2 + 0x4abc) > 0)
    {
        int32_t* temp_1 = param_2 + 0xc48;
        bool flag_6_1;

        do
        {
            long double fpu_val_7_1 = *(temp_1 - 8);
            int32_t item_d8_1 = *temp_1;
            int32_t item_dc_1 = 0;
            long double fpu_val_6_1 = temp_1[6];
            int32_t item_d4_1 = temp_1[1];
            double* entity_4 = &temp_1[0xa];
            double* item_e8_1 = entity_4;
            int32_t item_e4_1 = 4;
            bool flag_4_1;

            do
            {
                int32_t i_5 = 3;
                int32_t i_1;

                do
                {
                    long double f1_1 = *entity_4;
                    fpu_val_7_1 - f1_1;

                    if (!(*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                        fpu_val_7_1 = *entity_4;

                    long double fpu_val_6_3 = entity_4[1];
                    long double f3_1 = item_d8_1;
                    fpu_val_6_3 - f3_1;

                    if (*(&((fpu_val_6_3 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_3, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_3 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        item_d8_1 = entity_4[1];
                        int32_t item_d4_2 = *(entity_4 + 0xc);
                    }

                    entity_4 = &entity_4[6];
                    i_1 = i_5;
                    i_5 -= 1;
                } while (i_1 != 1);
                entity_4 = &item_e8_1[0x18];
                flag_4_1 = item_e4_1 != 1;
                item_e8_1 = entity_4;
                item_e4_1 -= 1;
            } while (flag_4_1);
            long double f7_1 = *(temp_1 + 0x58);
            fpu_val_7_1 - f7_1;

            if (*(&((fpu_val_7_1 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f7_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double fpu_val_7_4 = fpu_val_6_1 + fpu_val_6_1 + item_d8_1;
                long double f8_1 = *(temp_1 + 0x60);
                fpu_val_7_4 - f8_1;

                if (!(*(&((fpu_val_7_4 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_4, f8_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    memcpy(&item_c8, &temp_1[0x16], 0x30);
                    memcpy(&temp_1[0x16], &temp_1[0x5e], 0x30);
                    memcpy(&temp_1[0x5e], &item_c8, 0x30);
                    void item_68;
                    memcpy(&item_68, &temp_1[0x22], 0x30);
                    memcpy(&temp_1[0x22], &temp_1[0x6a], 0x30);
                    memcpy(&temp_1[0x6a], &item_68, 0x30);
                    void item_98;
                    memcpy(&item_98, &temp_1[0x46], 0x30);
                    memcpy(&temp_1[0x46], &temp_1[0x8e], 0x30);
                    memcpy(&temp_1[0x8e], &item_98, 0x30);
                    void item_38;
                    memcpy(&item_38, &temp_1[0x52], 0x30);
                    memcpy(&temp_1[0x52], &temp_1[0x9a], 0x30);
                    memcpy(&temp_1[0x9a], &item_38, 0x30);
                }
            }

            temp_1 = &temp_1[0xc0];
            flag_6_1 = item_ec_2 + 1 < *(param_2 + 0x4abc);
            item_ec_2 += 1;
        } while (flag_6_1);
    }

    int32_t item_ec_3 = 0;

    if (*(param_2 + 0x4abc) > 0)
    {
        int32_t* source_11 = param_2 + 0xc60;
        bool flag_3_1;

        do
        {
            int32_t item_e4_2 = 4;
            bool flag_2_1;

            do
            {
                int32_t i_6 = 4;
                int32_t i_2;

                do
                {
                    int32_t data_17 = *source_11;
                    int32_t item_dc_2 = 0;
                    long double fpu_val_7_5 = (data_17 >> 1);
                    item_c8 = fpu_val_7_5 + *(source_11 - 0x20);
                    double item_c0_1 = fpu_val_7_5 + *(source_11 - 0x18);
                    double item_b8_1 = *(param_2 + 0x4a94);
                    source_11[-4] = Light_SampleLightmap_11(param_2, &item_c8, data_17);
                    source_11 = &source_11[0xc];
                    i_2 = i_6;
                    i_6 -= 1;
                } while (i_2 != 1);
                flag_2_1 = item_e4_2 != 1;
                item_e4_2 -= 1;
            } while (flag_2_1);
            flag_3_1 = item_ec_3 + 1 < *(param_2 + 0x4abc);
            item_ec_3 += 1;
        } while (flag_3_1);
    }

    int32_t result = *(param_2 + 0x4abc);
    int32_t entity_10 = 0;
    int32_t item_ec_4 = 0;

    if (result > 0)
    {
        int32_t* dest_10 = param_2 + 0xc5c;
        int32_t* item_e4_3 = dest_10;

        do
        {
            int32_t item_dc_3 = 0;
            long double fpu_val_7_9 = dest_10[1];
            long double f0_1 = 8388608.0;
            fpu_val_7_9 - f0_1;

            if (*(&((fpu_val_7_9 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_9 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                *(param_2 + 0x4ab8) = *dest_10;

            int32_t i_3 = 0;
            int32_t* dest_11 = &dest_10[-1];
            int32_t i_4 = 0;

            do
            {
                for (int32_t j = 0; j < 4; )
                {
                    if (dest_11[4])
                        *dest_11 = 0;
                    else
                    {
                        Light_SampleLightmap_12(param_2, entity_10, i_3, j);
                        Light_UpdateGlobalLight_12(param_2, &dest_11[-6], item_ec_4, i_4, j);
                        entity_10 = item_ec_4;
                        i_3 = i_4;
                    }

                    j += 1;
                    dest_11 = &dest_11[0xc];
                }

                i_3 += 1;
                i_4 = i_3;
            } while (i_3 < 4);

            result = *(param_2 + 0x4abc);
            entity_10 += 1;
            dest_10 = &item_e4_3[0xc0];
            item_ec_4 = entity_10;
            item_e4_3 = dest_10;
        } while (entity_10 < result);
    }

    return result;
}

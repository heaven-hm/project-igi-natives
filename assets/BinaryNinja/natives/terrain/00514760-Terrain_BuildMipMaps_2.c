// Original IGI.EXE function: Terrain_BuildMipMaps_2 (VA 0x00514760; static CFG gate FAIL, CFG score 0.731).
#include "Terrain_BuildMipMaps_2.h"
uint32_t Terrain_BuildMipMaps_2(char context , char param_2 , int32_t param_3 , int32_t* param_4 )

{
    void arg_44;
    void* item_40 = &arg_44;
    g_a7e070 += 1;
    char entity_2 = context;
    void arg_4;
    void* item_44 = &arg_4;
    void arg_84;
    void* item_3c = &arg_84;
    int32_t temp_val = param_3;
    uint32_t data_1 = entity_2;
    uint32_t dest_1 = param_2;
    uint32_t source_1 = temp_val;
    uint32_t context_2 = data_1 | dest_1 | source_1;
    uint32_t flagP2 = data_1 & dest_1 & source_1;
    uint32_t item_a0 = flagP2;

    if (flagP2)
    {
        g_a7e070 -= 1;
        return data_1;
    }

    void item_174;
    void item_134;
    void item_f4;
    float item_90;
    float item_8c;
    float item_88;
    float item_68;
    float item_64;
    float item_60;
    float item_5c;
    float item_58;
    float item_54;
    uint32_t item_50;

    if (context_2 & 0x10)
    {
        void** source_3 = &item_44;
        int32_t data_5;
        int32_t temp_1;
        temp_1 = HIGHD((data_1 & 0x10) + (dest_1 & 0x10) + (source_1 & 0x10));
        data_5 = LOWD((data_1 & 0x10) + (dest_1 & 0x10) + (source_1 & 0x10));
        int32_t i_5 = 3;
        void item_30;
        float* temp_3 = &item_30;
        int32_t data_7 = (data_5 + (temp_1 & 0xf)) >> 4;
        int32_t item_48_1 = data_7;
        int32_t i;

        do
        {
            float* entity_3 = *source_3;
            entity_3[9] = temp_3;

            if (entity_3[8] & 0x10)
            {
                *temp_3 = *entity_3;
                temp_3[1] = entity_3[1];
                temp_3[2] = entity_3[2];
                data_7 = item_48_1;
            }
            else
            {
                temp_3[2] = 1.0f / entity_3[2];
                *temp_3 = (*entity_3 - g_c311b0) / (g_c311a4 * entity_3[2]);
                temp_3[1] = (entity_3[1] - g_c311b4) / (g_c311a0 * entity_3[2]);
            }

            int32_t item_94_1 = 0;
            int32_t item_9c_1 = 0;
            int32_t item_34_1 = 0;
            int32_t item_4c_1 = 0;
            temp_3 = &temp_3[3];
            source_3 = &source_3[1];
            entity_3[0xa] = entity_3[4] >> 0x10;
            entity_3[0xb] = entity_3[4] >> 8;
            entity_3[0xc] = entity_3[4];
            entity_3[0xd] = entity_3[6];
            entity_3[0xe] = entity_3[7];
            item_50 = entity_3[5] >> 0x18;
            i = i_5;
            i_5 -= 1;
            entity_3[0xf] = item_50;
        } while (i != 1);

        if (data_7 != 2)
        {
            void* data_27;
            float* temp_16;
            void* flagP5;

            if (context & 0x10)
            {
                data_27 = &arg_44;
                flagP5 = &arg_84;
                temp_16 = &arg_4;
            }
            else if (!(param_2 & 0x10))
            {
                data_27 = &arg_4;
                flagP5 = &arg_44;
                temp_16 = &arg_84;
            }
            else
            {
                data_27 = &arg_84;
                flagP5 = &arg_4;
                temp_16 = &arg_44;
            }

            memcpy(&item_90, temp_16, 0x40);
            long double fpu_val_7_59 = g_bcadc0;
            float item_c;
            int32_t* item_6c_1 = &item_c;
            int32_t* entity_8 = temp_16[9];
            item_c = *entity_8;
            float source_7 = entity_8[1];
            float entity_9 = entity_8[2];
            float* entity_10 = *(data_27 + 0x24);
            float* source_8 = temp_16[9];
            long double fpu_val_7_61 = (fpu_val_7_59 - entity_10[2]) / (source_8[2] - entity_10[2]);
            *source_8 = (*source_8 - *entity_10) * fpu_val_7_61 + *entity_10;
            void* entity_11 = temp_16[9];
            void* source_9 = *(data_27 + 0x24);
            *(entity_11 + 4) = (*(entity_11 + 4) - *(source_9 + 4)) * fpu_val_7_61 + *(source_9 + 4);
            void* entity_12 = temp_16[9];
            void* source_10 = *(data_27 + 0x24);
            *(entity_12 + 8) = (*(entity_12 + 8) - *(source_10 + 8)) * fpu_val_7_61 + *(source_10 + 8);
            temp_16[0xa] = (temp_16[0xa] - *(data_27 + 0x28)) * fpu_val_7_61 + *(data_27 + 0x28);
            temp_16[0xb] = (temp_16[0xb] - *(data_27 + 0x2c)) * fpu_val_7_61 + *(data_27 + 0x2c);
            temp_16[0xc] = (temp_16[0xc] - *(data_27 + 0x30)) * fpu_val_7_61 + *(data_27 + 0x30);
            temp_16[0xd] = (temp_16[0xd] - *(data_27 + 0x34)) * fpu_val_7_61 + *(data_27 + 0x34);
            temp_16[0xe] = (temp_16[0xe] - *(data_27 + 0x38)) * fpu_val_7_61 + *(data_27 + 0x38);
            temp_16[0xf] = (temp_16[0xf] - *(data_27 + 0x3c)) * fpu_val_7_61 + *(data_27 + 0x3c);
            float* data_28 = temp_16[9];
            char item_98_4 = 1;
            long double fpu_val_7_64 = 1.0f / data_28[2];
            temp_16[2] = fpu_val_7_64;
            *temp_16 = fpu_val_7_64 * *data_28 * g_c311a4 + g_c311b0;
            temp_16[1] = data_28[1] * temp_16[2] * g_c311a0 + g_c311b4;
            long double fpu_val_7_72 = *temp_16;
            long double f15_1 = g_bcabd0;
            fpu_val_7_72 - f15_1;

            if (!(*(&((fpu_val_7_72 < f15_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_72, f15_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_72 == f15_1 ? 1 : 0) << 0xe) + 1) & 1))
                item_98_4 = 0;

            long double fpu_val_7_73 = temp_16[1];
            long double f18_1 = g_bcabd4;
            fpu_val_7_73 - f18_1;
            char context_23;

            context_23 = !(*(&((fpu_val_7_73 < f18_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_73, f18_1) ? 1 : 0) << 0xa
                | (fpu_val_7_73 == f18_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double fpu_val_7_74 = *temp_16;
            long double f25_1 = g_bcabd8;
            fpu_val_7_74 - f25_1;
            char entity_13;

            entity_13 = *(&((fpu_val_7_74 < f25_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_74, f25_1) ? 1 : 0) << 0xa
                | (fpu_val_7_74 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double fpu_val_7_75 = temp_16[1];
            long double f30_1 = g_bcabdc;
            fpu_val_7_75 - f30_1;
            char data_30;

            data_30 = *(&((fpu_val_7_75 < f30_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_75, f30_1) ? 1 : 0) << 0xa
                | (fpu_val_7_75 == f30_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            temp_16[8] = ((data_30 << 1 | entity_13) << 1 | context_23) << 1 | item_98_4;
            float* data_32 = *(flagP5 + 0x24);
            long double fpu_val_7_78 = (g_bcadc0 - data_32[2]) / (entity_9 - data_32[2]);
            item_c = (item_c - *data_32) * fpu_val_7_78 + *data_32;
            void* data_33 = *(flagP5 + 0x24);
            float item_8_2 = (source_7 - *(data_33 + 4)) * fpu_val_7_78 + *(data_33 + 4);
            void* data_34 = *(flagP5 + 0x24);
            float item_68_1 = (item_68 - *(flagP5 + 0x28)) * fpu_val_7_78 + *(flagP5 + 0x28);
            float item_64_1 = (item_64 - *(flagP5 + 0x2c)) * fpu_val_7_78 + *(flagP5 + 0x2c);
            float item_60_1 = (item_60 - *(flagP5 + 0x30)) * fpu_val_7_78 + *(flagP5 + 0x30);
            float item_5c_1 = (item_5c - *(flagP5 + 0x34)) * fpu_val_7_78 + *(flagP5 + 0x34);
            float item_58_1 = (item_58 - *(flagP5 + 0x38)) * fpu_val_7_78 + *(flagP5 + 0x38);
            long double fpu_val_7_80 = fpu_val_7_78 * (item_54 - *(flagP5 + 0x3c)) + *(flagP5 + 0x3c);
            long double fpu_val_6_156 = 1.0f / ((entity_9 - *(data_34 + 8)) * fpu_val_7_78 + *(data_34 + 8));
            item_88 = fpu_val_6_156;
            long double fpu_val_6_159 = fpu_val_6_156 * item_c * g_c311a4 + g_c311b0;
            item_90 = fpu_val_6_159;
            long double fpu_val_5_4 = item_88 * item_8_2 * g_c311a0 + g_c311b4;
            char item_98_5 = 1;
            item_8c = fpu_val_5_4;
            long double f35_1 = g_bcabd0;
            fpu_val_6_159 - f35_1;

            if (!(*(&((fpu_val_6_159 < f35_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_159, f35_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_159 == f35_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1))
                item_98_5 = 0;

            long double f37_1 = g_bcabd4;
            fpu_val_5_4 - f37_1;
            char context_24;

            context_24 = !(*(&((fpu_val_5_4 < f37_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_4, f37_1) ? 1 : 0) << 0xa
                | (fpu_val_5_4 == f37_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

            long double f39_1 = g_bcabd8;
            fpu_val_6_159 - f39_1;
            char entity_15;

            entity_15 = *(&((fpu_val_6_159 < f39_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_159, f39_1) ? 1 : 0) << 0xa
                | (fpu_val_6_159 == f39_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

            long double fpu_val_6_160 = item_8c;
            long double f41_1 = g_bcabdc;
            fpu_val_6_160 - f41_1;
            char data_36;

            data_36 = *(&((fpu_val_6_160 < f41_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_160, f41_1) ? 1 : 0) << 0xa
                | (fpu_val_6_160 == f41_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

            char item_70_1 = ((data_36 << 1 | entity_15) << 1 | context_24) << 1 | item_98_5;
            uint32_t data_39 = context;
            uint32_t source_12 = param_2;
            uint32_t entity_17 = param_3;
            context_2 = data_39 | source_12 | entity_17;
            void** entity_18 = &item_44;
            int32_t i_4 = 3;
            int32_t i_1;

            do
            {
                void* data_42 = *entity_18;
                entity_18 = &entity_18[1];
                i_1 = i_4;
                i_4 -= 1;
                *(data_42 + 0x28) = *(data_42 + 8) * *(data_42 + 0x28);
                *(data_42 + 0x2c) = *(data_42 + 8) * *(data_42 + 0x2c);
                *(data_42 + 0x30) = *(data_42 + 8) * *(data_42 + 0x30);
                *(data_42 + 0x34) = *(data_42 + 8) * *(data_42 + 0x34);
                *(data_42 + 0x38) = *(data_42 + 8) * *(data_42 + 0x38);
                *(data_42 + 0x3c) = *(data_42 + 8) * *(data_42 + 0x3c);
            } while (i_1 != 1);
            int32_t* item_b4_1 = param_4;
            item_68 = item_88 * item_68_1;
            memcpy(&item_f4, temp_16, 0x40);
            item_64 = item_88 * item_64_1;
            item_60 = item_88 * item_60_1;
            item_5c = item_88 * item_5c_1;
            item_58 = item_88 * item_58_1;
            item_54 = item_88 * fpu_val_7_80;
            memcpy(&item_134, &item_90, 0x40);
            memcpy(&item_174, flagP5, 0x40);
            data_1 = Terrain_BuildMipMaps_2();
            temp_val = param_3;
            entity_2 = context;
            flagP2 = data_39 & source_12 & entity_17;
        }
        else
        {
            void* data_11;
            float* entity_4;
            float* source_4;
            void* dest_3;

            if (!(context & 0x10))
            {
                data_11 = &arg_4;
                dest_3 = &arg_4;
                source_4 = &arg_44;
                entity_4 = &arg_84;
            }
            else if (param_2 & 0x10)
            {
                data_11 = &arg_84;
                dest_3 = &arg_84;
                source_4 = &arg_4;
                entity_4 = &arg_44;
            }
            else
            {
                data_11 = &arg_44;
                dest_3 = &arg_44;
                source_4 = &arg_84;
                entity_4 = &arg_4;
            }

            float* temp_4 = *(data_11 + 0x24);
            float* context_16 = source_4[9];
            long double fpu_val_7_15 = (g_bcadc0 - temp_4[2]) / (context_16[2] - temp_4[2]);
            *context_16 = (*context_16 - *temp_4) * fpu_val_7_15 + *temp_4;
            void* temp_5 = source_4[9];
            void* context_17 = *(data_11 + 0x24);
            *(temp_5 + 4) = (*(temp_5 + 4) - *(context_17 + 4)) * fpu_val_7_15 + *(context_17 + 4);
            void* temp_6 = source_4[9];
            void* context_18 = *(data_11 + 0x24);
            *(temp_6 + 8) = (*(temp_6 + 8) - *(context_18 + 8)) * fpu_val_7_15 + *(context_18 + 8);
            source_4[0xa] = (source_4[0xa] - *(data_11 + 0x28)) * fpu_val_7_15 + *(data_11 + 0x28);
            source_4[0xb] = (source_4[0xb] - *(data_11 + 0x2c)) * fpu_val_7_15 + *(data_11 + 0x2c);
            source_4[0xc] = (source_4[0xc] - *(data_11 + 0x30)) * fpu_val_7_15 + *(data_11 + 0x30);
            source_4[0xd] = (source_4[0xd] - *(data_11 + 0x34)) * fpu_val_7_15 + *(data_11 + 0x34);
            source_4[0xe] = (source_4[0xe] - *(data_11 + 0x38)) * fpu_val_7_15 + *(data_11 + 0x38);
            float* data_12 = source_4[9];
            source_4[0xf] = (source_4[0xf] - *(data_11 + 0x3c)) * fpu_val_7_15 + *(data_11 + 0x3c);
            long double fpu_val_7_18 = 1.0f / data_12[2];
            source_4[2] = fpu_val_7_18;
            *source_4 = fpu_val_7_18 * g_c311a4 * *data_12 + g_c311b0;
            source_4[1] = g_c311a0 * data_12[1] * source_4[2] + g_c311b4;
            long double fpu_val_7_26 = *source_4;
            long double f6_1 = g_bcabd0;
            fpu_val_7_26 - f6_1;
            char item_98_2 = 1;

            if (!(*(&((fpu_val_7_26 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_26, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_26 == f6_1 ? 1 : 0) << 0xe) + 1) & 1))
                item_98_2 = 0;

            long double fpu_val_7_27 = source_4[1];
            long double f10_1 = g_bcabd4;
            fpu_val_7_27 - f10_1;
            char context_19;

            context_19 = !(*(&((fpu_val_7_27 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_27, f10_1) ? 1 : 0) << 0xa
                | (fpu_val_7_27 == f10_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double fpu_val_7_28 = *source_4;
            long double f19_1 = g_bcabd8;
            fpu_val_7_28 - f19_1;
            char temp_7;

            temp_7 = *(&((fpu_val_7_28 < f19_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_28, f19_1) ? 1 : 0) << 0xa
                | (fpu_val_7_28 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double fpu_val_7_29 = source_4[1];
            long double f26_1 = g_bcabdc;
            fpu_val_7_29 - f26_1;
            char data_14;

            data_14 = *(&((fpu_val_7_29 < f26_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_29, f26_1) ? 1 : 0) << 0xa
                | (fpu_val_7_29 == f26_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            source_4[8] = ((data_14 << 1 | temp_7) << 1 | context_19) << 1 | item_98_2;
            float* data_16 = *(dest_3 + 0x24);
            float* temp_9 = entity_4[9];
            long double fpu_val_7_32 = (g_bcadc0 - data_16[2]) / (temp_9[2] - data_16[2]);
            *temp_9 = (*temp_9 - *data_16) * fpu_val_7_32 + *data_16;
            void* data_17 = entity_4[9];
            void* temp_10 = *(dest_3 + 0x24);
            *(data_17 + 4) = (*(data_17 + 4) - *(temp_10 + 4)) * fpu_val_7_32 + *(temp_10 + 4);
            void* data_18 = entity_4[9];
            void* temp_11 = *(dest_3 + 0x24);
            *(data_18 + 8) = (*(data_18 + 8) - *(temp_11 + 8)) * fpu_val_7_32 + *(temp_11 + 8);
            float* data_19 = entity_4[9];
            entity_4[0xa] = (entity_4[0xa] - *(dest_3 + 0x28)) * fpu_val_7_32 + *(dest_3 + 0x28);
            entity_4[0xb] = (entity_4[0xb] - *(dest_3 + 0x2c)) * fpu_val_7_32 + *(dest_3 + 0x2c);
            entity_4[0xc] = (entity_4[0xc] - *(dest_3 + 0x30)) * fpu_val_7_32 + *(dest_3 + 0x30);
            entity_4[0xd] = (entity_4[0xd] - *(dest_3 + 0x34)) * fpu_val_7_32 + *(dest_3 + 0x34);
            entity_4[0xe] = (entity_4[0xe] - *(dest_3 + 0x38)) * fpu_val_7_32 + *(dest_3 + 0x38);
            entity_4[0xf] = (entity_4[0xf] - *(dest_3 + 0x3c)) * fpu_val_7_32 + *(dest_3 + 0x3c);
            long double fpu_val_7_35 = 1.0f / data_19[2];
            entity_4[2] = fpu_val_7_35;
            char item_98_3 = 1;
            *entity_4 = fpu_val_7_35 * *data_19 * g_c311a4 + g_c311b0;
            entity_4[1] = data_19[1] * entity_4[2] * g_c311a0 + g_c311b4;
            long double fpu_val_7_43 = *entity_4;
            long double f31_1 = g_bcabd0;
            fpu_val_7_43 - f31_1;

            if (!(*(&((fpu_val_7_43 < f31_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_43, f31_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_43 == f31_1 ? 1 : 0) << 0xe) + 1) & 1))
                item_98_3 = 0;

            long double fpu_val_7_44 = entity_4[1];
            long double f34_1 = g_bcabd4;
            fpu_val_7_44 - f34_1;
            char context_20;

            context_20 = !(*(&((fpu_val_7_44 < f34_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_44, f34_1) ? 1 : 0) << 0xa
                | (fpu_val_7_44 == f34_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double fpu_val_7_45 = *entity_4;
            long double f38_1 = g_bcabd8;
            fpu_val_7_45 - f38_1;
            char temp_12;

            temp_12 = *(&((fpu_val_7_45 < f38_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_45, f38_1) ? 1 : 0) << 0xa
                | (fpu_val_7_45 == f38_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double fpu_val_7_46 = entity_4[1];
            long double f40_1 = g_bcabdc;
            fpu_val_7_46 - f40_1;
            char data_21;

            data_21 = *(&((fpu_val_7_46 < f40_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_46, f40_1) ? 1 : 0) << 0xa
                | (fpu_val_7_46 == f40_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            entity_4[8] = ((data_21 << 1 | temp_12) << 1 | context_20) << 1 | item_98_3;
            uint32_t data_24 = context;
            uint32_t temp_15 = param_2;
            uint32_t entity_6 = param_3;
            context_2 = data_24 | temp_15 | entity_6;
            flagP2 = data_24 & temp_15 & entity_6;
            void** entity_7 = &item_44;
            int32_t i_3 = 3;
            int32_t i_2;

            do
            {
                data_1 = *entity_7;
                entity_7 = &entity_7[1];
                i_2 = i_3;
                i_3 -= 1;
                *(data_1 + 0x28) = *(data_1 + 0x28) * *(data_1 + 8);
                *(data_1 + 0x2c) = *(data_1 + 0x2c) * *(data_1 + 8);
                *(data_1 + 0x30) = *(data_1 + 0x30) * *(data_1 + 8);
                *(data_1 + 0x34) = *(data_1 + 0x34) * *(data_1 + 8);
                *(data_1 + 0x38) = *(data_1 + 0x38) * *(data_1 + 8);
                *(data_1 + 0x3c) = *(data_1 + 0x3c) * *(data_1 + 8);
            } while (i_2 != 1);
            temp_val = param_3;
            entity_2 = context;
        }
    }

    if (flagP2)
    {
        g_a7e070 -= 1;
        return data_1;
    }

    if (context_2 & 1)
    {
        context_2 = param_2;
        data_1 = entity_2;

        if ((data_1 & 1) + (context_2 & 1) + (temp_val & 1) != 2)
        {
            float* data_56;
            float* temp_20;
            float* flagP6;

            if (entity_2 & 1)
            {
                data_56 = &arg_44;
                temp_20 = &arg_84;
                flagP6 = &arg_4;
            }
            else if (!(param_2 & 1))
            {
                data_56 = &arg_4;
                temp_20 = &arg_44;
                flagP6 = &arg_84;
            }
            else
            {
                data_56 = &arg_84;
                temp_20 = &arg_4;
                flagP6 = &arg_44;
            }

            long double fpu_val_7_161 = *flagP6 - *data_56;
            long double fpu_val_6_193 = (g_bcabd0 - *data_56) / fpu_val_7_161;
            memcpy(&item_90, flagP6, 0x40);
            float item_a0_5 = fpu_val_6_193;
            *flagP6 = fpu_val_7_161 * item_a0_5 + *data_56;
            flagP6[1] = (flagP6[1] - data_56[1]) * item_a0_5 + data_56[1];
            flagP6[2] = (flagP6[2] - data_56[2]) * item_a0_5 + data_56[2];
            flagP6[0xa] = (flagP6[0xa] - data_56[0xa]) * item_a0_5 + data_56[0xa];
            flagP6[0xb] = (flagP6[0xb] - data_56[0xb]) * item_a0_5 + data_56[0xb];
            flagP6[0xc] = (flagP6[0xc] - data_56[0xc]) * item_a0_5 + data_56[0xc];
            flagP6[0xd] = (flagP6[0xd] - data_56[0xd]) * item_a0_5 + data_56[0xd];
            flagP6[0xe] = (flagP6[0xe] - data_56[0xe]) * item_a0_5 + data_56[0xe];
            flagP6[0xf] = (flagP6[0xf] - data_56[0xf]) * item_a0_5 + data_56[0xf];
            long double fpu_val_7_196 = flagP6[1];
            long double f4_1 = g_bcabd4;
            fpu_val_7_196 - f4_1;
            char context_33;

            context_33 = !(*(&((fpu_val_7_196 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_196, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_196 == f4_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double fpu_val_7_197 = *flagP6;
            long double f13_1 = g_bcabd8;
            fpu_val_7_197 - f13_1;
            char entity_20;

            entity_20 = *(&((fpu_val_7_197 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_197, f13_1) ? 1 : 0) << 0xa
                | (fpu_val_7_197 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double fpu_val_7_198 = flagP6[1];
            long double f21_1 = g_bcabdc;
            fpu_val_7_198 - f21_1;
            char data_58;

            data_58 = *(&((fpu_val_7_198 < f21_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_198, f21_1) ? 1 : 0) << 0xa
                | (fpu_val_7_198 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            int16_t data_59;
            data_59 = data_58 << 1;
            long double fpu_val_7_199 = item_90;
            data_59 |= entity_20;
            data_59 <<= 1;
            data_59 |= context_33;
            data_59 <<= 1;
            flagP6[8] = data_59;
            long double fpu_val_7_200 = fpu_val_7_199 - *temp_20;
            float item_a0_6 = (g_bcabd0 - *temp_20) / fpu_val_7_200;
            long double fpu_val_7_202 = fpu_val_7_200 * item_a0_6 + *temp_20;
            item_90 = fpu_val_7_202;
            long double fpu_val_6_200 = (item_8c - temp_20[1]) * item_a0_6 + temp_20[1];
            item_8c = fpu_val_6_200;
            item_88 = (item_88 - temp_20[2]) * item_a0_6 + temp_20[2];
            item_68 = (item_68 - temp_20[0xa]) * item_a0_6 + temp_20[0xa];
            item_64 = (item_64 - temp_20[0xb]) * item_a0_6 + temp_20[0xb];
            item_60 = (item_60 - temp_20[0xc]) * item_a0_6 + temp_20[0xc];
            item_5c = (item_5c - temp_20[0xd]) * item_a0_6 + temp_20[0xd];
            item_58 = (item_58 - temp_20[0xe]) * item_a0_6 + temp_20[0xe];
            item_54 = (item_54 - temp_20[0xf]) * item_a0_6 + temp_20[0xf];
            long double f27_1 = g_bcabd4;
            fpu_val_6_200 - f27_1;
            char context_34;

            context_34 = !(*(&((fpu_val_6_200 < f27_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_200, f27_1) ? 1 : 0) << 0xa
                | (fpu_val_6_200 == f27_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

            long double f32_1 = g_bcabd8;
            fpu_val_7_202 - f32_1;
            char entity_21;

            entity_21 = *(&((fpu_val_7_202 < f32_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_202, f32_1) ? 1 : 0) << 0xa
                | (fpu_val_7_202 == f32_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double fpu_val_7_203 = item_8c;
            long double f36_1 = g_bcabdc;
            fpu_val_7_203 - f36_1;
            char data_60;

            data_60 = *(&((fpu_val_7_203 < f36_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_203, f36_1) ? 1 : 0) << 0xa
                | (fpu_val_7_203 == f36_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            char item_70_2 = ((data_60 << 1 | entity_21) << 1 | context_34) << 1;
            uint32_t data_63 = context;
            uint32_t source_20 = param_2;
            uint32_t entity_23 = param_3;
            context_2 = data_63 | source_20 | entity_23;
            int32_t* item_b4_2 = param_4;
            memcpy(&item_f4, flagP6, 0x40);
            memcpy(&item_134, &item_90, 0x40);
            memcpy(&item_174, temp_20, 0x40);
            Terrain_BuildMipMaps_2();
            temp_val = param_3;
            entity_2 = context;
            data_1 = data_63 & source_20 & entity_23;
        }
        else
        {
            float* data_47;
            float* entity_19;
            float* source_15;
            float* dest_4;

            if (!(entity_2 & 1))
            {
                data_47 = &arg_4;
                source_15 = &arg_4;
                dest_4 = &arg_44;
                entity_19 = &arg_84;
            }
            else if (param_2 & 1)
            {
                data_47 = &arg_84;
                source_15 = &arg_84;
                dest_4 = &arg_4;
                entity_19 = &arg_44;
            }
            else
            {
                data_47 = &arg_44;
                source_15 = &arg_44;
                dest_4 = &arg_84;
                entity_19 = &arg_4;
            }

            long double fpu_val_7_83 = *dest_4 - *data_47;
            float item_a0_3 = (g_bcabd0 - *data_47) / fpu_val_7_83;
            *dest_4 = fpu_val_7_83 * item_a0_3 + *data_47;
            dest_4[1] = (dest_4[1] - data_47[1]) * item_a0_3 + data_47[1];
            dest_4[2] = (dest_4[2] - data_47[2]) * item_a0_3 + data_47[2];
            dest_4[0xa] = (dest_4[0xa] - data_47[0xa]) * item_a0_3 + data_47[0xa];
            dest_4[0xb] = (dest_4[0xb] - data_47[0xb]) * item_a0_3 + data_47[0xb];
            dest_4[0xc] = (dest_4[0xc] - data_47[0xc]) * item_a0_3 + data_47[0xc];
            dest_4[0xd] = (dest_4[0xd] - data_47[0xd]) * item_a0_3 + data_47[0xd];
            dest_4[0xe] = (dest_4[0xe] - data_47[0xe]) * item_a0_3 + data_47[0xe];
            dest_4[0xf] = (dest_4[0xf] - data_47[0xf]) * item_a0_3 + data_47[0xf];
            long double fpu_val_7_118 = dest_4[1];
            long double f1_1 = g_bcabd4;
            fpu_val_7_118 - f1_1;
            char context_29;

            context_29 = !(*(&((fpu_val_7_118 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_118, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_118 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double fpu_val_7_119 = *dest_4;
            long double f5_1 = g_bcabd8;
            fpu_val_7_119 - f5_1;
            char temp_18;

            temp_18 = *(&((fpu_val_7_119 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_119, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_7_119 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double fpu_val_7_120 = dest_4[1];
            long double f14_1 = g_bcabdc;
            fpu_val_7_120 - f14_1;
            char data_49;

            data_49 = *(&((fpu_val_7_120 < f14_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_120, f14_1) ? 1 : 0) << 0xa
                | (fpu_val_7_120 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            int16_t data_50;
            data_50 = data_49 << 1;
            data_50 |= temp_18;
            data_50 <<= 1;
            data_50 |= context_29;
            data_50 <<= 1;
            dest_4[8] = data_50;
            long double fpu_val_7_122 = *entity_19 - *source_15;
            float item_a0_4 = (g_bcabd0 - *source_15) / fpu_val_7_122;
            *entity_19 = fpu_val_7_122 * item_a0_4 + *source_15;
            entity_19[1] = (entity_19[1] - source_15[1]) * item_a0_4 + source_15[1];
            entity_19[2] = (entity_19[2] - source_15[2]) * item_a0_4 + source_15[2];
            entity_19[0xa] = (entity_19[0xa] - source_15[0xa]) * item_a0_4 + source_15[0xa];
            entity_19[0xb] = (entity_19[0xb] - source_15[0xb]) * item_a0_4 + source_15[0xb];
            entity_19[0xc] = (entity_19[0xc] - source_15[0xc]) * item_a0_4 + source_15[0xc];
            entity_19[0xd] = (entity_19[0xd] - source_15[0xd]) * item_a0_4 + source_15[0xd];
            entity_19[0xe] = (entity_19[0xe] - source_15[0xe]) * item_a0_4 + source_15[0xe];
            entity_19[0xf] = (entity_19[0xf] - source_15[0xf]) * item_a0_4 + source_15[0xf];
            long double fpu_val_7_157 = entity_19[1];
            long double f22_1 = g_bcabd4;
            fpu_val_7_157 - f22_1;
            char context_30;

            context_30 = !(*(&((fpu_val_7_157 < f22_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_157, f22_1) ? 1 : 0) << 0xa
                | (fpu_val_7_157 == f22_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double fpu_val_7_158 = *entity_19;
            long double f28_1 = g_bcabd8;
            fpu_val_7_158 - f28_1;
            char temp_19;

            temp_19 = *(&((fpu_val_7_158 < f28_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_158, f28_1) ? 1 : 0) << 0xa
                | (fpu_val_7_158 == f28_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double fpu_val_7_159 = entity_19[1];
            long double f33_1 = g_bcabdc;
            fpu_val_7_159 - f33_1;
            char data_51;

            data_51 = *(&((fpu_val_7_159 < f33_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_159, f33_1) ? 1 : 0) << 0xa
                | (fpu_val_7_159 == f33_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            entity_19[8] = ((data_51 << 1 | temp_19) << 1 | context_30) << 1;
            entity_2 = context;
            temp_val = param_3;
            uint32_t data_54 = entity_2;
            uint32_t dest_6 = param_2;
            uint32_t source_17 = temp_val;
            context_2 = data_54 | dest_6 | source_17;
            data_1 = data_54 & dest_6 & source_17;
        }

        if (data_1)
        {
            g_a7e070 -= 1;
            return data_1;
        }
    }

    if (context_2 & 2)
    {
        context_2 = param_2;
        data_1 = entity_2;
        int32_t data_69;
        int32_t temp_22;
        temp_22 = HIGHD((data_1 & 2) + (context_2 & 2) + (temp_val & 2));
        data_69 = LOWD((data_1 & 2) + (context_2 & 2) + (temp_val & 2));
        int32_t data_71 = (data_69 - temp_22) >> 1;

        if (data_71 != 2)
        {
            float* data_81;
            float* temp_25;
            float* flagP7;

            if (entity_2 & 2)
            {
                data_81 = &arg_44;
                temp_25 = &arg_84;
                flagP7 = &arg_4;
            }
            else if (!(param_2 & 2))
            {
                data_81 = &arg_4;
                temp_25 = &arg_44;
                flagP7 = &arg_84;
            }
            else
            {
                data_81 = &arg_84;
                temp_25 = &arg_4;
                flagP7 = &arg_44;
            }

            long double fpu_val_7_218 = (g_bcabd4 - data_81[1]) / (flagP7[1] - data_81[1]);
            memcpy(&item_90, flagP7, 0x40);
            *flagP7 = (*flagP7 - *data_81) * fpu_val_7_218 + *data_81;
            flagP7[1] = (flagP7[1] - data_81[1]) * fpu_val_7_218 + data_81[1];
            flagP7[2] = (flagP7[2] - data_81[2]) * fpu_val_7_218 + data_81[2];
            flagP7[0xa] = (flagP7[0xa] - data_81[0xa]) * fpu_val_7_218 + data_81[0xa];
            flagP7[0xb] = (flagP7[0xb] - data_81[0xb]) * fpu_val_7_218 + data_81[0xb];
            flagP7[0xc] = (flagP7[0xc] - data_81[0xc]) * fpu_val_7_218 + data_81[0xc];
            flagP7[0xd] = (flagP7[0xd] - data_81[0xd]) * fpu_val_7_218 + data_81[0xd];
            flagP7[0xe] = (flagP7[0xe] - data_81[0xe]) * fpu_val_7_218 + data_81[0xe];
            flagP7[0xf] = (flagP7[0xf] - data_81[0xf]) * fpu_val_7_218 + data_81[0xf];
            long double fpu_val_7_220 = *flagP7;
            long double f8_1 = g_bcabd8;
            fpu_val_7_220 - f8_1;
            char entity_26;

            entity_26 = *(&((fpu_val_7_220 < f8_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_220, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_7_220 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double fpu_val_7_221 = flagP7[1];
            long double f16_1 = g_bcabdc;
            fpu_val_7_221 - f16_1;
            char data_83;

            data_83 = *(&((fpu_val_7_221 < f16_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_221, f16_1) ? 1 : 0) << 0xa
                | (fpu_val_7_221 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            int16_t data_84;
            data_84 = data_83 << 1;
            data_84 |= entity_26;
            data_84 <<= 2;
            flagP7[8] = data_84;
            long double fpu_val_7_223 = item_8c - temp_25[1];
            float item_a0_8 = (g_bcabd4 - temp_25[1]) / fpu_val_7_223;
            item_90 = (item_90 - *temp_25) * item_a0_8 + *temp_25;
            long double fpu_val_7_225 = fpu_val_7_223 * item_a0_8 + temp_25[1];
            item_8c = fpu_val_7_225;
            item_88 = (item_88 - temp_25[2]) * item_a0_8 + temp_25[2];
            item_68 = (item_68 - temp_25[0xa]) * item_a0_8 + temp_25[0xa];
            item_64 = (item_64 - temp_25[0xb]) * item_a0_8 + temp_25[0xb];
            item_60 = (item_60 - temp_25[0xc]) * item_a0_8 + temp_25[0xc];
            item_5c = (item_5c - temp_25[0xd]) * item_a0_8 + temp_25[0xd];
            item_58 = (item_58 - temp_25[0xe]) * item_a0_8 + temp_25[0xe];
            item_54 = (item_54 - temp_25[0xf]) * item_a0_8 + temp_25[0xf];
            long double fpu_val_6_350 = item_90;
            long double f23_1 = g_bcabd8;
            fpu_val_6_350 - f23_1;
            char entity_27;

            entity_27 = *(&((fpu_val_6_350 < f23_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_350, f23_1) ? 1 : 0) << 0xa
                | (fpu_val_6_350 == f23_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

            long double f29_1 = g_bcabdc;
            fpu_val_7_225 - f29_1;
            char data_85;

            data_85 = *(&((fpu_val_7_225 < f29_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_225, f29_1) ? 1 : 0) << 0xa
                | (fpu_val_7_225 == f29_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            uint32_t source_28 = param_2;
            char item_70_3 = (data_85 << 1 | entity_27) << 2;
            uint32_t data_88 = context;
            uint32_t entity_29 = param_3;
            int32_t* item_b4_3 = param_4;
            context_2 = data_88 | source_28 | entity_29;
            memcpy(&item_f4, flagP7, 0x40);
            memcpy(&item_134, &item_90, 0x40);
            memcpy(&item_174, temp_25, 0x40);
            Terrain_BuildMipMaps_2();
            temp_val = param_3;
            entity_2 = context;
            data_1 = data_88 & source_28 & entity_29;
        }
        else
        {
            float* data_72;
            float* entity_25;
            float* source_23;
            float* dest_7;

            if (!(data_71 & entity_2))
            {
                data_72 = &arg_4;
                source_23 = &arg_4;
                dest_7 = &arg_44;
                entity_25 = &arg_84;
            }
            else if (param_2 & 2)
            {
                data_72 = &arg_84;
                source_23 = &arg_84;
                dest_7 = &arg_4;
                entity_25 = &arg_44;
            }
            else
            {
                data_72 = &arg_44;
                source_23 = &arg_44;
                dest_7 = &arg_84;
                entity_25 = &arg_4;
            }

            long double fpu_val_7_206 = (g_bcabd4 - data_72[1]) / (dest_7[1] - data_72[1]);
            *dest_7 = (*dest_7 - *data_72) * fpu_val_7_206 + *data_72;
            dest_7[1] = (dest_7[1] - data_72[1]) * fpu_val_7_206 + data_72[1];
            dest_7[2] = (dest_7[2] - data_72[2]) * fpu_val_7_206 + data_72[2];
            dest_7[0xa] = (dest_7[0xa] - data_72[0xa]) * fpu_val_7_206 + data_72[0xa];
            dest_7[0xb] = (dest_7[0xb] - data_72[0xb]) * fpu_val_7_206 + data_72[0xb];
            dest_7[0xc] = (dest_7[0xc] - data_72[0xc]) * fpu_val_7_206 + data_72[0xc];
            dest_7[0xd] = (dest_7[0xd] - data_72[0xd]) * fpu_val_7_206 + data_72[0xd];
            dest_7[0xe] = (dest_7[0xe] - data_72[0xe]) * fpu_val_7_206 + data_72[0xe];
            dest_7[0xf] = (dest_7[0xf] - data_72[0xf]) * fpu_val_7_206 + data_72[0xf];
            long double fpu_val_7_208 = *dest_7;
            long double f2_1 = g_bcabd8;
            fpu_val_7_208 - f2_1;
            char temp_23;

            temp_23 = *(&((fpu_val_7_208 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_208, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_208 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double fpu_val_7_209 = dest_7[1];
            long double f9_1 = g_bcabdc;
            fpu_val_7_209 - f9_1;
            char data_74;

            data_74 = *(&((fpu_val_7_209 < f9_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_209, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_7_209 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            int16_t data_75;
            data_75 = data_74 << 1;
            data_75 |= temp_23;
            data_75 <<= 2;
            dest_7[8] = data_75;
            long double fpu_val_7_212 = (g_bcabd4 - source_23[1]) / (entity_25[1] - source_23[1]);
            *entity_25 = (*entity_25 - *source_23) * fpu_val_7_212 + *source_23;
            entity_25[1] = (entity_25[1] - source_23[1]) * fpu_val_7_212 + source_23[1];
            entity_25[2] = (entity_25[2] - source_23[2]) * fpu_val_7_212 + source_23[2];
            entity_25[0xa] = (entity_25[0xa] - source_23[0xa]) * fpu_val_7_212 + source_23[0xa];
            entity_25[0xb] = (entity_25[0xb] - source_23[0xb]) * fpu_val_7_212 + source_23[0xb];
            entity_25[0xc] = (entity_25[0xc] - source_23[0xc]) * fpu_val_7_212 + source_23[0xc];
            entity_25[0xd] = (entity_25[0xd] - source_23[0xd]) * fpu_val_7_212 + source_23[0xd];
            entity_25[0xe] = (entity_25[0xe] - source_23[0xe]) * fpu_val_7_212 + source_23[0xe];
            entity_25[0xf] = (entity_25[0xf] - source_23[0xf]) * fpu_val_7_212 + source_23[0xf];
            long double fpu_val_7_214 = *entity_25;
            long double f17_1 = g_bcabd8;
            fpu_val_7_214 - f17_1;
            char temp_24;

            temp_24 = *(&((fpu_val_7_214 < f17_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_214, f17_1) ? 1 : 0) << 0xa
                | (fpu_val_7_214 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double fpu_val_7_215 = entity_25[1];
            long double f24_1 = g_bcabdc;
            fpu_val_7_215 - f24_1;
            char data_76;

            data_76 = *(&((fpu_val_7_215 < f24_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_215, f24_1) ? 1 : 0) << 0xa
                | (fpu_val_7_215 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            entity_25[8] = (data_76 << 1 | temp_24) << 2;
            entity_2 = context;
            temp_val = param_3;
            uint32_t data_79 = entity_2;
            uint32_t dest_9 = param_2;
            uint32_t source_25 = temp_val;
            context_2 = data_79 | dest_9 | source_25;
            data_1 = data_79 & dest_9 & source_25;
        }

        if (data_1)
        {
            g_a7e070 -= 1;
            return data_1;
        }
    }

    if (context_2 & 4)
    {
        context_2 = param_2;
        data_1 = entity_2;
        int32_t data_95;
        int32_t temp_27;
        temp_27 = HIGHD((data_1 & 4) + (context_2 & 4) + (temp_val & 4));
        data_95 = LOWD((data_1 & 4) + (context_2 & 4) + (temp_val & 4));

        if ((data_95 + (temp_27 & 3)) >> 2 != 2)
        {
            float* data_107;
            float* temp_30;
            float* flagP8;

            if (entity_2 & 4)
            {
                data_107 = &arg_44;
                flagP8 = &arg_84;
                temp_30 = &arg_4;
            }
            else if (!(param_2 & 4))
            {
                data_107 = &arg_4;
                flagP8 = &arg_44;
                temp_30 = &arg_84;
            }
            else
            {
                data_107 = &arg_84;
                flagP8 = &arg_4;
                temp_30 = &arg_44;
            }

            long double fpu_val_7_301 = *temp_30 - *data_107;
            long double fpu_val_6_359 = (g_bcabd8 - *data_107) / fpu_val_7_301;
            memcpy(&item_90, temp_30, 0x40);
            float item_a0_12 = fpu_val_6_359;
            *temp_30 = fpu_val_7_301 * item_a0_12 + *data_107;
            temp_30[1] = (temp_30[1] - data_107[1]) * item_a0_12 + data_107[1];
            temp_30[2] = (temp_30[2] - data_107[2]) * item_a0_12 + data_107[2];
            temp_30[0xa] = (temp_30[0xa] - data_107[0xa]) * item_a0_12 + data_107[0xa];
            temp_30[0xb] = (temp_30[0xb] - data_107[0xb]) * item_a0_12 + data_107[0xb];
            temp_30[0xc] = (temp_30[0xc] - data_107[0xc]) * item_a0_12 + data_107[0xc];
            temp_30[0xd] = (temp_30[0xd] - data_107[0xd]) * item_a0_12 + data_107[0xd];
            temp_30[0xe] = (temp_30[0xe] - data_107[0xe]) * item_a0_12 + data_107[0xe];
            temp_30[0xf] = (temp_30[0xf] - data_107[0xf]) * item_a0_12 + data_107[0xf];
            long double fpu_val_7_336 = temp_30[1];
            long double f11_1 = g_bcabdc;
            fpu_val_7_336 - f11_1;
            char data_109;

            data_109 = *(&((fpu_val_7_336 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_336, f11_1) ? 1 : 0) << 0xa
                | (fpu_val_7_336 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double fpu_val_7_337 = item_90;
            int16_t data_110;
            data_110 = data_109 << 3;
            temp_30[8] = data_110;
            long double fpu_val_7_338 = fpu_val_7_337 - *flagP8;
            float item_a0_13 = (g_bcabd8 - *flagP8) / fpu_val_7_338;
            item_90 = fpu_val_7_338 * item_a0_13 + *flagP8;
            long double fpu_val_7_344 = (item_8c - flagP8[1]) * item_a0_13 + flagP8[1];
            item_8c = fpu_val_7_344;
            item_88 = (item_88 - flagP8[2]) * item_a0_13 + flagP8[2];
            item_68 = (item_68 - flagP8[0xa]) * item_a0_13 + flagP8[0xa];
            item_64 = (item_64 - flagP8[0xb]) * item_a0_13 + flagP8[0xb];
            item_60 = (item_60 - flagP8[0xc]) * item_a0_13 + flagP8[0xc];
            item_5c = (item_5c - flagP8[0xd]) * item_a0_13 + flagP8[0xd];
            item_58 = (item_58 - flagP8[0xe]) * item_a0_13 + flagP8[0xe];

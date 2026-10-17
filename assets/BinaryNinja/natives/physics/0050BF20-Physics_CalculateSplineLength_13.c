// Original IGI.EXE function: Physics_CalculateSplineLength_13 (VA 0x0050BF20; static CFG gate FAIL, CFG score 0.754).
#include "Physics_CalculateSplineLength_13.h"
int32_t Physics_CalculateSplineLength_13(float context , int32_t param_2 , float param_3 , int32_t param_4 , float param_5 , int32_t param_6 , int32_t param_7, int32_t param_8, int32_t param_9)

{
    void arg_54;
    void* item_a8 = &arg_54;
    int32_t temp_val = param_2;
    void arg_2c;
    void* item_ac = &arg_2c;
    int32_t entity_val = param_4;
    g_a7da08 += 1;
    void arg_4;
    void* item_b0 = &arg_4;
    int32_t data_val = param_6;
    char context_4 = temp_val | entity_val | data_val;
    int32_t source_2 = temp_val & entity_val & data_val;
    int32_t item_dc = source_2;

    if (!source_2 && !(context_4 & 0x10))
    {
        void item_170;
        void item_148;
        void item_120;
        float item_d8;
        float item_d4;
        float item_d0;
        float item_cc;
        float item_c8;
        float item_c4;
        float item_c0;
        float item_bc;
        float item_b8;
        int32_t item_b4;

        if (context_4 & 1)
        {
            int32_t temp_1 = temp_val & 1;
            int32_t entity_1 = entity_val & 1;

            if ((data_val & 1) + temp_1 + entity_1 != 2)
            {
                float* data_19;
                float* temp_4;
                float* flagP1;

                if (temp_1)
                {
                    data_19 = &arg_2c;
                    temp_4 = &arg_54;
                    flagP1 = &arg_4;
                }
                else if (!entity_1)
                {
                    data_19 = &arg_4;
                    temp_4 = &arg_2c;
                    flagP1 = &arg_54;
                }
                else
                {
                    data_19 = &arg_54;
                    temp_4 = &arg_4;
                    flagP1 = &arg_2c;
                }

                long double fpu_val_7_84 = *flagP1 - *data_19;
                long double fpu_val_6_9 = (g_bcabd0 - *data_19) / fpu_val_7_84;
                memcpy(&item_d8, flagP1, 0x28);
                float item_dc_3 = fpu_val_6_9;
                *flagP1 = fpu_val_7_84 * item_dc_3 + *data_19;
                flagP1[1] = (flagP1[1] - data_19[1]) * item_dc_3 + data_19[1];
                flagP1[2] = (flagP1[2] - data_19[2]) * item_dc_3 + data_19[2];
                flagP1[6] = (flagP1[6] - data_19[6]) * item_dc_3 + data_19[6];
                flagP1[7] = (flagP1[7] - data_19[7]) * item_dc_3 + data_19[7];
                flagP1[8] = (flagP1[8] - data_19[8]) * item_dc_3 + data_19[8];
                flagP1[3] = (flagP1[3] - data_19[3]) * item_dc_3 + data_19[3];
                flagP1[4] = (flagP1[4] - data_19[4]) * item_dc_3 + data_19[4];
                flagP1[5] = (flagP1[5] - data_19[5]) * item_dc_3 + data_19[5];
                long double fpu_val_7_119 = flagP1[1];
                long double f3_1 = g_bcabd4;
                fpu_val_7_119 - f3_1;
                int32_t source_8;

                source_8 = !(*(&((fpu_val_7_119 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_119, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_119 == f3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_121 = g_bcabd8 + 1.0f;
                long double f8_1 = *flagP1;
                fpu_val_7_121 - f8_1;
                int32_t entity_3;

                entity_3 = !(*(&((fpu_val_7_121 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_121, f8_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_121 == f8_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_123 = g_bcabdc + 1.0f;
                long double f15_1 = flagP1[1];
                fpu_val_7_123 - f15_1;
                int32_t data_21;

                data_21 = !(*(&((fpu_val_7_123 < f15_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_123, f15_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_123 == f15_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_124 = item_d8;
                flagP1[9] = (((data_21 * 2) | entity_3) << 1 | source_8) << 1;
                long double fpu_val_7_125 = fpu_val_7_124 - *temp_4;
                float item_dc_4 = (g_bcabd0 - *temp_4) / fpu_val_7_125;
                long double fpu_val_7_127 = fpu_val_7_125 * item_dc_4 + *temp_4;
                item_d8 = fpu_val_7_127;
                long double fpu_val_6_16 = (item_d4 - temp_4[1]) * item_dc_4 + temp_4[1];
                item_d4 = fpu_val_6_16;
                item_d0 = (item_d0 - temp_4[2]) * item_dc_4 + temp_4[2];
                item_c0 = (item_c0 - temp_4[6]) * item_dc_4 + temp_4[6];
                item_bc = (item_bc - temp_4[7]) * item_dc_4 + temp_4[7];
                item_b8 = (item_b8 - temp_4[8]) * item_dc_4 + temp_4[8];
                item_cc = (item_cc - temp_4[3]) * item_dc_4 + temp_4[3];
                item_c8 = (item_c8 - temp_4[4]) * item_dc_4 + temp_4[4];
                item_c4 = (item_c4 - temp_4[5]) * item_dc_4 + temp_4[5];
                long double f20_1 = g_bcabd4;
                fpu_val_6_16 - f20_1;
                int32_t source_9;

                source_9 = !(*(&((fpu_val_6_16 < f20_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_16, f20_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_16 == f20_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                long double fpu_val_6_18 = g_bcabd8 + 1.0f;
                fpu_val_7_127 - fpu_val_6_18;
                int32_t entity_4;

                entity_4 = *(&((fpu_val_7_127 < fpu_val_6_18 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_127, fpu_val_6_18) ? 1 : 0) << 0xa
                    | (fpu_val_7_127 == fpu_val_6_18 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double fpu_val_7_130 = g_bcabdc + 1.0f;
                long double f23_1 = item_d4;
                fpu_val_7_130 - f23_1;
                int32_t data_28;

                data_28 = !(*(&((fpu_val_7_130 < f23_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_130, f23_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_130 == f23_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                item_b4 = (((data_28 * 2) | entity_4) << 1 | source_9) << 1;
                int32_t item_f0_1 = param_9;
                context_4 = param_2 | param_4 | param_6;
                int32_t item_f4_1 = param_8;
                int32_t item_f8_1 = param_7;
                memcpy(&item_120, flagP1, 0x28);
                memcpy(&item_148, &item_d8, 0x28);
                memcpy(&item_170, temp_4, 0x28);
                Physics_CalculateSplineLength_13();
                data_val = param_6;
                entity_val = param_4;
                temp_val = param_2;
                source_2 = param_2 & param_4 & param_6;
            }
            else
            {
                float* data_4;
                float* entity_2;
                float* temp_2;
                float* source_3;

                if (!temp_1)
                {
                    data_4 = &arg_4;
                    temp_2 = &arg_4;
                    source_3 = &arg_2c;
                    entity_2 = &arg_54;
                }
                else if (entity_1)
                {
                    data_4 = &arg_54;
                    temp_2 = &arg_54;
                    source_3 = &arg_4;
                    entity_2 = &arg_2c;
                }
                else
                {
                    data_4 = &arg_2c;
                    temp_2 = &arg_2c;
                    source_3 = &arg_54;
                    entity_2 = &arg_4;
                }

                long double fpu_val_7_2 = *source_3 - *data_4;
                float item_dc_1 = (g_bcabd0 - *data_4) / fpu_val_7_2;
                *source_3 = fpu_val_7_2 * item_dc_1 + *data_4;
                source_3[1] = (source_3[1] - data_4[1]) * item_dc_1 + data_4[1];
                source_3[2] = (source_3[2] - data_4[2]) * item_dc_1 + data_4[2];
                source_3[6] = (source_3[6] - data_4[6]) * item_dc_1 + data_4[6];
                source_3[7] = (source_3[7] - data_4[7]) * item_dc_1 + data_4[7];
                source_3[8] = (source_3[8] - data_4[8]) * item_dc_1 + data_4[8];
                source_3[3] = (source_3[3] - data_4[3]) * item_dc_1 + data_4[3];
                source_3[4] = (source_3[4] - data_4[4]) * item_dc_1 + data_4[4];
                source_3[5] = (source_3[5] - data_4[5]) * item_dc_1 + data_4[5];
                long double fpu_val_7_37 = source_3[1];
                long double f1_1 = g_bcabd4;
                fpu_val_7_37 - f1_1;
                int32_t context_5;

                context_5 = !(*(&((fpu_val_7_37 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_37, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_37 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_39 = g_bcabd8 + 1.0f;
                long double f4_1 = *source_3;
                fpu_val_7_39 - f4_1;
                int32_t dest_1;

                dest_1 = !(*(&((fpu_val_7_39 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_39, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_39 == f4_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_41 = g_bcabdc + 1.0f;
                long double f9_1 = source_3[1];
                fpu_val_7_41 - f9_1;
                int32_t data_6;

                data_6 = !(*(&((fpu_val_7_41 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_41, f9_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_41 == f9_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                source_3[9] = (((data_6 * 2) | dest_1) << 1 | context_5) << 1;
                long double fpu_val_7_43 = *entity_2 - *temp_2;
                float item_dc_2 = (g_bcabd0 - *temp_2) / fpu_val_7_43;
                *entity_2 = fpu_val_7_43 * item_dc_2 + *temp_2;
                entity_2[1] = (entity_2[1] - temp_2[1]) * item_dc_2 + temp_2[1];
                entity_2[2] = (entity_2[2] - temp_2[2]) * item_dc_2 + temp_2[2];
                entity_2[6] = (entity_2[6] - temp_2[6]) * item_dc_2 + temp_2[6];
                entity_2[7] = (entity_2[7] - temp_2[7]) * item_dc_2 + temp_2[7];
                entity_2[8] = (entity_2[8] - temp_2[8]) * item_dc_2 + temp_2[8];
                entity_2[3] = (entity_2[3] - temp_2[3]) * item_dc_2 + temp_2[3];
                entity_2[4] = (entity_2[4] - temp_2[4]) * item_dc_2 + temp_2[4];
                entity_2[5] = (entity_2[5] - temp_2[5]) * item_dc_2 + temp_2[5];
                long double fpu_val_7_78 = entity_2[1];
                long double f16_1 = g_bcabd4;
                fpu_val_7_78 - f16_1;
                int32_t source_4;

                source_4 = !(*(&((fpu_val_7_78 < f16_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_78, f16_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_78 == f16_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_80 = g_bcabd8 + 1.0f;
                long double f21_1 = *entity_2;
                fpu_val_7_80 - f21_1;
                int32_t temp_3;

                temp_3 = !(*(&((fpu_val_7_80 < f21_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_80, f21_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_80 == f21_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_82 = g_bcabdc + 1.0f;
                long double f22_1 = entity_2[1];
                fpu_val_7_82 - f22_1;
                int32_t data_13;

                data_13 = !(*(&((fpu_val_7_82 < f22_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_82, f22_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_82 == f22_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                entity_2[9] = (((data_13 * 2) | temp_3) << 1 | source_4) << 1;
                temp_val = param_2;
                entity_val = param_4;
                data_val = param_6;
                context_4 = temp_val | entity_val | data_val;
                source_2 = temp_val & entity_val & data_val;
            }
        }

        if (!source_2)
        {
            if (!(context_4 & 2))
            {
            label_50ca39:

                if (!(context_4 & 4))
                {
                label_50cf06:
                    int32_t flagP6;

                    if (context_4 & 8)
                    {
                        int32_t temp_13 = temp_val & 8;
                        int32_t entity_20 = entity_val & 8;
                        int32_t data_89 = (data_val & 8) + temp_13 + entity_20;
                        data_89 &= 0xf8;

                        if (data_89 != 0x10)
                        {
                            float* data_92;
                            float* temp_15;
                            float* context_18;

                            if (temp_13)
                            {
                                temp_15 = &arg_2c;
                                context_18 = &arg_54;
                                data_92 = &arg_4;
                            }
                            else if (!entity_20)
                            {
                                temp_15 = &arg_4;
                                context_18 = &arg_2c;
                                data_92 = &arg_54;
                            }
                            else
                            {
                                temp_15 = &arg_54;
                                context_18 = &arg_4;
                                data_92 = &arg_2c;
                            }

                            long double fpu_val_7_295 = g_bcabdc + 1.0f - temp_15[1];
                            long double fpu_val_6_298 = data_92[1] - temp_15[1];
                            memcpy(&item_d8, data_92, 0x28);
                            long double fpu_val_7_296 = fpu_val_7_295 / fpu_val_6_298;
                            *data_92 = (*data_92 - *temp_15) * fpu_val_7_296 + *temp_15;
                            data_92[1] = (data_92[1] - temp_15[1]) * fpu_val_7_296 + temp_15[1];
                            data_92[2] = (data_92[2] - temp_15[2]) * fpu_val_7_296 + temp_15[2];
                            data_92[6] = (data_92[6] - temp_15[6]) * fpu_val_7_296 + temp_15[6];
                            data_92[7] = (data_92[7] - temp_15[7]) * fpu_val_7_296 + temp_15[7];
                            data_92[8] = (data_92[8] - temp_15[8]) * fpu_val_7_296 + temp_15[8];
                            data_92[3] = (data_92[3] - temp_15[3]) * fpu_val_7_296 + temp_15[3];
                            data_92[4] = (data_92[4] - temp_15[4]) * fpu_val_7_296 + temp_15[4];
                            long double fpu_val_6_334 =
                                (data_92[5] - temp_15[5]) * fpu_val_7_296 + temp_15[5];
                            data_92[9] = 0;
                            data_92[5] = fpu_val_6_334;
                            long double fpu_val_7_299 = item_d4 - context_18[1];
                            float item_dc_13 = (g_bcabdc + 1.0f - context_18[1]) / fpu_val_7_299;
                            long double fpu_val_6_342 = (item_d8 - *context_18) * item_dc_13 + *context_18;
                            item_b4 = 0;
                            item_d8 = fpu_val_6_342;
                            int32_t item_f0_4 = param_9;
                            int32_t item_f4_4 = param_8;
                            int32_t item_f8_4 = param_7;
                            long double fpu_val_7_301 = fpu_val_7_299 * item_dc_13 + context_18[1];
                            flagP6 = param_2 & param_4 & param_6;
                            memcpy(&item_120, data_92, 0x28);
                            float item_d4_1 = fpu_val_7_301;
                            float item_d0_1 = (item_d0 - context_18[2]) * item_dc_13 + context_18[2];
                            float item_c0_1 = (item_c0 - context_18[6]) * item_dc_13 + context_18[6];
                            float item_bc_1 = (item_bc - context_18[7]) * item_dc_13 + context_18[7];
                            float item_b8_1 = (item_b8 - context_18[8]) * item_dc_13 + context_18[8];
                            float item_cc_1 = (item_cc - context_18[3]) * item_dc_13 + context_18[3];
                            float item_c8_1 = (item_c8 - context_18[4]) * item_dc_13 + context_18[4];
                            float item_c4_1 = (item_c4 - context_18[5]) * item_dc_13 + context_18[5];
                            memcpy(&item_148, &item_d8, 0x28);
                            memcpy(&item_170, context_18, 0x28);
                            Physics_CalculateSplineLength_13();
                        }
                        else
                        {
                            float* data_90;
                            float* entity_21;
                            float* temp_14;
                            float* source_29;

                            if (!temp_13)
                            {
                                data_90 = &arg_4;
                                entity_21 = &arg_4;
                                temp_14 = &arg_2c;
                                source_29 = &arg_54;
                            }
                            else if (entity_20)
                            {
                                data_90 = &arg_54;
                                entity_21 = &arg_54;
                                temp_14 = &arg_4;
                                source_29 = &arg_2c;
                            }
                            else
                            {
                                data_90 = &arg_2c;
                                entity_21 = &arg_2c;
                                temp_14 = &arg_54;
                                source_29 = &arg_4;
                            }

                            long double fpu_val_7_286 =
                                (g_bcabdc + 1.0f - data_90[1]) / (temp_14[1] - data_90[1]);
                            *temp_14 = (*temp_14 - *data_90) * fpu_val_7_286 + *data_90;
                            temp_14[1] = (temp_14[1] - data_90[1]) * fpu_val_7_286 + data_90[1];
                            temp_14[2] = (temp_14[2] - data_90[2]) * fpu_val_7_286 + data_90[2];
                            temp_14[6] = (temp_14[6] - data_90[6]) * fpu_val_7_286 + data_90[6];
                            temp_14[7] = (temp_14[7] - data_90[7]) * fpu_val_7_286 + data_90[7];
                            temp_14[8] = (temp_14[8] - data_90[8]) * fpu_val_7_286 + data_90[8];
                            temp_14[3] = (temp_14[3] - data_90[3]) * fpu_val_7_286 + data_90[3];
                            temp_14[4] = (temp_14[4] - data_90[4]) * fpu_val_7_286 + data_90[4];
                            long double fpu_val_6_258 =
                                (temp_14[5] - data_90[5]) * fpu_val_7_286 + data_90[5];
                            temp_14[9] = 0;
                            temp_14[5] = fpu_val_6_258;
                            long double fpu_val_7_291 =
                                (g_bcabdc + 1.0f - entity_21[1]) / (source_29[1] - entity_21[1]);
                            *source_29 = (*source_29 - *entity_21) * fpu_val_7_291 + *entity_21;
                            source_29[1] = (source_29[1] - entity_21[1]) * fpu_val_7_291 + entity_21[1];
                            source_29[2] = (source_29[2] - entity_21[2]) * fpu_val_7_291 + entity_21[2];
                            source_29[6] = (source_29[6] - entity_21[6]) * fpu_val_7_291 + entity_21[6];
                            source_29[7] = (source_29[7] - entity_21[7]) * fpu_val_7_291 + entity_21[7];
                            source_29[8] = (source_29[8] - entity_21[8]) * fpu_val_7_291 + entity_21[8];
                            source_29[3] = (source_29[3] - entity_21[3]) * fpu_val_7_291 + entity_21[3];
                            source_29[4] = (source_29[4] - entity_21[4]) * fpu_val_7_291 + entity_21[4];
                            long double fpu_val_6_296 =
                                (source_29[5] - entity_21[5]) * fpu_val_7_291 + entity_21[5];
                            source_29[9] = 0;
                            source_29[5] = fpu_val_6_296;
                            flagP6 = param_2 & param_4 & param_6;
                        }
                    }

                    if (!(context_4 & 8) || !flagP6)
                    {
                        void* item_9c = &arg_4;
                        void* item_98_1 = &arg_2c;
                        void* item_94_1 = &arg_54;
                        param_8(&item_9c, param_9);

                        if (0x80 & g_c28c7f && g_c28c8c & 0x80 && g_c28c69 & 0x80)
                        {
                            void** temp_18 = &item_b0;
                            void item_8c;
                            void* data_95 = &item_8c;
                            int32_t i_3 = 3;
                            context = 1.0f / context;
                            param_3 = 1.0f / param_3;
                            param_5 = 1.0f / param_5;
                            int32_t i;

                            do
                            {
                                int32_t* entity_27 = *temp_18;
                                temp_18 = &temp_18[1];
                                data_95 += 0x24;
                                *(data_95 - 0x28) = *entity_27;
                                *(data_95 - 0x24) = entity_27[1];
                                i = i_3;
                                i_3 -= 1;
                                *(data_95 - 0x20) = entity_27[2] * 0.99000001f - 4.09600019f;
                                *(data_95 - 0x10) = 0x3f000000;
                                *(data_95 - 0xc) = 0x3f000000;
                                *(data_95 - 8) = 0x3f800000;
                                *(data_95 - 0x14) = 0x3f800000;
                                *(data_95 - 0x1c) = 0;
                                *(data_95 - 0x18) = 0;
                            } while (i != 1);
                            void** item_f0_6 = &item_b0;
                            void item_90;
                            void* item_a0_1 = &item_90;
                            int32_t item_ac_1 = 0x40060000;
                            item_b0 = nullptr;
                            int32_t item_a8_1 = 0xffffffff;
                            int32_t item_a4_1 = 3;
                            g_a84a50 = 0;
                            Physics_InterpolateWaypoint_13(item_f0_6);
                            void item_88;
                            float* data_96 = &item_88;
                            int32_t i_2 = 3;
                            int32_t i_1;

                            do
                            {
                                long double fpu_val_7_340 = *data_96 * 0.99000001f;
                                data_96 = &data_96[9];
                                i_1 = i_2;
                                i_2 -= 1;
                                data_96[-9] = fpu_val_7_340;
                                data_96[-5] = 0;
                                data_96[-4] = 0;
                                data_96[-3] = 0x3f800000;
                            } while (i_1 != 1);
                            void item_24;
                            memcpy(&item_24, &item_90, 0x24);
                            void** item_f0_7 = &item_b0;
                            item_b0 = 1;
                            int32_t item_a4_2 = 4;
                            Physics_InterpolateWaypoint_13(item_f0_7);
                        }
                    }
                }
                else
                {
                    int32_t temp_9 = temp_val & 4;
                    int32_t entity_15 = entity_val & 4;
                    int32_t data_69 = (data_val & 4) + temp_9 + entity_15;
                    data_69 &= 0xfc;
                    int32_t source_24;

                    if (data_69 != 8)
                    {
                        float* data_76;
                        float* temp_12;
                        float* flagP3;

                        if (temp_9)
                        {
                            data_76 = &arg_2c;
                            flagP3 = &arg_54;
                            temp_12 = &arg_4;
                        }
                        else if (!entity_15)
                        {
                            data_76 = &arg_4;
                            flagP3 = &arg_2c;
                            temp_12 = &arg_54;
                        }
                        else
                        {
                            data_76 = &arg_54;
                            flagP3 = &arg_4;
                            temp_12 = &arg_2c;
                        }

                        long double fpu_val_7_237 = *temp_12 - *data_76;
                        long double fpu_val_6_184 = g_bcabd8 + 1.0f - *data_76;
                        memcpy(&item_d8, temp_12, 0x28);
                        float item_dc_10 = fpu_val_6_184 / fpu_val_7_237;
                        *temp_12 = fpu_val_7_237 * item_dc_10 + *data_76;
                        temp_12[1] = (temp_12[1] - data_76[1]) * item_dc_10 + data_76[1];
                        temp_12[2] = (temp_12[2] - data_76[2]) * item_dc_10 + data_76[2];
                        temp_12[6] = (temp_12[6] - data_76[6]) * item_dc_10 + data_76[6];
                        temp_12[7] = (temp_12[7] - data_76[7]) * item_dc_10 + data_76[7];
                        temp_12[8] = (temp_12[8] - data_76[8]) * item_dc_10 + data_76[8];
                        temp_12[3] = (temp_12[3] - data_76[3]) * item_dc_10 + data_76[3];
                        temp_12[4] = (temp_12[4] - data_76[4]) * item_dc_10 + data_76[4];
                        temp_12[5] = (temp_12[5] - data_76[5]) * item_dc_10 + data_76[5];
                        long double fpu_val_7_273 = g_bcabdc + 1.0f;
                        long double f11_1 = temp_12[1];
                        fpu_val_7_273 - f11_1;
                        int32_t data_78;

                        data_78 = !(*(&((fpu_val_7_273 < f11_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_273, f11_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_273 == f11_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                        long double fpu_val_7_274 = item_d8;
                        temp_12[9] = data_78 << 3;
                        long double fpu_val_7_275 = fpu_val_7_274 - *flagP3;
                        float item_dc_11 = (g_bcabd8 + 1.0f - *flagP3) / fpu_val_7_275;
                        item_d8 = fpu_val_7_275 * item_dc_11 + *flagP3;
                        long double fpu_val_7_281 = (item_d4 - flagP3[1]) * item_dc_11 + flagP3[1];
                        item_d4 = fpu_val_7_281;
                        item_d0 = (item_d0 - flagP3[2]) * item_dc_11 + flagP3[2];
                        item_c0 = (item_c0 - flagP3[6]) * item_dc_11 + flagP3[6];
                        item_bc = (item_bc - flagP3[7]) * item_dc_11 + flagP3[7];
                        item_b8 = (item_b8 - flagP3[8]) * item_dc_11 + flagP3[8];
                        item_cc = (item_cc - flagP3[3]) * item_dc_11 + flagP3[3];
                        item_c8 = (item_c8 - flagP3[4]) * item_dc_11 + flagP3[4];
                        item_c4 = (item_c4 - flagP3[5]) * item_dc_11 + flagP3[5];
                        long double fpu_val_6_219 = g_bcabdc + 1.0f;
                        fpu_val_7_281 - fpu_val_6_219;
                        int32_t data_81;

                        data_81 = *(&((fpu_val_7_281 < fpu_val_6_219 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_281, fpu_val_6_219) ? 1 : 0) << 0xa
                            | (fpu_val_7_281 == fpu_val_6_219 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        item_b4 = data_81 << 3;
                        int32_t item_f0_3 = param_9;
                        int32_t item_f4_3 = param_8;
                        int32_t item_f8_3 = param_7;
                        context_4 = param_2 | param_4 | param_6;
                        memcpy(&item_120, temp_12, 0x28);
                        memcpy(&item_148, &item_d8, 0x28);
                        memcpy(&item_170, flagP3, 0x28);
                        Physics_CalculateSplineLength_13();
                        data_val = param_6;
                        entity_val = param_4;
                        temp_val = param_2;
                        source_24 = param_2 & param_4 & param_6;
                    }
                    else
                    {
                        float* data_70;
                        float* entity_16;
                        float* temp_10;
                        float* source_21;

                        if (!temp_9)
                        {
                            data_70 = &arg_4;
                            temp_10 = &arg_4;
                            source_21 = &arg_2c;
                            entity_16 = &arg_54;
                        }
                        else if (entity_15)
                        {
                            data_70 = &arg_54;
                            temp_10 = &arg_54;
                            source_21 = &arg_4;
                            entity_16 = &arg_2c;
                        }
                        else
                        {
                            data_70 = &arg_2c;
                            temp_10 = &arg_2c;
                            source_21 = &arg_54;
                            entity_16 = &arg_4;
                        }

                        long double fpu_val_7_161 = *source_21 - *data_70;
                        float item_dc_8 = (g_bcabd8 + 1.0f - *data_70) / fpu_val_7_161;
                        *source_21 = fpu_val_7_161 * item_dc_8 + *data_70;
                        source_21[1] = (source_21[1] - data_70[1]) * item_dc_8 + data_70[1];
                        source_21[2] = (source_21[2] - data_70[2]) * item_dc_8 + data_70[2];
                        source_21[6] = (source_21[6] - data_70[6]) * item_dc_8 + data_70[6];
                        source_21[7] = (source_21[7] - data_70[7]) * item_dc_8 + data_70[7];
                        source_21[8] = (source_21[8] - data_70[8]) * item_dc_8 + data_70[8];
                        source_21[3] = (source_21[3] - data_70[3]) * item_dc_8 + data_70[3];
                        source_21[4] = (source_21[4] - data_70[4]) * item_dc_8 + data_70[4];
                        source_21[5] = (source_21[5] - data_70[5]) * item_dc_8 + data_70[5];
                        long double fpu_val_7_197 = g_bcabdc + 1.0f;
                        long double f5_1 = source_21[1];
                        fpu_val_7_197 - f5_1;
                        int32_t data_72;

                        data_72 = !(*(&((fpu_val_7_197 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_197, f5_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_197 == f5_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                        source_21[9] = data_72 << 3;
                        long double fpu_val_7_199 = *entity_16 - *temp_10;
                        float item_dc_9 = (g_bcabd8 + 1.0f - *temp_10) / fpu_val_7_199;
                        *entity_16 = fpu_val_7_199 * item_dc_9 + *temp_10;
                        entity_16[1] = (entity_16[1] - temp_10[1]) * item_dc_9 + temp_10[1];
                        entity_16[2] = (entity_16[2] - temp_10[2]) * item_dc_9 + temp_10[2];
                        entity_16[6] = (entity_16[6] - temp_10[6]) * item_dc_9 + temp_10[6];
                        entity_16[7] = (entity_16[7] - temp_10[7]) * item_dc_9 + temp_10[7];
                        entity_16[8] = (entity_16[8] - temp_10[8]) * item_dc_9 + temp_10[8];
                        entity_16[3] = (entity_16[3] - temp_10[3]) * item_dc_9 + temp_10[3];
                        entity_16[4] = (entity_16[4] - temp_10[4]) * item_dc_9 + temp_10[4];
                        entity_16[5] = (entity_16[5] - temp_10[5]) * item_dc_9 + temp_10[5];
                        long double fpu_val_7_235 = g_bcabdc + 1.0f;
                        long double f12_1 = entity_16[1];
                        fpu_val_7_235 - f12_1;
                        int32_t data_75;

                        data_75 = !(*(&((fpu_val_7_235 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_235, f12_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_235 == f12_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                        entity_16[9] = data_75 << 3;
                        temp_val = param_2;
                        entity_val = param_4;
                        data_val = param_6;
                        context_4 = temp_val | entity_val | data_val;
                        source_24 = temp_val & entity_val & data_val;
                    }

                    if (!source_24)
                        goto label_50cf06;
                }
            }
            else
            {
                int32_t temp_5 = temp_val & 2;
                int32_t entity_8 = entity_val & 2;
                int32_t data_40 = (data_val & 2) + temp_5 + entity_8;
                data_40 &= 0xfe;
                int32_t source_16;

                if (data_40 != 4)
                {
                    float* data_52;
                    float* temp_8;
                    float* flagP2;

                    if (temp_5)
                    {
                        data_52 = &arg_2c;
                        temp_8 = &arg_54;
                        flagP2 = &arg_4;
                    }
                    else if (!entity_8)
                    {
                        data_52 = &arg_4;
                        temp_8 = &arg_2c;
                        flagP2 = &arg_54;
                    }
                    else
                    {
                        data_52 = &arg_54;
                        temp_8 = &arg_4;
                        flagP2 = &arg_2c;
                    }

                    long double fpu_val_7_149 = (g_bcabd4 - data_52[1]) / (flagP2[1] - data_52[1]);
                    memcpy(&item_d8, flagP2, 0x28);
                    *flagP2 = (*flagP2 - *data_52) * fpu_val_7_149 + *data_52;
                    flagP2[1] = (flagP2[1] - data_52[1]) * fpu_val_7_149 + data_52[1];
                    flagP2[2] = (flagP2[2] - data_52[2]) * fpu_val_7_149 + data_52[2];
                    flagP2[6] = (flagP2[6] - data_52[6]) * fpu_val_7_149 + data_52[6];
                    flagP2[7] = (flagP2[7] - data_52[7]) * fpu_val_7_149 + data_52[7];
                    flagP2[8] = (flagP2[8] - data_52[8]) * fpu_val_7_149 + data_52[8];
                    flagP2[3] = (flagP2[3] - data_52[3]) * fpu_val_7_149 + data_52[3];
                    flagP2[4] = (flagP2[4] - data_52[4]) * fpu_val_7_149 + data_52[4];
                    flagP2[5] = (flagP2[5] - data_52[5]) * fpu_val_7_149 + data_52[5];
                    long double fpu_val_7_152 = g_bcabd8 + 1.0f;
                    long double f6_1 = *flagP2;
                    fpu_val_7_152 - f6_1;
                    int32_t entity_10;

                    entity_10 = !(*(&((fpu_val_7_152 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_152, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_152 == f6_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double fpu_val_7_154 = g_bcabdc + 1.0f;
                    long double f13_1 = flagP2[1];
                    fpu_val_7_154 - f13_1;
                    int32_t data_54;

                    data_54 = !(*(&((fpu_val_7_154 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_154, f13_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_154 == f13_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    flagP2[9] = ((data_54 * 2) | entity_10) << 2;
                    long double fpu_val_7_156 = item_d4 - temp_8[1];
                    float item_dc_6 = (g_bcabd4 - temp_8[1]) / fpu_val_7_156;
                    item_d8 = (item_d8 - *temp_8) * item_dc_6 + *temp_8;
                    long double fpu_val_7_158 = fpu_val_7_156 * item_dc_6 + temp_8[1];
                    item_d4 = fpu_val_7_158;
                    item_d0 = (item_d0 - temp_8[2]) * item_dc_6 + temp_8[2];
                    item_c0 = (item_c0 - temp_8[6]) * item_dc_6 + temp_8[6];
                    item_bc = (item_bc - temp_8[7]) * item_dc_6 + temp_8[7];
                    item_b8 = (item_b8 - temp_8[8]) * item_dc_6 + temp_8[8];
                    item_cc = (item_cc - temp_8[3]) * item_dc_6 + temp_8[3];
                    item_c8 = (item_c8 - temp_8[4]) * item_dc_6 + temp_8[4];
                    item_c4 = (item_c4 - temp_8[5]) * item_dc_6 + temp_8[5];
                    long double fpu_val_6_170 = g_bcabd8 + 1.0f;
                    long double f18_1 = item_d8;
                    fpu_val_6_170 - f18_1;
                    int32_t entity_11;

                    entity_11 = !(*(&((fpu_val_6_170 < f18_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_170, f18_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_170 == f18_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                    long double fpu_val_6_172 = g_bcabdc + 1.0f;
                    fpu_val_7_158 - fpu_val_6_172;
                    int32_t data_59;

                    data_59 = *(&((fpu_val_7_158 < fpu_val_6_172 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_158, fpu_val_6_172) ? 1 : 0) << 0xa
                        | (fpu_val_7_158 == fpu_val_6_172 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    item_b4 = ((data_59 * 2) | entity_11) << 2;
                    int32_t item_f0_2 = param_9;
                    context_4 = param_2 | param_4 | param_6;
                    int32_t item_f4_2 = param_8;
                    int32_t item_f8_2 = param_7;
                    memcpy(&item_120, flagP2, 0x28);
                    memcpy(&item_148, &item_d8, 0x28);
                    memcpy(&item_170, temp_8, 0x28);
                    Physics_CalculateSplineLength_13();
                    data_val = param_6;
                    entity_val = param_4;
                    temp_val = param_2;
                    source_16 = param_2 & param_4 & param_6;
                }
                else
                {
                    float* data_41;
                    float* entity_9;
                    float* temp_6;
                    float* source_13;

                    if (!temp_5)
                    {
                        data_41 = &arg_4;
                        temp_6 = &arg_4;
                        source_13 = &arg_2c;
                        entity_9 = &arg_54;
                    }
                    else if (entity_8)
                    {
                        data_41 = &arg_54;
                        temp_6 = &arg_54;
                        source_13 = &arg_4;
                        entity_9 = &arg_2c;
                    }
                    else
                    {
                        data_41 = &arg_2c;
                        temp_6 = &arg_2c;
                        source_13 = &arg_54;
                        entity_9 = &arg_4;
                    }

                    long double fpu_val_7_133 = (g_bcabd4 - data_41[1]) / (source_13[1] - data_41[1]);
                    *source_13 = (*source_13 - *data_41) * fpu_val_7_133 + *data_41;
                    source_13[1] = (source_13[1] - data_41[1]) * fpu_val_7_133 + data_41[1];
                    source_13[2] = (source_13[2] - data_41[2]) * fpu_val_7_133 + data_41[2];
                    source_13[6] = (source_13[6] - data_41[6]) * fpu_val_7_133 + data_41[6];
                    source_13[7] = (source_13[7] - data_41[7]) * fpu_val_7_133 + data_41[7];
                    source_13[8] = (source_13[8] - data_41[8]) * fpu_val_7_133 + data_41[8];
                    source_13[3] = (source_13[3] - data_41[3]) * fpu_val_7_133 + data_41[3];
                    source_13[4] = (source_13[4] - data_41[4]) * fpu_val_7_133 + data_41[4];
                    source_13[5] = (source_13[5] - data_41[5]) * fpu_val_7_133 + data_41[5];
                    long double fpu_val_7_136 = g_bcabd8 + 1.0f;
                    long double f2_1 = *source_13;
                    fpu_val_7_136 - f2_1;
                    int32_t dest_2;

                    dest_2 = !(*(&((fpu_val_7_136 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_136, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_136 == f2_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double fpu_val_7_138 = g_bcabdc + 1.0f;
                    long double f7_1 = source_13[1];
                    fpu_val_7_138 - f7_1;
                    int32_t data_43;

                    data_43 = !(*(&((fpu_val_7_138 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_138, f7_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_138 == f7_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    source_13[9] = ((data_43 * 2) | dest_2) << 2;
                    long double fpu_val_7_141 = (g_bcabd4 - temp_6[1]) / (entity_9[1] - temp_6[1]);
                    *entity_9 = (*entity_9 - *temp_6) * fpu_val_7_141 + *temp_6;
                    entity_9[1] = (entity_9[1] - temp_6[1]) * fpu_val_7_141 + temp_6[1];
                    entity_9[2] = (entity_9[2] - temp_6[2]) * fpu_val_7_141 + temp_6[2];
                    entity_9[6] = (entity_9[6] - temp_6[6]) * fpu_val_7_141 + temp_6[6];
                    entity_9[7] = (entity_9[7] - temp_6[7]) * fpu_val_7_141 + temp_6[7];
                    entity_9[8] = (entity_9[8] - temp_6[8]) * fpu_val_7_141 + temp_6[8];
                    entity_9[3] = (entity_9[3] - temp_6[3]) * fpu_val_7_141 + temp_6[3];
                    entity_9[4] = (entity_9[4] - temp_6[4]) * fpu_val_7_141 + temp_6[4];
                    entity_9[5] = (entity_9[5] - temp_6[5]) * fpu_val_7_141 + temp_6[5];
                    long double fpu_val_7_144 = g_bcabd8 + 1.0f;
                    long double f14_1 = *entity_9;
                    fpu_val_7_144 - f14_1;
                    int32_t temp_7;

                    temp_7 = !(*(&((fpu_val_7_144 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_144, f14_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_144 == f14_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double fpu_val_7_146 = g_bcabdc + 1.0f;
                    long double f19_1 = entity_9[1];
                    fpu_val_7_146 - f19_1;
                    int32_t data_48;

                    data_48 = !(*(&((fpu_val_7_146 < f19_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_146, f19_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_146 == f19_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    entity_9[9] = ((data_48 * 2) | temp_7) << 2;
                    temp_val = param_2;
                    entity_val = param_4;
                    data_val = param_6;
                    context_4 = temp_val | entity_val | data_val;
                    source_16 = temp_val & entity_val & data_val;
                }

                if (!source_16)
                    goto label_50ca39;
            }
        }
    }

    int32_t result = g_a7da08 - 1;
    g_a7da08 = result;
    return result;
}

// Original IGI.EXE function: Light_RenderLensflare_2 (VA 0x00521E40; static CFG gate FAIL, CFG score 0.833).
#include "Light_RenderLensflare_2.h"
uint32_t Light_RenderLensflare_2(void* context, double* param_2, float* param_3 , float* param_4, void* param_5, int32_t param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, float param_13, float param_14, float param_15 , float param_16, float param_17, float param_18, float param_19, float param_20, float param_21, float param_22)

{
    int32_t flagP;
    int32_t item_4 = flagP;
    Camera_UpdateTransform_5(0x3ab7c);
    int32_t source_1 = param_5 * param_6;
    int32_t* temp_val = *(context + 0x88);
    int32_t* arg_ec = temp_val;

    if (source_1 > 0)
        memset(param_3, 0xffffffff, source_1 << 2);

    if (param_12)
    {
        int32_t entity_3;
        int32_t dest_3;

        if (!param_10)
        {
            if (source_1 > 0)
                dest_3 = __memfill_u32(param_4, 0, source_1);
        }
        else if (source_1 > 0)
            dest_3 = __memfill_u32(param_4, 0x7f7fffff, source_1);
    }

    uint32_t result = *temp_val;
    int32_t dest_4 = 0;
    int32_t arg_e8 = 0;

    if (result > 0)
    {
        float* arg_c;
        float* context_1 = arg_c;
        double* source_2 = param_2;

        while (true)
        {
            int32_t entity_4 = dest_4 * 9;
            int32_t data_4 = temp_val[entity_4 + 0xd];

            if (data_4 > param_9 || temp_val[entity_4 + 0xc] != data_4 - 1)
                result = 0;
            else
                result = 1;

            uint32_t result_1 = result;

            if (temp_val[entity_4 + 0xc] == param_9 || result)
            {
                result = *(*(temp_val[entity_4 + 7] + 0xc) + 0xc);

                if (*(result + 0x20) == 3)
                {
                    void* temp_3 = *(result + 0x24);
                    void* arg_60 = temp_3;
                    result = *(temp_3 + 8);

                    if (result && temp_3)
                    {
                        double* data_7 = temp_val[entity_4 + 0xa];
                        long double fpu_val_7_2 = *data_7 - *source_2;
                        long double fpu_val_6_2 = data_7[1] - source_2[1];
                        long double fpu_val_5_2 = data_7[2] - source_2[2];
                        float* data_8 = temp_val[entity_4 + 9];
                        float arg_80 =
                            fpu_val_7_2 * *context_1 + fpu_val_5_2 * context_1[2] + fpu_val_6_2 * context_1[1];
                        float arg_84 =
                            fpu_val_7_2 * context_1[3] + fpu_val_5_2 * context_1[5] + fpu_val_6_2 * context_1[4];
                        float arg_88 =
                            fpu_val_5_2 * context_1[8] + fpu_val_6_2 * context_1[7] + fpu_val_7_2 * context_1[6];
                        float arg_8c = data_8[6] * context_1[2] + data_8[3] * context_1[1] + *data_8 * *context_1;
                        float arg_90 =
                            data_8[7] * context_1[2] + data_8[4] * context_1[1] + data_8[1] * *context_1;
                        float arg_94 =
                            *context_1 * data_8[2] + data_8[8] * context_1[2] + data_8[5] * context_1[1];
                        float arg_98 =
                            *data_8 * context_1[3] + context_1[5] * data_8[6] + context_1[4] * data_8[3];
                        float arg_9c =
                            data_8[1] * context_1[3] + data_8[7] * context_1[5] + data_8[4] * context_1[4];
                        float arg_a0 =
                            data_8[8] * context_1[5] + data_8[5] * context_1[4] + data_8[2] * context_1[3];
                        float arg_a4 =
                            context_1[8] * data_8[6] + context_1[7] * data_8[3] + *data_8 * context_1[6];
                        float arg_a8 =
                            context_1[8] * data_8[7] + context_1[7] * data_8[4] + data_8[1] * context_1[6];
                        int32_t data_10 = data_8[9] + context_1[9] + 1;
                        int32_t arg_b0 = data_10;
                        float arg_ac =
                            data_8[2] * context_1[6] + context_1[8] * data_8[8] + context_1[7] * data_8[5];
                        float arg_f4;
                        memcpy(&arg_f4, &arg_8c, 0x28);

                        if (data_10 > 0x3e8)
                        {
                            long double fpu_val_7_41 = arg_8c;
                            long double f1_1 = 0.0f;
                            fpu_val_7_41 - f1_1;
                            float arg_c0 = arg_8c;
                            float arg_c8 = arg_94;
                            float arg_c4 = arg_90;

                            if (!(*(&((fpu_val_7_41 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_41, f1_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_41 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                            label_52211f:
                                long double fpu_val_7_44 = arg_94;
                                long double fpu_val_6_43 = arg_90;
                                long double fpu_val_5_6 = arg_8c;
                                long double fpu_val_7_46 = 1.0 / sqrtl(fpu_val_5_6 * fpu_val_5_6
                                    + fpu_val_6_43 * fpu_val_6_43 + fpu_val_7_44 * fpu_val_7_44);
                                arg_c0 = arg_8c * fpu_val_7_46;
                                arg_c4 = arg_c4 * fpu_val_7_46;
                                arg_c8 = arg_c8 * fpu_val_7_46;
                            }
                            else
                            {
                                long double fpu_val_7_42 = arg_90;
                                long double f2_1 = 0.0f;
                                fpu_val_7_42 - f2_1;

                                if (!(*(&((fpu_val_7_42 < f2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_42, f2_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_42 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_52211f;

                                long double fpu_val_7_43 = arg_94;
                                long double f5_1 = 0.0f;
                                fpu_val_7_43 - f5_1;

                                if (!(*(&((fpu_val_7_43 < f5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_43, f5_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_43 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_52211f;
                            }

                            float arg_44 = arg_a8 * arg_94 - arg_ac * arg_90;
                            long double fpu_val_6_54 = arg_ac * arg_8c;
                            float arg_cc = arg_44;
                            float arg_48 = -((arg_a4 * arg_94 - fpu_val_6_54));
                            float arg_4c = arg_a4 * arg_90 - arg_a8 * arg_8c;
                            float arg_70 = arg_4c * arg_c4 - arg_48 * arg_c8;
                            float arg_d8 = arg_70;
                            float arg_74 = -((arg_4c * arg_c0 - arg_44 * arg_c8));
                            float arg_78 = arg_48 * arg_c0 - arg_44 * arg_c4;
                            long double fpu_val_7_68 = arg_44;
                            long double f4_1 = 0.0f;
                            fpu_val_7_68 - f4_1;

                            if (!(*(&((fpu_val_7_68 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_68, f4_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_68 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                            label_5222c9:
                                long double fpu_val_7_71 = arg_44;
                                long double fpu_val_6_63 = arg_48;
                                long double fpu_val_5_8 = arg_4c;
                                long double fpu_val_7_73 = 1.0 / sqrtl(fpu_val_5_8 * fpu_val_5_8
                                    + fpu_val_6_63 * fpu_val_6_63 + fpu_val_7_71 * fpu_val_7_71);
                                arg_cc = arg_44 * fpu_val_7_73;
                                float arg_d0 = arg_48 * fpu_val_7_73;
                                float arg_d4 = arg_4c * fpu_val_7_73;
                            }
                            else
                            {
                                long double fpu_val_7_69 = arg_48;
                                long double f6_1 = 0.0f;
                                fpu_val_7_69 - f6_1;

                                if (!(*(&((fpu_val_7_69 < f6_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_69, f6_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_69 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_5222c9;

                                long double fpu_val_7_70 = arg_4c;
                                long double f8_1 = 0.0f;
                                fpu_val_7_70 - f8_1;

                                if (!(*(&((fpu_val_7_70 < f8_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_70, f8_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_70 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_5222c9;
                            }

                            long double fpu_val_7_75 = arg_70;
                            long double f7_1 = 0.0f;
                            fpu_val_7_75 - f7_1;

                            if (!(*(&((fpu_val_7_75 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_75, f7_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_75 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                            label_52235e:
                                long double fpu_val_7_78 = arg_78;
                                long double fpu_val_6_71 = arg_74;
                                long double fpu_val_5_10 = arg_70;
                                long double fpu_val_7_80 = 1.0 / sqrtl(fpu_val_5_10 * fpu_val_5_10
                                    + fpu_val_6_71 * fpu_val_6_71 + fpu_val_7_78 * fpu_val_7_78);
                                arg_d8 = arg_70 * fpu_val_7_80;
                                float arg_dc = arg_74 * fpu_val_7_80;
                                float arg_e0 = arg_78 * fpu_val_7_80;
                            }
                            else
                            {
                                long double fpu_val_7_76 = arg_74;
                                long double f9_1 = 0.0f;
                                fpu_val_7_76 - f9_1;

                                if (!(*(&((fpu_val_7_76 < f9_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_76, f9_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_76 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_52235e;

                                long double fpu_val_7_77 = arg_78;
                                long double f10_1 = 0.0f;
                                fpu_val_7_77 - f10_1;

                                if (!(*(&((fpu_val_7_77 < f10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_77, f10_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_77 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_52235e;
                            }

                            memcpy(&arg_8c, &arg_c0, 0x28);
                            arg_b0 = 0;
                        }

                        int32_t i = 0;
                        void arg_1fc;

                        if (*(temp_3 + 0x10) > 0)
                        {
                            int32_t dest_5 = 0;
                            float* entity_11 = &arg_1fc;

                            do
                            {
                                int32_t* data_20 = dest_5 + *(temp_3 + 0x14);
                                float temp_4 = *data_20;
                                float temp_5 = data_20[1];
                                float data_21 = data_20[2];
                                float arg_158 = param_16 * data_21 + param_15 * temp_5 + arg_f4 * temp_4;
                                param_7 = arg_158;
                                long double fpu_val_7_95 = arg_158 + arg_80;
                                param_9 = param_22 * data_21 + param_21 * temp_5 + param_20 * temp_4;
                                param_8 = param_19 * data_21 + param_18 * temp_5 + param_17 * temp_4 + arg_84;
                                long double fpu_val_6_94 = param_9 + arg_88;
                                long double f3_1 = 4.09600019f;
                                fpu_val_6_94 - f3_1;

                                if (*(&((fpu_val_6_94 < f3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_94, f3_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_94 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                {
                                    *entity_11 = fpu_val_6_94 - 4.09600019f;
                                    entity_11[-2] = fpu_val_7_95;
                                    entity_11[-1] = param_8;
                                }
                                else if (!param_10)
                                {
                                    long double fpu_val_6_96 = 1.0f / fpu_val_6_94;
                                    *entity_11 = fpu_val_6_96;
                                    float item_8_2 = param_5 >> 1;
                                    entity_11[-2] = fpu_val_6_96 * item_8_2 * fpu_val_7_95 + param_7;
                                    entity_11[-1] = item_8_2 * param_8 * *entity_11 + param_8;
                                }
                                else
                                {
                                    *entity_11 = fpu_val_6_94;
                                    float item_8_1 = param_5 >> 1;
                                    entity_11[-2] = fpu_val_7_95 / param_13 * item_8_1 + param_7;
                                    entity_11[-1] = param_8 / param_13 * item_8_1 + param_8;
                                }

                                temp_3 = arg_60;
                                i += 1;
                                dest_5 += 0x28;
                                entity_11 = &entity_11[3];
                            } while (i < *(temp_3 + 0x10));
                        }

                        void* entity_12 = *(temp_3 + 0x1c);

                        while (true)
                        {
                            int32_t temp_10 = 0;
                            temp_10 = *(entity_12 + 0xc);
                            void* source_3 = entity_12 + 0x20;
                            int32_t data_28;
                            int32_t temp_11;
                            temp_11 = HIGHD(0x55555556 * temp_10);
                            data_28 = LOWD(0x55555556 * temp_10);
                            param_5 = entity_12;
                            result = temp_11 >> 0x1f;
                            void* arg_7c = source_3;
                            param_6 = 0;

                            if (temp_10 / 3 > 0)
                            {
                                while (true)
                                {
                                    int16_t temp_13 = *(entity_12 + 0x14);
                                    int16_t data_30 = *(source_3 + 2) + temp_13;
                                    int16_t entity_13 = temp_13 + *source_3;
                                    int16_t source_4 = *(source_3 + 4) + temp_13;
                                    int16_t arg_58 = entity_13;

                                    if (entity_13 != data_30 && data_30 != source_4 && source_4 != entity_13
                                        && data_30 != source_4 && source_4 != entity_13)
                                    {
                                        int32_t entity_14 = 0;
                                        entity_14 = !*(param_5 + 0x18);
                                        int32_t data_31 = 0;
                                        data_31 = param_11;

                                        if (entity_14 != data_31)
                                        {
                                            int32_t data_32 = 0;
                                            data_32 = *(param_5 + 0x12);
                                            void* temp_16 = temp_val[entity_4 + 6];
                                            uint32_t dest_7 = source_4;
                                            float** entity_18 = *(temp_16 + 0x38) + data_32 * 0x28;
                                            uint32_t source_8 = data_30;
                                            uint32_t entity_21 = arg_58;
                                            uint32_t data_34 = entity_21 * 3;
                                            long double fpu_val_7_108 = *(&arg_1fc + (data_34 << 2));
                                            long double f11_1 = 0.0f;
                                            fpu_val_7_108 - f11_1;
                                            int32_t saved_target;
                                            arg_c = &(&saved_target)[data_34 + 0x82];
                                            void arg_128;
                                            float arg_130;
                                            void arg_138;

                                            if (*(&((fpu_val_7_108 < f11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_108, f11_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_108 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            {
                                            label_52297f:
                                                uint32_t source_23 = source_8 * 5;
                                                uint32_t entity_46 = entity_21 * 5;
                                                int32_t data_67 = *(arg_60 + 0x14);
                                                long double fpu_val_7_134 = *(data_67 + (source_23 << 3))
                                                    - *(data_67 + (entity_46 << 3));
                                                float* entity_47 = data_67 + (entity_46 << 3);
                                                long double fpu_val_6_107 =
                                                    *(data_67 + (source_23 << 3) + 4) - entity_47[1];
                                                long double fpu_val_5_16 =
                                                    *(data_67 + (source_23 << 3) + 8) - entity_47[2];
                                                uint32_t source_25 = dest_7 * 5;
                                                void* data_68 = data_67 + (source_25 << 3);
                                                float arg_164 = *(data_67 + (source_25 << 3)) - *entity_47;
                                                float arg_168 = *(data_68 + 4) - entity_47[1];
                                                long double fpu_val_4_29 = *(data_68 + 8) - entity_47[2];
                                                float* data_69 = temp_val[entity_4 + 9];
                                                double* source_27 = temp_val[entity_4 + 0xa];
                                                float arg_11c =
                                                    fpu_val_4_29 * fpu_val_6_107 - arg_168 * fpu_val_5_16;
                                                float arg_120 = -((fpu_val_4_29 * fpu_val_7_134
                                                    - arg_164 * fpu_val_5_16));
                                                long double fpu_val_7_136 =
                                                    fpu_val_7_134 * arg_168 - arg_164 * fpu_val_6_107;
                                                float arg_64 = arg_120 * data_69[1]
                                                    + arg_11c * *data_69 + fpu_val_7_136 * data_69[2];
                                                float arg_b4 = arg_64;
                                                float arg_68 = arg_120 * data_69[4]
                                                    + arg_11c * data_69[3] + fpu_val_7_136 * data_69[5];
                                                float arg_b8 = arg_68;
                                                float arg_6c = arg_120 * data_69[7]
                                                    + arg_11c * data_69[6] + fpu_val_7_136 * data_69[8];
                                                long double fpu_val_7_141 = *source_27 - *param_2
                                                    + entity_47[2] * data_69[2] + data_69[1] * entity_47[1]
                                                    + *data_69 * *entity_47;
                                                long double fpu_val_6_131 = entity_47[1] * data_69[4]
                                                    + entity_47[2] * data_69[5] + *entity_47 * data_69[3]
                                                    + source_27[1] - param_2[1];
                                                long double fpu_val_5_44 = entity_47[1] * data_69[7]
                                                    + entity_47[2] * data_69[8] + *entity_47 * data_69[6]
                                                    + source_27[2] - param_2[2];
                                                long double f12_1 = 0.0f;
                                                fpu_val_7_141 - f12_1;

                                                if (!(*(&((fpu_val_7_141 < f12_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_141, f12_1) ? 1 : 0)
                                                    << 0xa | (fpu_val_7_141 == f12_1 ? 1 : 0) << 0xe
                                                    | 0x2800) + 1) & 0x40))
                                                {
                                                label_522b80:
                                                    long double fpu_val_4_46 = 1.0 / sqrtl(
                                                        fpu_val_7_141 * fpu_val_7_141
                                                        + fpu_val_6_131 * fpu_val_6_131
                                                        + fpu_val_5_44 * fpu_val_5_44);
                                                    fpu_val_7_141 = fpu_val_7_141 * fpu_val_4_46;
                                                    fpu_val_6_131 = fpu_val_6_131 * fpu_val_4_46;
                                                    fpu_val_5_44 = fpu_val_5_44 * fpu_val_4_46;
                                                }
                                                else
                                                {
                                                    long double f14_1 = 0.0f;
                                                    fpu_val_6_131 - f14_1;

                                                    if (!(*(&((fpu_val_6_131 < f14_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(fpu_val_6_131, f14_1) ? 1
                                                            : 0) << 0xa | (fpu_val_6_131 == f14_1 ? 1 : 0)
                                                            << 0xe | 0x2800) + 1) & 0x40))
                                                        goto label_522b80;

                                                    long double f17_1 = 0.0f;
                                                    fpu_val_5_44 - f17_1;

                                                    if (!(*(&((fpu_val_5_44 < f17_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(fpu_val_5_44, f17_1) ? 1
                                                            : 0) << 0xa | (fpu_val_5_44 == f17_1 ? 1 : 0)
                                                            << 0xe | 0x2800) + 1) & 0x40))
                                                        goto label_522b80;
                                                }

                                                long double fpu_val_4_57 = arg_64;
                                                long double f16_1 = 0.0f;
                                                fpu_val_4_57 - f16_1;
                                                long double fpu_val_4_64;

                                                if (!(*(&((fpu_val_4_57 < f16_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_4_57, f16_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_4_57 == f16_1 ? 1 : 0) << 0xe
                                                    | 0x2800) + 1) & 0x40))
                                                {
                                                label_522bd0:
                                                    long double fpu_val_4_60 = arg_6c;
                                                    long double fpu_val_3_28 = arg_68;
                                                    long double fpu_val_2_5 = arg_64;
                                                    long double fpu_val_4_63 = 1.0 / sqrtl(
                                                        fpu_val_2_5 * fpu_val_2_5 + fpu_val_3_28 * fpu_val_3_28
                                                        + fpu_val_4_60 * fpu_val_4_60);
                                                    arg_b4 = arg_64 * fpu_val_4_63;
                                                    arg_b8 = arg_b8 * fpu_val_4_63;
                                                    fpu_val_4_64 = fpu_val_4_63 * arg_6c;
                                                }
                                                else
                                                {
                                                    long double fpu_val_4_58 = arg_68;
                                                    long double f19_1 = 0.0f;
                                                    fpu_val_4_58 - f19_1;

                                                    if (!(*(&((fpu_val_4_58 < f19_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(fpu_val_4_58, f19_1) ? 1
                                                            : 0) << 0xa | (fpu_val_4_58 == f19_1 ? 1 : 0)
                                                            << 0xe | 0x2800) + 1) & 0x40))
                                                        goto label_522bd0;

                                                    long double fpu_val_4_59 = arg_6c;
                                                    long double f21_1 = 0.0f;
                                                    fpu_val_4_59 - f21_1;

                                                    if (!(*(&((fpu_val_4_59 < f21_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(fpu_val_4_59, f21_1) ? 1
                                                            : 0) << 0xa | (fpu_val_4_59 == f21_1 ? 1 : 0)
                                                            << 0xe | 0x2800) + 1) & 0x40))
                                                        goto label_522bd0;

                                                    fpu_val_4_64 = arg_6c;
                                                }

                                                long double fpu_val_6_135 = fpu_val_5_44 * fpu_val_4_64
                                                    + fpu_val_6_131 * arg_b8 + fpu_val_7_141 * arg_b4;
                                                long double f20_1 = 0.0f;
                                                fpu_val_6_135 - f20_1;
                                                float item_8_6;

                                                if (!(*(&((fpu_val_6_135 < f20_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_6_135, f20_1) ? 1 : 0)
                                                    << 0xa | (fpu_val_6_135 == f20_1 ? 1 : 0) << 0xe
                                                    | 0x3800) + 1) & 1) && !result_1)
                                                {
                                                    void arg_188;
                                                    float* dest_17 = &arg_188;
                                                    return_addr = &arg_58;
                                                    float** context_11 = &arg_c;
                                                    float* entity_48 = &arg_128;
                                                    context = 3;
                                                    bool flag_10_1;

                                                    do
                                                    {
                                                        int32_t data_72 = 0;
                                                        data_72 = *return_addr;
                                                        int32_t* source_30 = data_67 + data_72 * 0x28;
                                                        *entity_48 = source_30[8];
                                                        entity_48[1] = source_30[9];
                                                        *entity_48 = *(temp_16 + data_32 * 0x2c + 0x64)
                                                            * *entity_48;
                                                        float* data_78 = *context_11;
                                                        entity_48[1] = *(temp_16 + data_32 * 0x2c + 0x66)
                                                            * entity_48[1];
                                                        long double fpu_val_7_149 = data_78[2];
                                                        long double f25_1 = 0.0f;
                                                        fpu_val_7_149 - f25_1;

                                                        if (!(*(&(
                                                            (fpu_val_7_149 < f25_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_7_149, f25_1) ? 1 : 0)
                                                            << 0xa
                                                            | (fpu_val_7_149 == f25_1 ? 1 : 0)
                                                            << 0xe) + 1) & 0x41))
                                                        {
                                                            float data_80 = *source_30;
                                                            *context_11 = dest_17;
                                                            float data_81 = source_30[1];
                                                            float data_82 = source_30[2];
                                                            float arg_14c = data_82 * param_16
                                                                + data_81 * param_15 + data_80 * arg_f4;
                                                            param_13 = arg_14c;
                                                            param_14 = data_82 * param_19 + data_81 * param_18
                                                                + data_80 * param_17 + arg_84;
                                                            dest_17[2] = data_82 * param_22
                                                                + data_81 * param_21 + data_80 * param_20
                                                                + arg_88;
                                                            *dest_17 = arg_14c + arg_80;
                                                            dest_17[1] = param_14;
                                                        }

                                                        entity_48 = &entity_48[2];
                                                        context_11 = &context_11[1];
                                                        return_addr += 2;
                                                        dest_17 = &dest_17[3];
                                                        flag_10_1 = context != 1;
                                                        context -= 1;
                                                    } while (flag_10_1);

                                                    if (!param_14)
                                                        param_2 = entity_18[9];
                                                    else if (param_14 == 1)
                                                        param_2 = *(temp_16 + data_32 * 0x2c + 0x60);

                                                    item_8_6 = param_5 >> 1;
                                                    Light_ComputeDirectionalLight_2(&(&saved_target)[source_8 * 3 + 0x82],
                                                        &(&saved_target)[dest_7 * 3 + 0x82], param_5,
                                                        param_2, *(temp_16 + data_32 * 0x2c + 0x64),
                                                        *(temp_16 + data_32 * 0x2c + 0x66), 0,
                                                        nullptr, param_5, param_6, param_7, param_8, item_8_6,
                                                        item_8_6, arg_c,
                                                        &(&saved_target)[source_8 * 3 + 0x82],
                                                        &(&saved_target)[dest_7 * 3 + 0x82],
                                                        &arg_128, &arg_130, &arg_138, param_10);
                                                }
                                                else if (param_10 || result_1)
                                                {
                                                    void arg_1d0;
                                                    float* dest_18 = &arg_1d0;
                                                    return_addr = &arg_58;
                                                    float** context_12 = &arg_c;
                                                    float* entity_52 = &arg_128;
                                                    context = 3;
                                                    bool flag_13_1;

                                                    do
                                                    {
                                                        int32_t data_97 = 0;
                                                        data_97 = *return_addr;
                                                        int32_t* source_33 = data_67 + data_97 * 0x28;
                                                        *entity_52 = source_33[8];
                                                        entity_52[1] = source_33[9];
                                                        *entity_52 = *(temp_16 + data_32 * 0x2c + 0x64)
                                                            * *entity_52;
                                                        float* data_103 = *context_12;
                                                        entity_52[1] = *(temp_16 + data_32 * 0x2c + 0x66)
                                                            * entity_52[1];
                                                        long double fpu_val_7_169 = data_103[2];
                                                        long double f24_1 = 0.0f;
                                                        fpu_val_7_169 - f24_1;

                                                        if (!(*(&(
                                                            (fpu_val_7_169 < f24_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_7_169, f24_1) ? 1 : 0)
                                                            << 0xa
                                                            | (fpu_val_7_169 == f24_1 ? 1 : 0)
                                                            << 0xe) + 1) & 0x41))
                                                        {
                                                            float data_111 = *source_33;
                                                            *context_12 = dest_18;
                                                            float data_112 = source_33[1];
                                                            float data_113 = source_33[2];
                                                            float arg_140 = data_113 * param_16
                                                                + data_112 * param_15 + data_111 * arg_f4;
                                                            param_10 = arg_140;
                                                            param_11 = data_113 * param_19
                                                                + data_112 * param_18 + data_111 * param_17
                                                                + arg_84;
                                                            dest_18[2] = (data_113 * param_22
                                                                + data_112 * param_21 + data_111 * param_20
                                                                + arg_88) * 0.999000013f;
                                                            *dest_18 = arg_140 + arg_80;
                                                            dest_18[1] = param_11;
                                                        }
                                                        else
                                                        {
                                                            *dest_18 = **context_12;
                                                            dest_18[1] = (*context_12)[1];
                                                            float* data_109 = *context_12;
                                                            *context_12 = dest_18;
                                                            dest_18[2] = data_109[2];
                                                            dest_18[2] = dest_18[2] * 1.001001f;
                                                        }

                                                        entity_52 = &entity_52[2];
                                                        context_12 = &context_12[1];
                                                        return_addr += 2;
                                                        dest_18 = &dest_18[3];
                                                        flag_13_1 = context != 1;
                                                        context -= 1;
                                                    } while (flag_13_1);

                                                    if (!param_14)
                                                        param_2 = g_a83b28;
                                                    else if (param_14 == 1)
                                                        param_2 = *(temp_16 + data_32 * 0x2c + 0x60);

                                                    item_8_6 = param_5 >> 1;
                                                    Light_ComputeDirectionalLight_2(&(&saved_target)[source_8 * 3 + 0x82],
                                                        &(&saved_target)[dest_7 * 3 + 0x82], param_5,
                                                        param_2, *(temp_16 + data_32 * 0x2c + 0x64),
                                                        *(temp_16 + data_32 * 0x2c + 0x66), 0,
                                                        nullptr, param_5, param_6, param_7, param_8, item_8_6,
                                                        item_8_6, arg_c,
                                                        &(&saved_target)[source_8 * 3 + 0x82],
                                                        &(&saved_target)[dest_7 * 3 + 0x82],
                                                        &arg_128, &arg_130, &arg_138, param_10);
                                                }
                                            }
                                            else
                                            {
                                                long double fpu_val_7_109 =
                                                    (&saved_target)[source_8 * 3 + 0x84];
                                                long double f13_1 = 0.0f;
                                                fpu_val_7_109 - f13_1;

                                                if (*(&((fpu_val_7_109 < f13_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_109, f13_1) ? 1 : 0)
                                                        << 0xa | (fpu_val_7_109 == f13_1 ? 1 : 0) << 0xe)
                                                        + 1) & 0x41)
                                                    goto label_52297f;

                                                long double fpu_val_7_110 =
                                                    (&saved_target)[dest_7 * 3 + 0x84];
                                                long double f15_1 = 0.0f;
                                                fpu_val_7_110 - f15_1;

                                                if (*(&((fpu_val_7_110 < f15_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_110, f15_1) ? 1 : 0)
                                                        << 0xa | (fpu_val_7_110 == f15_1 ? 1 : 0) << 0xe)
                                                        + 1) & 0x41)
                                                    goto label_52297f;

                                                long double fpu_val_7_113 = (
                                                    (&saved_target)[dest_7 * 3 + 0x83]
                                                    - (&saved_target)[data_34 + 0x83]) * (
                                                    (&saved_target)[source_8 * 3 + 0x82]
                                                    - (&saved_target)[data_34 + 0x82]);
                                                long double fpu_val_6_105 = (
                                                    (&saved_target)[source_8 * 3 + 0x83]
                                                    - (&saved_target)[data_34 + 0x83]) * (
                                                    (&saved_target)[dest_7 * 3 + 0x82]
                                                    - (&saved_target)[data_34 + 0x82]);
                                                long double fpu_val_7_114 = fpu_val_7_113 - fpu_val_6_105;
                                                long double f18_1 = 0.0f;
                                                fpu_val_7_114 - f18_1;

                                                if (!(*(&((fpu_val_7_114 < f18_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_114, f18_1) ? 1 : 0)
                                                    << 0xa | (fpu_val_7_114 == f18_1 ? 1 : 0) << 0xe)
                                                    + 1) & 1) && !result_1)
                                                {
                                                    void** item_8_3 = &arg_c;
                                                    float* data_47 = &arg_128;
                                                    int32_t dest_8 = *(arg_60 + 0x14);
                                                    int16_t* source_9 = &arg_58;
                                                    return_addr = 3;
                                                    bool flag_9_1;

                                                    do
                                                    {
                                                        int32_t entity_24 = 0;
                                                        entity_24 = *source_9;
                                                        int32_t entity_25 = entity_24 * 5;
                                                        *data_47 = *(dest_8 + (entity_25 << 3) + 0x20);
                                                        data_47[1] = *(dest_8 + (entity_25 << 3) + 0x24);
                                                        *data_47 = *(temp_16 + data_32 * 0x2c + 0x64)
                                                            * *data_47;
                                                        data_47[1] = *(temp_16 + data_32 * 0x2c + 0x66)
                                                            * data_47[1];

                                                        if (!param_10)
                                                        {
                                                            void* entity_30 = *item_8_3;
                                                            *data_47 = *(entity_30 + 8) * *data_47;
                                                            data_47[1] = *(entity_30 + 8) * data_47[1];
                                                        }

                                                        source_9 = &source_9[1];
                                                        data_47 = &data_47[2];
                                                        item_8_3 = &item_8_3[1];
                                                        flag_9_1 = return_addr != 1;
                                                        return_addr -= 1;
                                                    } while (flag_9_1);

                                                    if (!param_14)
                                                        param_2 = entity_18[9];
                                                    else if (param_14 == 1)
                                                        param_2 = *(temp_16 + data_32 * 0x2c + 0x60);

                                                    Light_SampleLightmap(&(&saved_target)[source_8 * 3 + 0x82],
                                                        &(&saved_target)[dest_7 * 3 + 0x82], param_5,
                                                        param_2, *(temp_16 + data_32 * 0x2c + 0x64),
                                                        *(temp_16 + data_32 * 0x2c + 0x66), 0,
                                                        nullptr, param_5, param_6, arg_c,
                                                        &(&saved_target)[source_8 * 3 + 0x82],
                                                        &(&saved_target)[dest_7 * 3 + 0x82],
                                                        &arg_128, &arg_130, &arg_138, param_10);
                                                }
                                                else if (param_10 || result_1)
                                                {
                                                    float** dest_9 = &arg_c;
                                                    float** arg_50 = &arg_c;
                                                    int32_t data_58 = *(arg_60 + 0x14);
                                                    void arg_1b4;
                                                    float* entity_41 = &arg_1b4;
                                                    float* data_59 = &arg_128;
                                                    return_addr = &arg_58;
                                                    context = 3;
                                                    bool flag_8_1;

                                                    do
                                                    {
                                                        int32_t source_10 = 0;
                                                        source_10 = *return_addr;
                                                        int32_t source_11 = source_10 * 5;
                                                        *data_59 = *(data_58 + (source_11 << 3) + 0x20);
                                                        data_59[1] =
                                                            *(data_58 + (source_11 << 3) + 0x24);
                                                        *data_59 = *(temp_16 + data_32 * 0x2c + 0x64)
                                                            * *data_59;
                                                        data_59[1] = *(temp_16 + data_32 * 0x2c + 0x66)
                                                            * data_59[1];

                                                        if (!param_10)
                                                        {
                                                            float* source_16 = *dest_9;
                                                            *data_59 = *data_59 * source_16[2];
                                                            data_59[1] = data_59[1] * source_16[2];
                                                        }

                                                        float* dest_10 = *dest_9;
                                                        data_59 = &data_59[2];
                                                        entity_41[-2] = *dest_10;
                                                        entity_41[-1] = dest_10[1];
                                                        *entity_41 = dest_10[2];
                                                        long double fpu_val_7_132 =
                                                            *entity_41 * 1.001001f;
                                                        entity_41 = &entity_41[3];
                                                        *arg_50 = &entity_41[-2];
                                                        dest_9 = &arg_50[1];
                                                        entity_41[-3] = fpu_val_7_132;
                                                        return_addr += 2;
                                                        flag_8_1 = context != 1;
                                                        arg_50 = dest_9;
                                                        context -= 1;
                                                    } while (flag_8_1);

                                                    if (!param_14)
                                                        param_2 = g_a83b28;
                                                    else if (param_14 == 1)
                                                        param_2 = *(temp_16 + data_32 * 0x2c + 0x60);

                                                    Light_SampleLightmap(&(&saved_target)[source_8 * 3 + 0x82],
                                                        &(&saved_target)[dest_7 * 3 + 0x82], param_5,
                                                        param_2, *(temp_16 + data_32 * 0x2c + 0x64),
                                                        *(temp_16 + data_32 * 0x2c + 0x66), 0,
                                                        nullptr, param_5, param_6, arg_c,
                                                        &(&saved_target)[source_8 * 3 + 0x82],
                                                        &(&saved_target)[dest_7 * 3 + 0x82],
                                                        &arg_128, &arg_130, &arg_138, param_10);
                                                }
                                            }
                                        }
                                    }

                                    int32_t entity_66 = 0;
                                    entity_66 = *(param_5 + 0xc);
                                    int32_t data_128;
                                    void* temp_23;
                                    temp_23 = HIGHD(0x55555556 * entity_66);
                                    data_128 = LOWD(0x55555556 * entity_66);
                                    result = temp_23 >> 0x1f;
                                    bool flag_6_1 = param_6 + 1 < entity_66 / 3;
                                    param_6 += 1;
                                    arg_7c += 6;

                                    if (!flag_6_1)
                                        break;

                                    source_3 = arg_7c;
                                    entity_12 = param_5;
                                }

                                context_1 = arg_c;
                                entity_12 = param_5;
                            }

                            result = *(entity_12 + 0xe);

                            if (result == 0xffff)
                                break;

                            entity_12 = entity_12 + (result & 0xffff) + 0x20;
                        }

                        source_2 = param_2;
                        dest_4 = arg_e8;
                    }
                }
            }
            else
            {
                source_2 = param_2;
                dest_4 = arg_e8;
            }

            dest_4 += 1;
            arg_e8 = dest_4;

            if (dest_4 >= *arg_ec)
                break;

            temp_val = arg_ec;
        }
    }

    return result;
}

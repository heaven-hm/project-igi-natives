// Original IGI.EXE function: Script_ParseEnumReal32_32 (VA 0x004FEC10; static CFG gate PASS, CFG score 0.903).
#include "Script_ParseEnumReal32_32.h"
char* Script_ParseEnumReal32_32(int32_t context, float* param_2, int32_t* param_3, char* param_4, float param_5, int32_t param_6, float* param_7 )

{
    float item_140 = 0.0f;
    int32_t item_130 = 0;
    void* data_1 = Script_ExecuteLevelScript_4(context);

    if (!data_1)
    {
        *param_4 = data_1;
        return data_1;
    }

    int32_t* data_2 = QTask_DeleteTask_2(data_1, g_a7a620);
    int32_t* context_val = data_2;
    int32_t* item_cc = context_val;

    if (!context_val)
    {
        *param_4 = context_val;
        return param_4;
    }

    long double fpu7 = *(data_1 + 0x28);
    long double f1 = 0.0f;
    fpu7 - f1;
    data_2 = (fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe;

    if (!(*(&data_2 + 1) & 0x40))
    {
        long double fpu_val_7_1 = param_5;
        long double f2_1 = 0.0f;
        fpu_val_7_1 - f2_1;
        data_2 = (fpu_val_7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&data_2 + 1) & 1)
        {
            do
            {
                fpu_val_7_1 = fpu_val_7_1 + *(data_1 + 0x28);
                long double f4_1 = 0.0f;
                fpu_val_7_1 - f4_1;
                data_2 = (fpu_val_7_1 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_1, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f4_1 ? 1 : 0) << 0xe | 0x3800;
            } while (*(&data_2 + 1) & 1);

            param_5 = fpu_val_7_1;
        }

        long double f3_1 = *(data_1 + 0x28);
        fpu_val_7_1 - f3_1;
        data_2 = (fpu_val_7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f3_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&data_2 + 1) & 1))
        {
            do
            {
                fpu_val_7_1 = fpu_val_7_1 - *(data_1 + 0x28);
                long double f6_1 = *(data_1 + 0x28);
                fpu_val_7_1 - f6_1;
                data_2 = (fpu_val_7_1 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_1, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f6_1 ? 1 : 0) << 0xe | 0x3800;
            } while (!(*(&data_2 + 1) & 1));

            param_5 = fpu_val_7_1;
        }

        long double f5_1 = 0.0f;
        fpu_val_7_1 - f5_1;
        data_2 = (fpu_val_7_1 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f5_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f5_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&data_2 + 1) & 0x40))
        {
            long double fpu6 = 0.0f;
            fpu6 - fpu_val_7_1;
            data_2 = (fpu6 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu_val_7_1) ? 1 : 0) << 0xa
                | (fpu6 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800;

            if (*(&data_2 + 1) & 1)
            {
                void* context_2;

                do
                {
                    data_2 = g_a7a620;
                    data_2 = QTask_TriggerEvent_2(item_cc, data_2);

                    if (!data_2)
                    {
                        *param_4 = 0;
                        return data_2;
                    }

                    context_2 = data_2[0x3c];
                    item_cc = data_2;
                    long double fpu_val_7_5 = item_140 + *(context_2 + 0xf8);
                    item_140 = fpu_val_7_5;
                    long double f8_1 = param_5;
                    fpu_val_7_5 - f8_1;
                    data_2 = (fpu_val_7_5 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_5, f8_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_5 == f8_1 ? 1 : 0) << 0xe;
                } while (*(&data_2 + 1) & 1);

                if (context_2)
                {
                    long double fpu_val_7_7 = item_140 - *(context_2 + 0xf8);
                    long double f9 = param_5;
                    fpu_val_7_7 - f9;
                    data_2 = (fpu_val_7_7 < f9 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_7, f9) ? 1 : 0) << 0xa
                        | (fpu_val_7_7 == f9 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&data_2 + 1) & 0x40)
                    {
                        int32_t i_3 = param_6 + 1;

                        if (i_3 > 0)
                        {
                            data_2 = param_3;
                            int32_t i;

                            do
                            {
                                data_2 = &data_2[6];
                                i = i_3;
                                i_3 -= 1;
                                *(data_2 - 0x18) = *(context_2 + 0x104) + *(context_2 + 0x20);
                                *(data_2 - 0x10) = *(context_2 + 0x108) + *(context_2 + 0x28);
                                *(data_2 - 8) = *(context_2 + 0x10c) + *(context_2 + 0x30);
                            } while (i != 1);
                        }

                        if (param_2)
                            memcpy(param_2, context_2 + 0x200, 0x28);

                        *param_4 = 1;
                        return data_2;
                    }

                    long double f10 = param_5;
                    fpu_val_7_7 - f10;
                    int32_t dest_3;

                    if (!(*(&((fpu_val_7_7 < f10 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_7, f10) ? 1 : 0) << 0xa
                            | (fpu_val_7_7 == f10 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        dest_3 = item_130;
                    else
                    {
                        dest_3 = item_130;
                        float* entity_5 = context_2 + 0x548;
                        long double f13_1;

                        do
                        {
                            if (dest_3 >= *(context_2 + 0x59c))
                            {
                                int32_t data_6 = param_6;
                                int32_t i_5 = data_6 + 1;

                                if (i_5 > 0)
                                {
                                    int32_t* entity_6 = param_3;
                                    int32_t i_1;

                                    do
                                    {
                                        entity_6 = &entity_6[6];
                                        *(entity_6 - 0x18) = *(context_2 + *(context_2 + 0x59c) * 0xc + 0x104)
                                            + *(context_2 + 0x20);
                                        i_1 = i_5;
                                        i_5 -= 1;
                                        *(entity_6 - 0x10) = *(context_2 + (*(context_2 + 0x59c) + 0x16) * 0xc)
                                            + *(context_2 + 0x28);
                                        data_6 = *(context_2 + 0x59c) * 3;
                                        *(entity_6 - 8) =
                                            *(context_2 + (data_6 << 2) + 0x10c) + *(context_2 + 0x30);
                                    } while (i_1 != 1);
                                }

                                if (param_2)
                                {
                                    data_6 = *(context_2 + 0x59c);
                                    memcpy(param_2, context_2 + data_6 * 0x28 + 0x200, 0x28);
                                }

                                *param_4 = 1;
                                return data_6;
                            }

                            fpu_val_7_7 = fpu_val_7_7 + *entity_5;
                            dest_3 += 1;
                            entity_5 = &entity_5[1];
                            f13_1 = param_5;
                            fpu_val_7_7 - f13_1;
                        } while (*(&((fpu_val_7_7 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_7, f13_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_7 == f13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1);
                    }

                    int32_t dest_5 = dest_3 - 1;
                    int32_t source_5 = 0;
                    int32_t item_130_1 = dest_5;
                    item_140 = fpu_val_7_7 - *(context_2 + (dest_3 << 2) + 0x544);
                    void* data_14 = context_2 + dest_5 * 0xc;
                    float* item_b4 = data_14 + 0x104;
                    float* item_90 = data_14 + 0x110;
                    float item_154 = (param_5 - item_140) / *(context_2 + (dest_5 << 2) + 0x548);
                    void* item_94 = context_2 + ((dest_5 * 3 + 0x45) << 2);
                    float* entity_11 = context_2 + ((dest_5 * 3 + 0x42) << 2);
                    float* item_b0 = entity_11;
                    float* item_98 = data_14 + 0x10c;
                    float* item_ac = data_14 + 0x118;
                    float item_88 = (*(context_2 + ((dest_5 * 3 + 0x45) << 2))
                        - *(context_2 + ((dest_5 * 3 + 0x42) << 2))) * item_154 + *entity_11;
                    float* entity_13 = param_2;
                    int32_t* data_16 = param_3;
                    float item_84 =
                        (*(data_14 + 0x118) - *(data_14 + 0x10c)) * item_154 + *(data_14 + 0x10c);
                    *data_16 = (*(data_14 + 0x110) - *(data_14 + 0x104)) * item_154 + *(data_14 + 0x104)
                        + *(context_2 + 0x20);
                    *(data_16 + 8) = item_88 + *(context_2 + 0x28);
                    *(data_16 + 0x10) = item_84 + *(context_2 + 0x30);
                    int16_t idx = 0;
                    char item_139;
                    float item_12c;
                    int32_t item_11c;
                    float item_118;
                    float item_114;
                    float item_c8;
                    int32_t item_a8;
                    float item_9c;

                    if (entity_13)
                    {
                        int32_t temp_8 = dest_5 * 5;
                        void* entity_14 = context_2 + (temp_8 << 3);
                        long double fpu_val_7_37 = *(context_2 + (temp_8 << 3) + 0x220)
                            + *(context_2 + (temp_8 << 3) + 0x210) + *(entity_14 + 0x200);
                        long double f12_1 = 0.0f;
                        fpu_val_7_37 - f12_1;
                        float item_c4;
                        float item_c0;
                        float item_bc_1;
                        long double fpu_val_7_40;

                        if (*(&((fpu_val_7_37 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_37, f12_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_37 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                        {
                            long double fpu_val_7_42 = *(entity_14 + 0x210);
                            long double f14_1 = *(entity_14 + 0x200);
                            fpu_val_7_42 - f14_1;
                            item_a8 = 1;
                            int32_t item_a4_1 = 2;
                            int32_t item_a0_1 = 0;
                            int32_t item_150_1 = 0;

                            if (!(*(&((fpu_val_7_42 < f14_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_42, f14_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_42 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                source_5 = 1;
                                item_150_1 = 1;
                            }

                            long double fpu_val_7_43 = *(entity_14 + 0x220);
                            long double f15_1 = *((source_5 << 4) + entity_14 + 0x200);
                            fpu_val_7_43 - f15_1;

                            if (!(*(&((fpu_val_7_43 < f15_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_43, f15_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_43 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                source_5 = 2;
                                item_150_1 = 2;
                            }

                            int32_t temp_11 = (&item_a8)[source_5];
                            fpu_val_7_40 = sqrtl(*((source_5 << 4) + entity_14 + 0x200)
                                - *((temp_11 << 4) + entity_14 + 0x200)
                                - *(((&item_a8)[temp_11] << 4) + entity_14 + 0x200) + 1.0f);
                            (&item_c8)[item_150_1] = fpu_val_7_40 * 0.5f;
                            long double f18_1 = 0.0f;
                            fpu_val_7_40 - f18_1;

                            if (!(*(&((fpu_val_7_40 < f18_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_40, f18_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_40 == f18_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                                fpu_val_7_40 = 0.5f / fpu_val_7_40;

                            int32_t data_24 = item_150_1 * 3;
                            int32_t data_25 = temp_11 * 3;
                            int32_t data_28 = (&item_a8)[temp_11];
                            (&item_c8)[temp_11] = (*(entity_14 + ((item_150_1 + data_25) << 2) + 0x200)
                                + *(entity_14 + ((data_24 + temp_11) << 2) + 0x200)) * fpu_val_7_40;
                            int32_t temp_12 = data_28 * 3;
                            (&item_c8)[data_28] = (*(entity_14 + ((item_150_1 + temp_12) << 2) + 0x200)
                                + *(entity_14 + ((data_24 + data_28) << 2) + 0x200)) * fpu_val_7_40;
                            item_bc_1 = -(((*(entity_14 + ((data_28 + data_25) << 2) + 0x200)
                                - *(entity_14 + ((temp_11 + temp_12) << 2) + 0x200)) * fpu_val_7_40));
                        }
                        else
                        {
                            long double fpu_val_7_39 = sqrtl(fpu_val_7_37 + 1.0f);
                            item_bc_1 = fpu_val_7_39 * 0.5f;
                            fpu_val_7_40 = 0.5f / fpu_val_7_39;
                            item_c8 = -(((*(entity_14 + 0x214) - *(entity_14 + 0x21c)) * fpu_val_7_40));
                            item_c4 = -(((*(entity_14 + 0x218) - *(context_2 + ((dest_5 * 5 + 0x41) << 3)))
                                * fpu_val_7_40));
                            item_c0 = -(((*(entity_14 + 0x204) - *(entity_14 + 0x20c)) * fpu_val_7_40));
                        }
                        int32_t data_30 = *(entity_14 + 0x224);
                        long double fpu_val_7_51 =
                            *(entity_14 + 0x248) + *(entity_14 + 0x238) + *(entity_14 + 0x228);
                        long double f16_1 = 0.0f;
                        fpu_val_7_51 - f16_1;
                        float item_110;
                        float item_10c;
                        float item_108_1;
                        long double fpu_val_7_54;

                        if (*(&((fpu_val_7_51 < f16_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_51, f16_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_51 == f16_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                        {
                            long double fpu_val_7_56 = *(entity_14 + 0x238);
                            long double f19_1 = *(entity_14 + 0x228);
                            fpu_val_7_56 - f19_1;
                            int32_t temp_19 = 0;
                            item_a8 = 1;
                            int32_t item_a4_2 = 2;
                            int32_t item_a0_2 = 0;

                            if (!(*(&((fpu_val_7_56 < f19_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_56, f19_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_56 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                temp_19 = 1;

                            long double fpu_val_7_57 = *(entity_14 + 0x248);
                            long double f21_1 = *((temp_19 << 4) + entity_14 + 0x228);
                            fpu_val_7_57 - f21_1;

                            if (!(*(&((fpu_val_7_57 < f21_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_57, f21_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_57 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                temp_19 = 2;

                            int32_t source_12 = (&item_a8)[temp_19];
                            fpu_val_7_54 = sqrtl(*((temp_19 << 4) + entity_14 + 0x228)
                                - *((source_12 << 4) + entity_14 + 0x228)
                                - *(((&item_a8)[source_12] << 4) + entity_14 + 0x228) + 1.0f);
                            (&item_114)[temp_19] = fpu_val_7_54 * 0.5f;
                            long double f22_1 = 0.0f;
                            fpu_val_7_54 - f22_1;

                            if (!(*(&((fpu_val_7_54 < f22_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_54, f22_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_54 == f22_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                                fpu_val_7_54 = 0.5f / fpu_val_7_54;

                            int32_t dest_8 = source_12 * 3;
                            int32_t data_40 = temp_19 * 3;
                            int32_t data_42 = (&item_a8)[source_12];
                            int32_t dest_10 = data_42 * 3;
                            (&item_114)[source_12] = (*(entity_14 + ((dest_8 + temp_19) << 2) + 0x228)
                                + *(entity_14 + ((data_40 + source_12) << 2) + 0x228)) * fpu_val_7_54;
                            (&item_114)[data_42] = (*(entity_14 + ((dest_10 + temp_19) << 2) + 0x228)
                                + *(entity_14 + ((data_40 + data_42) << 2) + 0x228)) * fpu_val_7_54;
                            item_108_1 = -(((*(entity_14 + ((dest_8 + data_42) << 2) + 0x228)
                                - *(entity_14 + ((dest_10 + source_12) << 2) + 0x228)) * fpu_val_7_54));
                        }
                        else
                        {
                            long double fpu_val_7_53 = sqrtl(fpu_val_7_51 + 1.0f);
                            item_108_1 = fpu_val_7_53 * 0.5f;
                            fpu_val_7_54 = 0.5f / fpu_val_7_53;
                            item_114 = -(((*(entity_14 + 0x23c) - *(entity_14 + 0x244)) * fpu_val_7_54));
                            item_110 = -(((*(entity_14 + 0x240) - *(context_2 + ((dest_5 * 5 + 0x46) << 3)))
                                * fpu_val_7_54));
                            item_10c = -(((*(entity_14 + 0x22c) - *(entity_14 + 0x234)) * fpu_val_7_54));
                        }
                        int32_t entity_15 = *(entity_14 + 0x24c);
                        Sys_CloseFileStream_13(&item_139, &item_118, &item_9c, &item_c8, &item_114);
                        int16_t data_46;
                        data_46 = item_139;

                        if (data_46)
                        {
                            item_114 = -(item_114);
                            item_110 = -(item_110);
                            item_10c = -(item_10c);
                            item_108_1 = -(item_108_1);
                        }

                        long double fpu_val_7_71 = item_118;
                        long double f23_1 = 0.0f;
                        fpu_val_7_71 - f23_1;
                        float item_128;
                        float item_124;
                        float item_120;

                        if (!(*(&((fpu_val_7_71 < f23_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_71, f23_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_71 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                            long double fpu_val_7_72 = item_118;
                            long double f26_1 = 0.00999999978f;
                            fpu_val_7_72 - f26_1;
                            long double fpu_val_6_61;
                            long double fpu_val_7_74;

                            if (!(*(&((fpu_val_7_72 < f26_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_72, f26_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_72 == f26_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                float item_138_3 = item_118 * item_154;
                                long double fp0_1;
                                bool c1_1;
                                bool c2_21;
                                fp0_1 = __fsin(item_118 - item_138_3);
                                fpu_val_7_74 = fp0_1 * item_9c;
                                long double fp0_2;
                                bool c1_2;
                                bool c2_22;
                                fp0_2 = __fsin(item_138_3);
                                fpu_val_6_61 = fp0_2 * item_9c;
                            }
                            else
                            {
                                fpu_val_7_74 = 1.0f - item_154;
                                fpu_val_6_61 = item_154;
                            }

                            item_11c = entity_15 + data_30 + 1;
                            item_12c = fpu_val_6_61 * item_114 + fpu_val_7_74 * item_c8;
                            item_128 = fpu_val_6_61 * item_110 + fpu_val_7_74 * item_c4;
                            item_124 = fpu_val_6_61 * item_10c + fpu_val_7_74 * item_c0;
                            item_120 = fpu_val_6_61 * item_108_1 + fpu_val_7_74 * item_bc_1;
                        }
                        else
                            memcpy(&item_12c, &item_c8, 0x14);

                        long double fpu_val_7_83 = item_12c * item_12c;
                        dest_5 = item_130_1;
                        long double fpu_val_6_68 = item_128 * item_12c;
                        param_2[9] = item_11c;
                        entity_13 = param_2;
                        long double fpu_val_6_69 = fpu_val_6_68 + fpu_val_6_68;
                        long double fpu_val_5_11 = item_124 * item_12c;
                        float item_148_3 = fpu_val_5_11 + fpu_val_5_11;
                        long double fpu_val_5_14 = item_120 * item_12c;
                        float item_150_2 = fpu_val_5_14 + fpu_val_5_14;
                        long double fpu_val_5_17 = item_128 * item_128;
                        float item_14c_1 = fpu_val_5_17 + fpu_val_5_17;
                        long double fpu_val_5_20 = item_124 * item_128;
                        float item_d0_1 = fpu_val_5_20 + fpu_val_5_20;
                        long double fpu_val_5_23 = item_120 * item_128;
                        float item_144_2 = fpu_val_5_23 + fpu_val_5_23;
                        long double fpu_val_5_26 = item_124 * item_124;
                        float item_138_4 = fpu_val_5_26 + fpu_val_5_26;
                        long double fpu_val_5_29 = item_120 * item_124;
                        long double fpu_val_5_30 = fpu_val_5_29 + fpu_val_5_29;
                        *param_2 = 1.0f - item_14c_1 - item_138_4;
                        param_2[1] = fpu_val_6_69 - fpu_val_5_30;
                        param_2[2] = item_144_2 + item_148_3;
                        param_2[3] = fpu_val_5_30 + fpu_val_6_69;
                        long double fpu_val_7_85 = 1.0f - (fpu_val_7_83 + fpu_val_7_83);
                        param_2[4] = fpu_val_7_85 - item_138_4;
                        param_2[5] = item_d0_1 - item_150_2;
                        param_2[6] = item_148_3 - item_144_2;
                        param_2[7] = item_d0_1 + item_150_2;
                        param_2[8] = fpu_val_7_85 - item_14c_1;
                        idx = 0;
                        data_16 = param_3;
                    }

                    float* source_13 = param_7;

                    if (source_13)
                    {
                        float item_88_1 =
                            entity_13[4] * source_13[1] + entity_13[3] * *source_13 + entity_13[5] * source_13[2];
                        float item_84_1 =
                            entity_13[7] * source_13[1] + entity_13[6] * *source_13 + entity_13[8] * source_13[2];
                        *data_16 = entity_13[1] * source_13[1] + entity_13[2] * source_13[2] + *entity_13 * *source_13
                            + *data_16;
                        *(data_16 + 8) = item_88_1 + *(data_16 + 8);
                        *(data_16 + 0x10) = item_84_1 + *(data_16 + 0x10);
                        idx = 0;
                    }

                    int32_t data_49 = param_6;
                    float item_d0_2 = param_5;
                    int32_t item_138_5 = 0;

                    if (data_49 > 0)
                    {
🚫🚫                        while (true)
                        {
                            /* unimplemented  {fld fp0, dword [data_val+entity_val*4]} */
🚫🚫                            float item_150_3 = /* float item_150_3 =
                                unimplemented  {fst dword [stack_ptr+0x10], fp0} */;
🚫🚫                            /* unimplemented  {fld fp0, fp0} */
🚫🚫                            /* unimplemented  {fmul fp0, fp1} */
                            int32_t* item_154_1 = param_3;
                            param_3 = &param_3[6];
🚫🚫🚫                            float item_14c_2 = /* float item_14c_2 =
                                unimplemented  {fstp dword [stack_ptr+0x14], fp0} */;
                            /* unimplemented  {fstp dword [stack_ptr+0x14], fp0} */
🚫🚫                            /* unimplemented  {fld fp0, fp0} */
🚫🚫                            /* unimplemented  {fadd dword [stack_ptr+0x90]} */
🚫🚫🚫                            float item_d0_3 = /* float item_d0_3 =
                                unimplemented  {fstp dword [stack_ptr+0x90], fp0} */;
                            /* unimplemented  {fstp dword [stack_ptr+0x90], fp0} */

                            if (param_2)
                                param_2 = &param_2[0xa];

⋯                            long double f20_1 = 0.0f;
                            /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f20_1 */
                                - f20_1;
                            bool c0_21 = /* bool c0_21 =
                                unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f20_1 */
                                < f20_1;
                            bool c2_23 = FCMP_UO(/* bool c2_23 = is_unordered.t(
                                unimplemented  {fcomp fp0, dword [&g_5333ec]}, f20_1) */,
                                f20_1);
                            bool c3_21 = /* bool c3_21 =
                                unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f20_1 */
                                == f20_1;
                            /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
                            int16_t top_49;
                            double item_100;
                            double item_e8;
                            double item_e0;
                            int32_t* data_58;
                            int16_t top_35;

                            if (!(*(&((c0_21 ? 1 : 0) << 8 | (c2_23 ? 1 : 0) << 0xa
                                | (c3_21 ? 1 : 0) << 0xe | (idx & 7) << 0xb) + 1) & 1))
                            {
🚫🚫                                /* unimplemented  {fld fp0, dword [entity_val]} */
🚫🚫                                /* unimplemented  {fadd qword [context_val+0x20]} */
🚫🚫🚫                                item_e8 = /* item_e8 = unimplemented  {fstp qword [stack_ptr+0x78], fp0} */;
                                /* unimplemented  {fstp qword [stack_ptr+0x78], fp0} */
🚫🚫                                /* unimplemented  {fld fp0, dword [temp_val]} */
🚫🚫                                /* unimplemented  {fadd qword [context_val+0x28]} */
🚫🚫🚫                                item_e0 = /* item_e0 = unimplemented  {fstp qword [stack_ptr+0x80], fp0} */;
                                /* unimplemented  {fstp qword [stack_ptr+0x80], fp0} */
🚫🚫                                /* unimplemented  {fld fp0, dword [data_val]} */
🚫🚫                                /* unimplemented  {fadd qword [context_val+0x30]} */
🚫🚫🚫                                double item_d8_5 = /* double item_d8_5 =
                                    unimplemented  {fstp qword [stack_ptr+0x88], fp0} */;
                                /* unimplemented  {fstp qword [stack_ptr+0x88], fp0} */

                                if (source_13)
                                {
🚫🚫                                    /* unimplemented  {fld fp0, dword [context_val+temp_val*8]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [source_val+0x8]} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [context_val+entity_val*8+0x22c]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [source_val+0x4]} */
🚫🚫🚫                                    /* unimplemented  {faddp fp1, fp0} */
                                    /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [data_val+0x228]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [source_val]} */
🚫🚫🚫                                    /* unimplemented  {faddp fp1, fp0} */
                                    /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [data_val+0x238]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [source_val+0x4]} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [data_val+0x234]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [source_val]} */
🚫🚫🚫                                    /* unimplemented  {faddp fp1, fp0} */
                                    /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [data_val+0x23c]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [source_val+0x8]} */
🚫🚫🚫                                    /* unimplemented  {faddp fp1, fp0} */
                                    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫                                    float item_10_1 = /* float item_10_1 =
                                        unimplemented  {fstp dword [stack_ptr+0x150], fp0} */;
                                    /* unimplemented  {fstp dword [stack_ptr+0x150], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [data_val+0x244]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [source_val+0x4]} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [data_val+0x240]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [source_val]} */
🚫🚫🚫                                    /* unimplemented  {faddp fp1, fp0} */
                                    /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [data_val+0x248]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [source_val+0x8]} */
🚫🚫🚫                                    /* unimplemented  {faddp fp1, fp0} */
                                    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫                                    float item_c_1 = /* float item_c_1 =
                                        unimplemented  {fstp dword [stack_ptr+0x154], fp0} */;
                                    /* unimplemented  {fstp dword [stack_ptr+0x154], fp0} */
🚫🚫                                    /* unimplemented  {fadd qword [stack_ptr+0x78]} */
🚫🚫🚫                                    item_e8 = /* item_e8 =
                                        unimplemented  {fstp qword [stack_ptr+0x78], fp0} */;
                                    /* unimplemented  {fstp qword [stack_ptr+0x78], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [stack_ptr+0x150]} */
🚫🚫                                    /* unimplemented  {fadd qword [stack_ptr+0x80]} */
🚫🚫🚫                                    item_e0 = /* item_e0 =
                                        unimplemented  {fstp qword [stack_ptr+0x80], fp0} */;
                                    /* unimplemented  {fstp qword [stack_ptr+0x80], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [stack_ptr+0x154]} */
🚫🚫                                    /* unimplemented  {fadd qword [stack_ptr+0x88]} */
🚫🚫🚫                                    double item_d8_6 = /* double item_d8_6 =
                                        unimplemented  {fstp qword [stack_ptr+0x88], fp0} */;
                                    /* unimplemented  {fstp qword [stack_ptr+0x88], fp0} */
                                }

🚫🚫                                int32_t entity_29 = Sys_PushStack_11(item_154_1, &item_e8);
                                /* unimplemented  {call Sys_PushStack_11} */
⋯                                long double f24_1 = item_14c_2;
                                /* unimplemented  {fcomp fp0, dword [stack_ptr+0x1c]} f- f24_1 */
                                    - f24_1;
                                bool c0_26 = /* bool c0_26 =
                                    unimplemented  {fcomp fp0, dword [stack_ptr+0x1c]} f< f24_1 */
                                    < f24_1;
                                bool c2_30 = FCMP_UO(/* bool c2_30 = is_unordered.t(
                                    unimplemented  {fcomp fp0, dword [stack_ptr+0x1c]}, f24_1) */,
                                    f24_1);
                                bool c3_26 = /* bool c3_26 =
                                    unimplemented  {fcomp fp0, dword [stack_ptr+0x1c]} f== f24_1 */
                                    == f24_1;
                                /* unimplemented  {fcomp fp0, dword [stack_ptr+0x1c]} */
                                top_35 = idx;

                                if (*(&((c0_26 ? 1 : 0) << 8 | (c2_30 ? 1 : 0) << 0xa
                                    | (c3_26 ? 1 : 0) << 0xe | (top_35 & 7) << 0xb) + 1) & 0x41)
                                {
                                    int32_t data_77;

                                    do
                                    {
                                        int16_t top_266;

                                        if (dest_5 >= *(context_2 + 0x59c) - 1)
                                        {
                                            entity_29 = g_a7a620;
                                            data_58 = QTask_TriggerEvent_2(item_cc, entity_29);

                                            if (!data_58)
                                                goto label_50081a;

                                            void* entity_30 = data_58[0x3c];

                                            if (!entity_30)
                                                goto label_50081a;

                                            source_13 = param_7;
🚫🚫                                            /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫                                            /* unimplemented  {fadd dword [context_val+temp_val*4+0x548]} */
                                            dest_5 = 0;
                                            item_cc = data_58;
                                            context_2 = entity_30;
                                            item_130_1 = 0;
🚫🚫🚫                                            item_140 = /* item_140 =
                                                unimplemented  {fstp dword [stack_ptr+0x20], fp0} */;
                                            /* unimplemented  {fstp dword [stack_ptr+0x20], fp0} */
                                            top_266 = top_35;
                                        }
                                        else
                                        {
🚫🚫                                            /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫                                            /* unimplemented  {fadd dword [context_val+dest_val*4+0x548]} */
                                            dest_5 += 1;
                                            item_130_1 = dest_5;
🚫🚫🚫                                            item_140 = /* item_140 =
                                                unimplemented  {fstp dword [stack_ptr+0x20], fp0} */;
                                            /* unimplemented  {fstp dword [stack_ptr+0x20], fp0} */
                                            top_266 = top_35;
                                        }

                                        void* data_72 = context_2 + dest_5 * 0xc;
🚫🚫                                        /* unimplemented  {fld fp0, dword [data_val+0x104]} */
🚫🚫                                        /* unimplemented  {fadd qword [context_val+0x20]} */
                                        void* item_b4_2 = data_72 + 0x104;
🚫🚫🚫                                        item_100 = /* item_100 =
                                            unimplemented  {fstp qword [stack_ptr+0x60], fp0} */;
                                        /* unimplemented  {fstp qword [stack_ptr+0x60], fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [context_val+entity_val*4]} */
🚫🚫                                        /* unimplemented  {fadd qword [context_val+0x28]} */
                                        void* item_b0_2 = context_2 + ((dest_5 * 3 + 0x42) << 2);
                                        void* item_98_2 = data_72 + 0x10c;
🚫🚫🚫                                        double item_f8_9 = /* double item_f8_9 =
                                            unimplemented  {fstp qword [stack_ptr+0x68], fp0} */;
                                        /* unimplemented  {fstp qword [stack_ptr+0x68], fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [entity_val]} */
🚫🚫                                        /* unimplemented  {fadd qword [context_val+0x30]} */
                                        void* item_90_2 = data_72 + 0x110;
                                        void* item_ac_2 = data_72 + 0x118;
🚫🚫🚫                                        double item_f0_9 = /* double item_f0_9 =
                                            unimplemented  {fstp qword [stack_ptr+0x70], fp0} */;
                                        /* unimplemented  {fstp qword [stack_ptr+0x70], fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [entity_val]} */
🚫🚫                                        /* unimplemented  {fadd qword [context_val+0x20]} */
                                        void* item_94_2 = context_2 + ((dest_5 * 3 + 0x45) << 2);
🚫🚫🚫                                        item_e8 = /* item_e8 =
                                            unimplemented  {fstp qword [stack_ptr+0x78], fp0} */;
                                        /* unimplemented  {fstp qword [stack_ptr+0x78], fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [entity_val]} */
🚫🚫                                        /* unimplemented  {fadd qword [context_val+0x28]} */
🚫🚫🚫                                        item_e0 = /* item_e0 =
                                            unimplemented  {fstp qword [stack_ptr+0x80], fp0} */;
                                        /* unimplemented  {fstp qword [stack_ptr+0x80], fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [data_val]} */
🚫🚫                                        /* unimplemented  {fadd qword [context_val+0x30]} */
🚫🚫🚫                                        double item_d8_9 = /* double item_d8_9 =
                                            unimplemented  {fstp qword [stack_ptr+0x88], fp0} */;
                                        /* unimplemented  {fstp qword [stack_ptr+0x88], fp0} */
                                        int16_t top_279 = top_266;

                                        if (source_13)
                                        {
🚫🚫                                            /* unimplemented  {fld fp0, dword [context_val+entity_val*8]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val+0x8]} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [context_val+data_val*8+0x204]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val+0x4]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x200]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x210]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val+0x4]} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x20c]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x214]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val+0x8]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫                                            float item_4c_1 = /* float item_4c_1 =
                                                unimplemented  {fstp dword [stack_ptr+0x114], fp0} */;
                                            /* unimplemented  {fstp dword [stack_ptr+0x114], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x21c]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val+0x4]} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x218]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x220]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val+0x8]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫                                            float item_48_1 = /* float item_48_1 =
                                                unimplemented  {fstp dword [stack_ptr+0x118], fp0} */;
                                            /* unimplemented  {fstp dword [stack_ptr+0x118], fp0} */
🚫🚫                                            /* unimplemented  {fadd qword [stack_ptr+0x60]} */
🚫🚫🚫                                            item_100 = /* item_100 =
                                                unimplemented  {fstp qword [stack_ptr+0x60], fp0} */;
                                            /* unimplemented  {fstp qword [stack_ptr+0x60], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [stack_ptr+0x114]} */
🚫🚫                                            /* unimplemented  {fadd qword [stack_ptr+0x68]} */
🚫🚫🚫                                            double item_f8_10 = /* double item_f8_10 =
                                                unimplemented  {fstp qword [stack_ptr+0x68], fp0} */;
                                            /* unimplemented  {fstp qword [stack_ptr+0x68], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [stack_ptr+0x118]} */
🚫🚫                                            /* unimplemented  {fadd qword [stack_ptr+0x70]} */
🚫🚫🚫                                            double item_f0_10 = /* double item_f0_10 =
                                                unimplemented  {fstp qword [stack_ptr+0x70], fp0} */;
                                            /* unimplemented  {fstp qword [stack_ptr+0x70], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [context_val+temp_val*8]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val+0x8]} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x22c]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val+0x4]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x228]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x238]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val+0x4]} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x234]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x23c]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val+0x8]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫                                            float item_1c_1 = /* float item_1c_1 =
                                                unimplemented  {fstp dword [stack_ptr+0x144], fp0} */;
                                            /* unimplemented  {fstp dword [stack_ptr+0x144], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x244]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val+0x4]} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x240]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [data_val+0x248]} */
🚫🚫                                            /* unimplemented  {fmul fp0, dword [source_val+0x8]} */
🚫🚫🚫                                            /* unimplemented  {faddp fp1, fp0} */
                                            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫                                            float item_18_1 = /* float item_18_1 =
                                                unimplemented  {fstp dword [stack_ptr+0x148], fp0} */;
                                            /* unimplemented  {fstp dword [stack_ptr+0x148], fp0} */
🚫🚫                                            /* unimplemented  {fadd qword [stack_ptr+0x78]} */
🚫🚫🚫                                            item_e8 = /* item_e8 =
                                                unimplemented  {fstp qword [stack_ptr+0x78], fp0} */;
                                            /* unimplemented  {fstp qword [stack_ptr+0x78], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [stack_ptr+0x144]} */
🚫🚫                                            /* unimplemented  {fadd qword [stack_ptr+0x80]} */
🚫🚫🚫                                            item_e0 = /* item_e0 =
                                                unimplemented  {fstp qword [stack_ptr+0x80], fp0} */;
                                            /* unimplemented  {fstp qword [stack_ptr+0x80], fp0} */
🚫🚫                                            /* unimplemented  {fld fp0, dword [stack_ptr+0x148]} */
🚫🚫                                            /* unimplemented  {fadd qword [stack_ptr+0x88]} */
🚫🚫🚫                                            double item_d8_10 = /* double item_d8_10 =
                                                unimplemented  {fstp qword [stack_ptr+0x88], fp0} */;
                                            /* unimplemented  {fstp qword [stack_ptr+0x88], fp0} */
                                            int16_t top_311;
                                            top_279 = top_311 + 2;
                                        }

🚫🚫                                        Sys_PushStack_11(item_154_1, &item_100);
                                        /* unimplemented  {call Sys_PushStack_11} */
🚫🚫🚫                                        float item_144_4 = /* float item_144_4 =
                                            unimplemented  {fstp dword [stack_ptr+0x24], fp0} */;
                                        /* unimplemented  {fstp dword [stack_ptr+0x24], fp0} */
🚫🚫                                        Sys_PushStack_11(item_154_1, &item_e8);
                                        /* unimplemented  {call Sys_PushStack_11} */
🚫🚫🚫                                        float item_148_5 = /* float item_148_5 =
                                            unimplemented  {fstp dword [stack_ptr+0x28], fp0} */;
                                        /* unimplemented  {fstp dword [stack_ptr+0x28], fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
⋯                                        long double f29_1 = item_14c_2;
                                        /* unimplemented  {fcomp fp0, dword [stack_ptr+0x24]}
                                            f- f29_1 */ - f29_1;
                                        bool c0_27 = /* bool c0_27 =
                                            unimplemented  {fcomp fp0, dword [stack_ptr+0x24]}
                                            f< f29_1 */ < f29_1;
                                        bool c2_31 = FCMP_UO(/* bool c2_31 = is_unordered.t(
                                            unimplemented  {fcomp fp0, dword [stack_ptr+0x24]}, f29_1) */,
                                            f29_1);
                                        bool c3_27 = /* bool c3_27 =
                                            unimplemented  {fcomp fp0, dword [stack_ptr+0x24]}
                                            f== f29_1 */ == f29_1;
                                        /* unimplemented  {fcomp fp0, dword [stack_ptr+0x24]} */

                                        entity_29 = *(&((c0_27 ? 1 : 0) << 8 | (c2_31 ? 1 : 0) << 0xa
                                            | (c3_27 ? 1 : 0) << 0xe | (top_279 & 7) << 0xb) + 1)
                                            & 0x41 ? 0 : 1;

🚫🚫                                        /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
⋯                                        long double f34_1 = item_14c_2;
                                        /* unimplemented  {fcomp fp0, dword [stack_ptr+0x14]}
                                            f- f34_1 */ - f34_1;
                                        bool c0_28 = /* bool c0_28 =
                                            unimplemented  {fcomp fp0, dword [stack_ptr+0x14]}
                                            f< f34_1 */ < f34_1;
                                        bool c2_32 = FCMP_UO(/* bool c2_32 = is_unordered.t(
                                            unimplemented  {fcomp fp0, dword [stack_ptr+0x14]}, f34_1) */,
                                            f34_1);
                                        bool c3_28 = /* bool c3_28 =
                                            unimplemented  {fcomp fp0, dword [stack_ptr+0x14]}
                                            f== f34_1 */ == f34_1;
                                        /* unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} */
                                        top_35 = top_279;

                                        data_77 = *(&((c0_28 ? 1 : 0) << 8 | (c2_32 ? 1 : 0) << 0xa
                                            | (c3_28 ? 1 : 0) << 0xe | (top_35 & 7) << 0xb) + 1) & 0x41
                                            ? 0 : 1;
                                    } while (entity_29 == data_77);
🚫🚫                                    /* unimplemented  {fld fp0, dword [context_val+dest_val*4+0x548]} */
                                    int32_t item_164_13 = entity_29;
🚫🚫🚫                                    float item_14c_4 = /* float item_14c_4 =
                                        unimplemented  {fstp dword [stack_ptr+0x18], fp0} */;
                                    /* unimplemented  {fstp dword [stack_ptr+0x18], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫                                    /* unimplemented  {fsqrt } */
🚫🚫🚫                                    float item_154_7 = /* float item_154_7 =
                                        unimplemented  {fstp dword [stack_ptr+0x10], fp0} */;
                                    /* unimplemented  {fstp dword [stack_ptr+0x10], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [stack_ptr+0x1c]} */
🚫🚫                                    /* unimplemented  {fsub fp0, dword [stack_ptr+0x20]} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [stack_ptr+0x18]} */
🚫🚫🚫                                    /* unimplemented  {fsubp fp1, fp0} */
                                    /* unimplemented  {fsubp fp1, fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [stack_ptr+0x10]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [stack_ptr+0x18]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [&g_534ba8]} */
🚫🚫🚫                                    /* unimplemented  {fdivp fp1, fp0} */
                                    /* unimplemented  {fdivp fp1, fp0} */
🚫🚫🚫                                    float item_164_14 = /* float item_164_14 =
                                        unimplemented  {fstp dword [stack_ptr], fp0} */;
                                    /* unimplemented  {fstp dword [stack_ptr], fp0} */
🚫🚫                                    Sys_DispatchOpcode_9(item_164_14);
                                    /* unimplemented  {call Sys_DispatchOpcode_9} */
🚫🚫                                    /* unimplemented  {fld fp0, fp0} */
🚫🚫🚫                                    long double fp0_5;
                                    bool c1_5;
                                    bool c2_33;
                                    fp0_5 = __fsin(/* fp0_5, c1_5, c2_33 =
                                        __fsin(unimplemented  {fsin }) */);
                                    /* unimplemented  {fsin } */
🚫🚫🚫                                    float item_144_5 = /* float item_144_5 =
                                        unimplemented  {fstp dword [stack_ptr+0x20], fp0} */;
                                    /* unimplemented  {fstp dword [stack_ptr+0x20], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [&g_533400]} */
🚫🚫                                    /* unimplemented  {fsub fp0, fp1} */
🚫🚫🚫                                    float item_134_4 = /* float item_134_4 =
                                        unimplemented  {fstp dword [stack_ptr+0x30], fp0} */;
                                    /* unimplemented  {fstp dword [stack_ptr+0x30], fp0} */
🚫🚫🚫                                    /* unimplemented  {fstp fp0, fp0} */
                                    /* unimplemented  {fstp fp0, fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫                                    /* unimplemented  {fdiv fp0, dword [stack_ptr+0x14]} */
🚫🚫                                    /* unimplemented  {fmul fp0, dword [stack_ptr+0x10]} */
🚫🚫🚫                                    float item_164_15 = /* float item_164_15 =
                                        unimplemented  {fstp dword [stack_ptr], fp0} */;
                                    /* unimplemented  {fstp dword [stack_ptr], fp0} */
                                    int16_t top_346 = top_35 + 1;
🚫🚫                                    Sys_PushStack_9(item_164_15);
                                    /* unimplemented  {call Sys_PushStack_9} */
🚫🚫                                    /* unimplemented  {fsubr fp0, dword [stack_ptr+0x30]} */
🚫🚫🚫🚫🚫                                    long double f41_1 = 0.001;
                                    /* unimplemented  {fcom fp0, qword [&g_534ba0]}
                                        f- f41_1 */ - f41_1;
                                    bool c0_29 = /* bool c0_29 =
                                        unimplemented  {fcom fp0, qword [&g_534ba0]}
                                        f< f41_1 */ < f41_1;
                                    bool c2_34 = FCMP_UO(/* bool c2_34 = is_unordered.t(
                                        unimplemented  {fcom fp0, qword [&g_534ba0]}, f41_1) */,
                                        f41_1);
                                    bool c3_29 = /* bool c3_29 =
                                        unimplemented  {fcom fp0, qword [&g_534ba0]}
                                        f== f41_1 */ == f41_1;

                                    if (*(&((c0_29 ? 1 : 0) << 8 | (c2_34 ? 1 : 0) << 0xa
                                        | (c3_29 ? 1 : 0) << 0xe | (top_346 & 7) << 0xb) + 1) & 0x41)
                                    {
🚫🚫🚫                                        /* unimplemented  {fstp fp0, fp0} */
                                        /* unimplemented  {fstp fp0, fp0} */
🚫🚫                                        /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫                                        /* unimplemented  {fsqrt } */
🚫🚫                                        /* unimplemented  {fld fp0, dword [stack_ptr+0x10]} */
🚫🚫                                        /* unimplemented  {fsub fp0, dword [stack_ptr+0xc]} */
🚫🚫🚫🚫                                        /* unimplemented  {fxch fp0, fp1} */
                                        /* unimplemented  {fxch fp0, fp1} */
🚫🚫                                        /* unimplemented  {fsub fp0, dword [stack_ptr+0xc]} */
🚫🚫🚫                                        /* unimplemented  {fdivp fp1, fp0} */
                                        /* unimplemented  {fdivp fp1, fp0} */
                                    }
                                    else
                                    {
🚫🚫🚫                                        long double fp0_6;
                                        bool c1_6;
                                        bool c2_35;
                                        fp0_6 = __fsin(/* fp0_6, c1_6, c2_35 =
                                            __fsin(unimplemented  {fsin }) */);
                                        /* unimplemented  {fsin } */
🚫🚫                                        /* unimplemented  {fmul fp0, dword [stack_ptr+0x10]} */
🚫🚫                                        /* unimplemented  {fdiv fp0, dword [stack_ptr+0x1c]} */
🚫🚫                                        /* unimplemented  {fdiv fp0, dword [stack_ptr+0x14]} */
                                    }

🚫🚫🚫                                    float item_154_8 = /* float item_154_8 =
                                        unimplemented  {fstp dword [stack_ptr+0xc], fp0} */;
                                    /* unimplemented  {fstp dword [stack_ptr+0xc], fp0} */
                                    top_49 = top_346 + 1;
                                }
                                else
                                {
🚫🚫                                    /* unimplemented  {fld fp0, dword [stack_ptr+0x90]} */
🚫🚫                                    /* unimplemented  {fsub fp0, dword [stack_ptr+0x20]} */
🚫🚫                                    /* unimplemented  {fdiv fp0, dword [context_val+dest_val*4+0x548]} */
🚫🚫🚫                                    float item_154_6 = /* float item_154_6 =
                                        unimplemented  {fstp dword [stack_ptr+0xc], fp0} */;
                                    /* unimplemented  {fstp dword [stack_ptr+0xc], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [temp_val]} */
🚫🚫                                    /* unimplemented  {fadd qword [context_val+0x20]} */
🚫🚫🚫                                    item_100 = /* item_100 =
                                        unimplemented  {fstp qword [stack_ptr+0x60], fp0} */;
                                    /* unimplemented  {fstp qword [stack_ptr+0x60], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [data_val]} */
🚫🚫                                    /* unimplemented  {fadd qword [context_val+0x28]} */
🚫🚫🚫                                    double item_f8_7 = /* double item_f8_7 =
                                        unimplemented  {fstp qword [stack_ptr+0x68], fp0} */;
                                    /* unimplemented  {fstp qword [stack_ptr+0x68], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [entity_val]} */
🚫🚫                                    /* unimplemented  {fadd qword [context_val+0x30]} */
🚫🚫🚫                                    double item_f0_7 = /* double item_f0_7 =
                                        unimplemented  {fstp qword [stack_ptr+0x70], fp0} */;
                                    /* unimplemented  {fstp qword [stack_ptr+0x70], fp0} */
🚫🚫                                    /* unimplemented  {fld fp0, dword [temp_val]} */
🚫🚫                                    /* unimplemented  {fadd qword [context_val+0x20]} */
🚫🚫🚫                                    item_e8 = /* item_e8 =

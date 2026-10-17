// Original IGI.EXE function: LightmapInfo_Setup (VA 0x00525460; static CFG gate PASS, CFG score 0.873).
#include "LightmapInfo_Setup.h"
int32_t LightmapInfo_Setup(void* context, int32_t* param_2)

{
    void* source_val = param_2[6];
    int32_t context_val = param_2[2];
    int32_t flagP = *(source_val + 0xa0);
    int32_t item_12c = flagP;
    long double fpu7 = item_12c;
    void* item_114 = source_val;
    float item_128 = fpu7;
    float* entity_3 = param_2[4];
    void** item_10c = *param_2 + *param_2[1] * 0xc + 4;
    int32_t data_2 = **(source_val + 0x88) << 2;
    float item_b8 = 1.0f / (fpu7 * item_128);
    void* data_3 = Mem_Alloc(data_2, 4);
    int32_t* entity_4 = *(source_val + 0x88);
    int32_t i = 0;
    void* item_bc = data_3;

    if (*entity_4 > 0)
    {
        int32_t item_140_1 = 0;

        do
        {
            i += 1;
            data_3 += 4;
            void* entity_5 = *(item_140_1 + entity_4 + 0x20);
            *(data_3 - 4) = *(entity_5 + 0xa4);
            *(entity_5 + 0xa4) = 0xffffffff;
            entity_4 = *(source_val + 0x88);
            item_140_1 += 0x24;
        } while (i < *entity_4);
    }

    int32_t dest_8 = (flagP * flagP) << 2;
    float* item_11c = Mem_Alloc(dest_8, 4);
    float* data_5 = Mem_Alloc(dest_8, 4);
    int32_t item_d0 = 0;
    float item_13c = item_128 * 0.5f - 0.5f;

    while (true)
    {
        int32_t item_144_1 = 0;
        float item_15c;
        float item_158;
        float item_154;

        if (!item_d0)
        {
            item_15c = *(context + 0x24);
            item_158 = *(context + 0x28);
            item_154 = *(context + 0x2c);
        }
        else if (item_d0 == 1)
        {
            item_15c = *(context + 0x24);
            float data_9 = *(context + 0x28);
            item_15c = -(item_15c);
            item_158 = -(data_9);
            item_154 = -(*(context + 0x2c));
        }

        item_15c = -(item_15c);
        void* source_1 = *(source_val + 0x88);
        float item_158_2 = -(item_158);
        float item_154_2 = -(item_154);
        float entity_10 = *(source_1 + 0xc);
        float temp_7 = *(source_1 + 0x10);
        float data_12 = *(source_1 + 0x14);
        float* data_13 = *(source_1 + 0x24);
        float item_60_1 = data_12 * data_13[5] + temp_7 * data_13[4] + entity_10 * data_13[3];
        float item_5c_1 = data_12 * data_13[8] + temp_7 * data_13[7] + entity_10 * data_13[6];
        double item_7c =
            data_12 * data_13[2] + temp_7 * data_13[1] + entity_10 * *data_13 + **(source_1 + 0x28);
        double item_74 = item_60_1 + *(*(source_1 + 0x28) + 8);
        double item_6c_1 = item_5c_1 + *(*(source_1 + 0x28) + 0x10);
        float entity_12 = *(source_1 + 8);
        float item_28;
        Sys_ResolveSymbol_12(&item_28, &item_15c);
        long double fpu_val_7_27 = item_154_2;
        long double fpu_val_6_13 = item_158_2;
        long double fpu_val_5_9 = item_15c;
        long double fpu_val_7_29 =
            entity_12 / sqrtl(fpu_val_5_9 * fpu_val_5_9 + fpu_val_6_13 * fpu_val_6_13 + fpu_val_7_27 * fpu_val_7_27);
        double item_a0;
        memcpy(&item_a0, &item_7c, 0x18);
        item_15c = item_15c * fpu_val_7_29;
        item_158 = item_158_2 * fpu_val_7_29;
        item_154 = item_154_2 * fpu_val_7_29;
        item_7c = item_7c - item_15c;
        item_74 = item_74 - item_158;
        double item_6c_2 = item_6c_1 - item_154;
        long double fpu_val_7_38 = item_a0 - item_15c;
        double item_98 = item_98 - item_158;
        double item_90;
        double item_90_1 = item_90 - item_154;
        long double fpu_val_6_25 = item_15c;
        long double f3_1 = 0.0f;
        fpu_val_6_25 - f3_1;

        if (!(*(&((fpu_val_6_25 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_25, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_6_25 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_5257dc:
            long double fpu_val_6_28 = item_154;
            long double fpu_val_5_11 = item_158;
            long double fpu_val_4_6 = item_15c;
            long double fpu_val_6_30 =
                1.0 / sqrtl(fpu_val_4_6 * fpu_val_4_6 + fpu_val_5_11 * fpu_val_5_11 + fpu_val_6_28 * fpu_val_6_28);
            item_15c = item_15c * fpu_val_6_30;
            item_158 = item_158 * fpu_val_6_30;
            item_154 = item_154 * fpu_val_6_30;
        }
        else
        {
            long double fpu_val_6_26 = item_158;
            long double f4_1 = 0.0f;
            fpu_val_6_26 - f4_1;

            if (!(*(&((fpu_val_6_26 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_26, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_26 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_5257dc;

            long double fpu_val_6_27 = item_154;
            long double f5_1 = 0.0f;
            fpu_val_6_27 - f5_1;

            if (!(*(&((fpu_val_6_27 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_27, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_27 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_5257dc;
        }

        long double fpu_val_6_32 = entity_12;
        long double fpu_val_6_34 = (fpu_val_6_32 + fpu_val_6_32) / item_128;
        float item_e8_1 = item_28 * fpu_val_6_34 + 0.0f;
        float item_150_1 = item_e8_1;
        float item_24;
        float item_e4_1 = item_24 * fpu_val_6_34 + 0.0f;
        float item_20;
        float item_e0_1 = item_20 * fpu_val_6_34 + 0.0f;
        float item_1c;
        float item_88_1 = fpu_val_6_34 * item_1c + 0.0f;
        float item_dc_1 = item_88_1;
        float item_150_2 = item_88_1;
        float item_18;
        float item_84_1 = fpu_val_6_34 * item_18 + 0.0f;
        float item_14;
        float item_80_1 = fpu_val_6_34 * item_14 + 0.0f;
        float item_148_2 = -((item_13c * item_e0_1));
        item_98 = -((item_13c * item_e4_1)) + item_98;
        double item_90_2 = item_148_2 + item_90_1;
        float item_14c_4 = -((item_13c * item_84_1));
        float item_148_4 = -((item_13c * item_80_1));
        item_a0 = -((item_13c * item_88_1)) + fpu_val_7_38 + -((item_13c * item_e8_1));
        item_98 = item_14c_4 + item_98;
        float item_150_3 = item_e8_1;
        float item_140_2 = 0.0f;
        item_90 = item_148_4 + item_90_2;
        float item_dc_2 = -((item_e8_1 * item_128)) + item_88_1;
        float item_d8_2 = -((item_e4_1 * item_128)) + item_84_1;
        float item_d4_2 = -((item_e0_1 * item_128)) + item_80_1;
        bool flag_0_1;

        do
        {
            double item_104;
            memcpy(&item_104, &item_a0, 0x18);
            float dest_11 = item_13c;
            float* source_3 = data_5;
            Light_RenderLensflare_2(item_114, &item_7c, &item_28, item_11c, source_3, flagP, flagP, dest_11, dest_11,
                item_140_2, 1.40129846e-45.0f, 0.0f, 1.40129846e-45.0f, entity_12, 0.0f);
            double item_fc;
            double item_f4;

            if (flagP > 0)
            {
                float* item_118_1 = source_3;
                int32_t item_138_1 = flagP;
                bool flag_4_1;

                do
                {
                    int32_t item_134_1 = flagP;
                    float* data_20 = item_118_1;
                    float* item_120_1 = &entity_3[item_144_1];
                    int32_t* item_108_1 = context_val + (item_144_1 << 2) - 4;
                    int32_t* entity_19 = item_11c - source_3;
                    float* item_130_1 = data_20;
                    int32_t* item_cc_1 = entity_19;

                    while (true)
                    {
                        int32_t i_1 = *(entity_19 + data_20);

                        if (i_1 != 0xffffffff)
                        {
                            long double fpu_val_7_54 = *data_20 - 40.9599991f;
                            long double fpu_val_6_55 = fpu_val_7_54 * item_15c;
                            double item_40;
                            memcpy(&item_40, &item_104, 0x18);
                            float item_150_4 = item_15c;
                            float temp_14 = g_a44344;
                            float item_14c_8 = item_158 * fpu_val_7_54;
                            item_40 = fpu_val_6_55 + item_104;
                            double item_38 = item_14c_8 + item_38;
                            double item_30 = fpu_val_7_54 * item_154 + item_30;
                            float item_b4;
                            DynObj_RegisterSymbol_12(temp_14, &item_104, &item_40, 0xff, 0.0f, 0xffffffff, 9, &item_b4);
                            long double fpu_val_7_57 = item_b4;
                            long double f13_1 = 0.0f;
                            fpu_val_7_57 - f13_1;

                            if (!(*(&((fpu_val_7_57 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_57, f13_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_57 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                long double fpu_val_7_59 = item_b4 * item_b8;
                                int32_t* data_23 = item_108_1;

                                if (item_108_1 < context_val)
                                {
                                label_525bed:
                                    item_108_1[1] = i_1;
                                    *item_120_1 = fpu_val_7_59;
                                    item_144_1 += 1;
                                    item_108_1 = &item_108_1[1];
                                    item_120_1 = &item_120_1[1];
                                }
                                else
                                {
                                    while (i_1 != *data_23)
                                    {
                                        data_23 -= 4;

                                        if (data_23 < context_val)
                                            goto label_525bed;
                                    }

                                    int32_t data_35 = (data_23 - context_val) >> 2;
                                    entity_3[data_35] = fpu_val_7_59 + entity_3[data_35];
                                }
                            }
                        }

                        data_20 = &item_130_1[1];
                        bool flag_2_1 = item_134_1 != 1;
                        item_130_1 = data_20;
                        item_134_1 -= 1;
                        item_104 = item_e8_1 + item_104;
                        item_fc = item_e4_1 + item_fc;
                        item_f4 = item_e0_1 + item_f4;

                        if (!flag_2_1)
                            break;

                        entity_19 = item_cc_1;
                    }

                    source_3 = data_5;
                    flagP = item_12c;
                    item_104 = item_dc_2 + item_104;
                    flag_4_1 = item_138_1 != 1;
                    item_118_1 = &item_118_1[item_12c];
                    item_138_1 -= 1;
                    item_fc = item_d8_2 + item_fc;
                    item_f4 = item_d4_2 + item_f4;
                } while (flag_4_1);
                dest_11 = item_13c;
            }

            Light_RenderLensflare_2(item_114, &item_7c, &item_28, item_11c, source_3, flagP, flagP, dest_11, dest_11,
                item_140_2, 1.40129846e-45.0f, 1.40129846e-45.0f, 0.0f, entity_12, 0.0f);

            if (flagP > 0)
            {
                float* temp_18 = source_3;
                int32_t item_108_2 = flagP;
                float* item_120_2 = temp_18;
                bool flag_6_1;

                do
                {
                    float* item_134_2 = temp_18;
                    int32_t* flagP1 = context_val + (item_144_1 << 2) - 4;
                    void* entity_30 = item_11c - data_5;
                    void* item_cc_2 = entity_30;
                    int32_t item_130_2 = item_12c;

                    while (true)
                    {
                        int32_t i_2 = *(temp_18 + entity_30);

                        if (i_2 != 0xffffffff)
                        {
                            long double fpu_val_7_74 = *temp_18 - 40.9599991f;
                            long double fpu_val_6_63 = fpu_val_7_74 * item_15c;
                            double item_58;
                            memcpy(&item_58, &item_104, 0x18);
                            float item_150_6 = item_15c;
                            float temp_19 = g_a44344;
                            float item_14c_10 = item_158 * fpu_val_7_74;
                            item_58 = fpu_val_6_63 + item_104;
                            double item_50 = item_14c_10 + item_50;
                            double item_48 = fpu_val_7_74 * item_154 + item_48;
                            float item_b0;
                            DynObj_RegisterSymbol_12(temp_19, &item_104, &item_58, 0xff, 0.0f, 0xffffffff, 9, &item_b0);
                            long double fpu_val_7_77 = item_b0;
                            long double f15_1 = 0.0f;
                            fpu_val_7_77 - f15_1;

                            if (!(*(&((fpu_val_7_77 < f15_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_77, f15_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_77 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                long double fpu_val_7_79 = item_b0 * item_b8;
                                int32_t* entity_34 = 4 - context_val + flagP1;
                                int32_t* data_41 = flagP1;

                                if (flagP1 < context_val)
                                {
                                label_525e4b:
                                    *(entity_34 + context_val) = i_2;
                                    *(entity_34 + entity_3) = fpu_val_7_79;
                                    flagP1 = &flagP1[1];
                                    item_144_1 += 1;
                                }
                                else
                                {
                                    while (i_2 != *data_41)
                                    {
                                        data_41 -= 4;

                                        if (data_41 < context_val)
                                            goto label_525e4b;
                                    }

                                    int32_t data_53 = (data_41 - context_val) >> 2;
                                    entity_3[data_53] = fpu_val_7_79 + entity_3[data_53];
                                }
                            }
                        }

                        temp_18 = &item_134_2[1];
                        bool flag_3_1 = item_130_2 != 1;
                        item_134_2 = temp_18;
                        item_130_2 -= 1;
                        item_104 = item_e8_1 + item_104;
                        item_fc = item_e4_1 + item_fc;
                        item_f4 = item_e0_1 + item_f4;

                        if (!flag_3_1)
                            break;

                        entity_30 = item_cc_2;
                    }

                    item_104 = item_dc_2 + item_104;
                    temp_18 = &item_120_2[item_12c];
                    flag_6_1 = item_108_2 != 1;
                    item_120_2 = temp_18;
                    item_108_2 -= 1;
                    item_fc = item_d8_2 + item_fc;
                    item_f4 = item_d4_2 + item_f4;
                } while (flag_6_1);
                flagP = item_12c;
            }

            flag_0_1 = item_140_2 + 1 < 5;
            item_140_2 += 1;
        } while (flag_0_1);
        int32_t entity_38 = item_144_1;
        int32_t* source_7;

        if (entity_38 <= 0)
            source_7 = param_2;
        else
        {
            float* dest_13 = entity_3;
            int32_t* data_51 = context_val - dest_13;
            int32_t item_134_3 = entity_38;
            int32_t* item_130_3 = data_51;

            while (true)
            {
                source_7 = param_2;
                int32_t data_55 = *(data_51 + dest_13);
                float* temp_25 = *(source_7[3] + (data_55 << 2));
                float* entity_41 = *(source_7[5] + (data_55 << 2));
                long double fpu_val_7_93 = *temp_25;
                long double f7_1 = 0.0f;
                fpu_val_7_93 - f7_1;

                if (!(*(&((fpu_val_7_93 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_93, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_93 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    float* data_59 = *(*(item_114 + 0x88) + 0x24);
                    long double fpu_val_4_21 = *(*(source_7[6] + 0x88) + 8);
                    long double fpu_val_4_22 = fpu_val_4_21 + fpu_val_4_21;
                    float item_138_3 = *temp_25 / (fpu_val_4_22 * fpu_val_4_22);
                    long double fpu_val_6_81 = (data_59[2] * entity_41[2] + data_59[1] * entity_41[1]
                        + *entity_41 * *data_59) * *(context + 0x24);
                    long double fpu_val_7_100 = ((data_59[6] * *entity_41 + data_59[8] * entity_41[2]
                        + data_59[7] * entity_41[1]) * *(context + 0x2c)
                        + (data_59[3] * *entity_41 + data_59[5] * entity_41[2] + data_59[4] * entity_41[1]) *
                        *(context + 0x28) + fpu_val_6_81) * item_138_3;
                    long double f11_1 = 0.0f;
                    fpu_val_7_100 - f11_1;

                    if (!(*(&((fpu_val_7_100 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_100, f11_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_100 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double fpu_val_6_84 = (fpu_val_7_100 - *dest_13) / item_138_3;
                        long double f14_1 = 0.100000001f;
                        fpu_val_6_84 - f14_1;

                        if (*(&((fpu_val_6_84 < f14_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_84, f14_1) ? 1 : 0) << 0xa
                                | (fpu_val_6_84 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            *dest_13 = fpu_val_7_100;
                    }
                }

                dest_13 = &dest_13[1];
                bool flag_8_1 = item_134_3 != 1;
                item_134_3 -= 1;

                if (!flag_8_1)
                    break;

                data_51 = item_130_3;
            }

            entity_38 = item_144_1;
        }

        if (!entity_38)
        {
            item_10c[1] = 0;
            *item_10c = nullptr;
        }
        else
        {
            int32_t source_8 = entity_38 << 2;
            item_10c[1] = Mem_Alloc(source_8, 4);
            *item_10c = Mem_Alloc(source_8, 4);
            int32_t source_10;
            int32_t dest_16;
            dest_16 = memcpy(item_10c[1], context_val, source_8 & 0xfffffffc);
            memcpy(dest_16, source_10, source_8 & 3);
            int32_t entity_47 = item_144_1 << 2;
            int32_t source_12;
            int32_t dest_18;
            dest_18 = memcpy(*item_10c, entity_3, entity_47 & 0xfffffffc);
            memcpy(dest_18, source_12, entity_47 & 3);
            source_7 = param_2;
            entity_38 = item_144_1;
        }

        item_10c[2] = entity_38;
        int32_t* source_13 = source_7[1];
        item_10c = &item_10c[3];
        *source_13 += 1;
        bool flag_9_1 = item_d0 + 1 < 1;
        item_d0 += 1;

        if (!flag_9_1)
            break;

        source_val = item_114;
    }

    Sys_ExecuteBytecode_2(data_5);
    Sys_ExecuteBytecode_2(item_11c);
    int32_t i_5 = **(item_114 + 0x88);

    if (i_5 - 1 >= 0)
    {
        int32_t data_76 = (i_5 - 1) * 0x24;
        int32_t* temp_30 = item_bc + ((i_5 - 1) << 2);
        int32_t i_4 = i_5;
        int32_t i_3;

        do
        {
            int32_t context_1 = *temp_30;
            temp_30 -= 4;
            void* dest_22 = *(*(item_114 + 0x88) + data_76 + 0x20);
            data_76 -= 0x24;
            i_3 = i_4;
            i_4 -= 1;
            *(dest_22 + 0xa4) = context_1;
        } while (i_3 != 1);
    }

    return Sys_ExecuteBytecode_2(item_bc);
}

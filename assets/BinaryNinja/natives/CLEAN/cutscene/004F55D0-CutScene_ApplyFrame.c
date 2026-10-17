// IGI native provenance: CutScene_ApplyFrame - 0x004F55D0 - CFG score 97.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F55D0-CutScene_ApplyFrame.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CutScene_ApplyFrame.h"
int32_t* CutScene_ApplyFrame(void* context, int32_t* param_2, int32_t param_3, int32_t param_4, double param_5, char param_6)

{
    int32_t saved_ebp_1;
    int32_t saved_frame = saved_ebp_1;
    int32_t saved_ebx_2;
    int32_t saved_ebx_1 = saved_ebx_2;
    int32_t saved_esi_1;
    int32_t saved_src = saved_esi_1;
    int32_t saved_edi_1;
    int32_t saved_target = saved_edi_1;
    float item_b8 = 1.0f;
    float item_38 = 1.0f;
    void* entity_val = **param_2;
    float item_c4 = *(entity_val + 0x98);
    void* temp_val = *param_2[1];
    float item_d0 = *(temp_val + 0x98);
    void* data_5 = *param_2[2];
    float item_cc = *(data_5 + 0x98);
    void* data_8 = *param_2[3];
    long double fpu7 = *(data_8 + 0x98);
    float item_c0 = fpu7;
    long double fpu6 = item_c4;
    long double f0 = 0.0f;
    fpu6 - f0;

    if (*(&((fpu6 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f0) ? 1 : 0) << 0xa
            | (fpu6 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        item_c4 = *(context + 0x210);

    long double fpu_val_6_1 = item_d0;
    long double f1 = 0.0f;
    fpu_val_6_1 - f1;

    if (*(&((fpu_val_6_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        item_d0 = *(context + 0x210);

    long double fpu_val_6_2 = item_cc;
    long double f2 = 0.0f;
    fpu_val_6_2 - f2;

    if (*(&((fpu_val_6_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f2) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        item_cc = *(context + 0x210);

    long double f3 = 0.0f;
    fpu7 - f3;

    if (*(&((fpu7 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f3) ? 1 : 0) << 0xa
            | (fpu7 == f3 ? 1 : 0) << 0xe) + 1) & 1)
        item_c0 = *(context + 0x210);

    int32_t item_e4 = param_4;
    int32_t item_10c = *(data_8 + 0x24);
    int32_t item_114 = *(data_5 + 0x24);
    int32_t item_11c = *(temp_val + 0x24);
    int32_t item_124 = *(entity_val + 0x24);
    long double fp0 = Script_ParseEnumString_18(*(entity_val + 0x20), *(temp_val + 0x20), *(data_5 + 0x20), *(data_8 + 0x20),
        *(*param_2 + 4), *(param_2[1] + 4), *(param_2[2] + 4), *(param_2[3] + 4), param_3);
    int32_t* data_28 = param_2[3];
    double item_54 = fp0;
    int32_t* entity_2 = param_2[2];
    int32_t item_e4_1 = param_4;
    void* temp_4 = *data_28;
    int32_t item_10c_1 = *(temp_4 + 0x2c);
    void* data_30 = *entity_2;
    int32_t item_114_1 = *(data_30 + 0x2c);
    void* data_32 = *param_2[1];
    int32_t item_11c_1 = *(data_32 + 0x2c);
    void* data_34 = **param_2;
    int32_t item_124_1 = *(data_34 + 0x2c);
    long double fp0_1 = Script_ParseEnumString_18(*(data_34 + 0x28), *(data_32 + 0x28), *(data_30 + 0x28),
        *(temp_4 + 0x28), *(*param_2 + 4), *(param_2[1] + 4), entity_2[1], data_28[1], param_3);
    int32_t* data_35 = param_2[3];
    double item_4c = fp0_1;
    int32_t* entity_6 = param_2[2];
    int32_t item_e4_2 = param_4;
    void* data_36 = *data_35;
    void* entity_7 = *entity_6;
    int32_t item_10c_2 = *(data_36 + 0x34);
    int32_t item_110_2 = *(data_36 + 0x30);
    int32_t item_114_2 = *(entity_7 + 0x34);
    int32_t item_118_2 = *(entity_7 + 0x30);
    void* entity_8 = *param_2[1];
    int32_t item_11c_2 = *(entity_8 + 0x34);
    int32_t item_120_2 = *(entity_8 + 0x30);
    void* entity_9 = **param_2;
    int32_t item_124_2 = *(entity_9 + 0x34);
    int32_t item_128_2 = *(entity_9 + 0x30);
    long double fp0_2 = Script_ParseEnumString_18(item_128_2, item_120_2, item_118_2, item_110_2, *(*param_2 + 4),
        *(param_2[1] + 4), entity_6[1], data_35[1], param_3);
    int32_t* data_43 = param_2[3];
    double item_44 = fp0_2;
    int32_t* entity_10 = param_2[2];
    int32_t item_e4_3 = param_4;
    int32_t* temp_16 = *param_2;
    item_110_2 = *(*data_43 + 0x3c);
    item_118_2 = *(*entity_10 + 0x3c);
    item_120_2 = *(*param_2[1] + 0x3c);
    item_128_2 = *(*temp_16 + 0x3c);
    long double fp0_3 = Script_ParseEnumString_18(item_128_2, item_120_2, item_118_2, item_110_2, temp_16[1],
        *(param_2[1] + 4), entity_10[1], data_43[1], param_3);
    int32_t* data_47 = param_2[3];
    float item_3c = fp0_3;
    int32_t* entity_13 = param_2[2];
    int32_t item_e4_4 = param_4;
    int32_t* temp_18 = *param_2;
    item_110_2 = *(*data_47 + 0x40);
    item_118_2 = *(*entity_13 + 0x40);
    item_120_2 = *(*param_2[1] + 0x40);
    item_128_2 = *(*temp_18 + 0x40);
    long double fp0_4 = Script_ParseEnumString_18(item_128_2, item_120_2, item_118_2, item_110_2, temp_18[1],
        *(param_2[1] + 4), entity_13[1], data_47[1], param_3);
    int32_t* data_51 = param_2[3];
    int32_t* entity_16 = param_2[2];
    int32_t item_e4_5 = param_4;
    int32_t* temp_20 = *param_2;
    item_110_2 = *(*data_51 + 0x44);
    item_118_2 = *(*entity_16 + 0x44);
    item_120_2 = *(*param_2[1] + 0x44);
    item_128_2 = *(*temp_20 + 0x44);
    long double fp0_5 = Script_ParseEnumString_18(item_128_2, item_120_2, item_118_2, item_110_2, temp_20[1],
        *(param_2[1] + 4), entity_16[1], data_51[1], param_3);
    int32_t* data_55 = param_2[3];
    int32_t* entity_19 = param_2[2];
    int32_t item_e4_6 = param_4;
    int32_t* temp_22 = *param_2;
    item_110_2 = *(*data_55 + 0x88);
    item_118_2 = *(*entity_19 + 0x88);
    item_120_2 = *(*param_2[1] + 0x88);
    item_128_2 = *(*temp_22 + 0x88);
    long double fp0_6 = Script_ParseEnumString_18(item_128_2, item_120_2, item_118_2, item_110_2, temp_22[1],
        *(param_2[1] + 4), entity_19[1], data_55[1], param_3);
    int32_t item_e4_7 = param_4;
    item_110_2 = item_c0;
    item_118_2 = item_cc;
    item_120_2 = item_d0;
    item_128_2 = item_c4;
    long double fp0_7 = Script_ParseEnumString_18(item_128_2, item_120_2, item_118_2, item_110_2, *(*param_2 + 4),
        *(param_2[1] + 4), *(param_2[2] + 4), *(param_2[3] + 4), param_3);
    int32_t* data_60 = param_2[3];
    float item_34 = fp0_7;
    int32_t* entity_23 = param_2[2];
    int32_t item_e4_8 = param_4;
    int32_t* temp_26 = *param_2;
    item_110_2 = *(*data_60 + 0xe0);
    item_118_2 = *(*entity_23 + 0xe0);
    item_120_2 = *(*param_2[1] + 0xe0);
    item_128_2 = *(*temp_26 + 0xe0);
    long double fp0_8 = Script_ParseEnumString_18(item_128_2, item_120_2, item_118_2, item_110_2, temp_26[1],
        *(param_2[1] + 4), entity_23[1], data_60[1], param_3);
    int32_t* data_64 = param_2[3];
    float item_cc_1 = fp0_8;
    int32_t* entity_26 = param_2[2];
    int32_t item_e4_9 = param_4;
    int32_t* source_2 = param_2[1];
    int32_t* temp_27 = *param_2;
    double item_f0_10 = data_64[1];
    double item_f8_10 = entity_26[1];
    double item_100_9 = source_2[1];
    double item_108_9 = temp_27[1];
    item_110_2 = *(*data_64 + 0xd0);
    item_118_2 = *(*entity_26 + 0xd0);
    item_120_2 = *(*source_2 + 0xd0);
    item_128_2 = *(*temp_27 + 0xd0);
    long double fp0_9 = Script_ParseEnumString_18(item_128_2, item_120_2, item_118_2, item_110_2, item_108_9,
        item_100_9, item_f8_10, item_f0_10, param_3);
    int32_t* temp_28 = param_2[2];
    int32_t* entity_29 = param_2[1];
    float item_c4_1 = fp0_9;
    long double fpu_val_7_80 = temp_28[1] - entity_29[1];
    float item_d0_1 = fpu_val_7_80;
    long double f4 = 0.0f;
    fpu_val_7_80 - f4;
    float item_88;
    float item_84;
    float item_80;
    void* dest_1;

    if (*(&((fpu_val_7_80 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_80, f4) ? 1 : 0) << 0xa
        | (fpu_val_7_80 == f4 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        dest_1 = context;
        int32_t* temp_31 = *entity_29 + 0xd4;
        item_88 = *temp_31;
        item_84 = temp_31[1];
        item_80 = temp_31[2];
    }
    else
    {
        dest_1 = context;
        long double fpu_val_7_81;
        long double f5_1;

        if (*(dest_1 + 0x264))
        {
            fpu_val_7_81 = item_c4_1;
            f5_1 = 0.0f;
            fpu_val_7_81 - f5_1;
        }

        long double fpu_val_7_85;

        if (!*(dest_1 + 0x264) || !(*(&((fpu_val_7_81 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_81, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_7_81 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            fpu_val_7_85 = (param_3 - entity_29[1]) / item_d0_1;
        else
        {
            long double fpu_val_7_82 = item_d0_1;
            long double f6_1 = 0.5f;
            fpu_val_7_82 - f6_1;

            if (*(&((fpu_val_7_82 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_82, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_82 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                fpu_val_7_85 = 1.0f;
            else
            {
                fpu_val_7_85 = (param_3 - entity_29[1]) / (item_d0_1 - 0.5f);
                long double fpu_val_6_5 = 0.0f;
                fpu_val_6_5 - fpu_val_7_85;

                if (*(&((fpu_val_6_5 < fpu_val_7_85 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_5, fpu_val_7_85) ? 1 : 0) << 0xa
                    | (fpu_val_6_5 == fpu_val_7_85 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double fpu_val_6_6 = 1.0f;
                    fpu_val_6_6 - fpu_val_7_85;

                    if (*(&((fpu_val_6_6 < fpu_val_7_85 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_6, fpu_val_7_85) ? 1 : 0) << 0xa
                            | (fpu_val_6_6 == fpu_val_7_85 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        fpu_val_7_85 = 1.0f;
                }
                else
                    fpu_val_7_85 = 0.0f;
            }
        }

        void* temp_29 = *temp_28;
        void* entity_30 = *entity_29;
        item_88 = (*(temp_29 + 0xd4) - *(entity_30 + 0xd4)) * fpu_val_7_85 + *(entity_30 + 0xd4);
        item_84 = (*(temp_29 + 0xd8) - *(entity_30 + 0xd8)) * fpu_val_7_85 + *(entity_30 + 0xd8);
        item_80 = (*(temp_29 + 0xdc) - *(entity_30 + 0xdc)) * fpu_val_7_85 + *(entity_30 + 0xdc);
    }

    *(&item_f0_10 + 4) = item_3c;
    float item_b0;
    item_f0_10 = &item_b0;
    Sys_ReadFileBlock_12(item_f0_10, fp0_4, fp0_5);
    void* data_73 = *param_2[1];
    int32_t source_3 = *(data_73 + 0x8c);

    if (source_3 >= 0)
    {
        double* source_4;
        double* dest_2;

        if (param_6 || *(data_73 + 0x95))
        {
            int32_t item_e4_11 = source_3;
            void* item_e8_11 = data_73 + 0x60;
            *(&item_f0_10 + 4) = data_73 + 0x48;
            item_f0_10 = &item_b0;
            *(&item_f8_10 + 4) = &item_54;
            Physics_EvaluateAreaCriteria_7();
            dest_2 = dest_1 + 0x218;
            source_4 = &item_54;
        }
        else
        {
            source_4 = dest_1 + 0x218;
            dest_2 = &item_54;
        }

        memcpy(dest_2, source_4, 0x18);
        dest_1 = context;
    }

    void* data_75 = *param_2[1];
    int32_t source_5 = *(data_75 + 0x90);

    if (source_5 >= 0)
    {
        int32_t* source_6;
        int32_t* dest_3;

        if (param_6 || *(data_75 + 0x96))
        {
            int32_t item_e4_12 = source_5;
            float* item_e8_12 = &item_b0;
            *(&item_f0_10 + 4) = &item_54;
            Physics_InterpolateWaypoint_7();
            dest_3 = dest_1 + 0x230;
            source_6 = &item_b0;
        }
        else
        {
            source_6 = dest_1 + 0x230;
            dest_3 = &item_b0;
        }

        memcpy(dest_3, source_6, 0x28);
        dest_1 = context;
    }

    long double fpu_val_7_91 = *(dest_1 + 0x74);
    long double f7 = 0.0f;
    fpu_val_7_91 - f7;

    if (!(*(&((fpu_val_7_91 < f7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_91, f7) ? 1 : 0) << 0xa
        | (fpu_val_7_91 == f7 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double fpu_val_7_92 = *(dest_1 + 0x74);
        long double f9_1 = param_3;
        fpu_val_7_92 - f9_1;

        if (!(*(&((fpu_val_7_92 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_92, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_7_92 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            item_b8 = param_3 / *(dest_1 + 0x74);
    }

    long double fpu_val_7_95 = *(dest_1 + 0x78);
    long double f8 = 0.0f;
    fpu_val_7_95 - f8;
    long double fpu_val_6_19;
    long double fpu_val_7_97;

    if (!(*(&((fpu_val_7_95 < f8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_95, f8) ? 1 : 0) << 0xa
        | (fpu_val_7_95 == f8 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        fpu_val_7_97 = param_5 - param_3;
        fpu_val_6_19 = *(dest_1 + 0x78);
        fpu_val_7_97 - fpu_val_6_19;
    }

    long double fpu_val_7_98;

    if (*(&((fpu_val_7_95 < f8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_95, f8) ? 1 : 0) << 0xa
            | (fpu_val_7_95 == f8 ? 1 : 0) << 0xe) + 1) & 0x40 || !(*(&(
            (fpu_val_7_97 < fpu_val_6_19 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_97, fpu_val_6_19) ? 1 : 0) << 0xa
            | (fpu_val_7_97 == fpu_val_6_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        fpu_val_7_98 = item_38;
    else
        fpu_val_7_98 = fpu_val_7_97 / *(dest_1 + 0x78);

    long double fpu_val_6_20 = item_b8;
    fpu_val_6_20 - fpu_val_7_98;
    float item_d0_2;

    item_d0_2 = !(*(&((fpu_val_6_20 < fpu_val_7_98 ? 1 : 0) << 8
        | (FCMP_UO(fpu_val_6_20, fpu_val_7_98) ? 1 : 0) << 0xa | (fpu_val_6_20 == fpu_val_7_98 ? 1 : 0) << 0xe
        | 0x3800) + 1) & 1) ? fpu_val_7_98 : item_b8;

    long double fpu_val_7_101 = 0.0f;
    long double f10 = item_d0_2;
    fpu_val_7_101 - f10;

    if (*(&((fpu_val_7_101 < f10 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_101, f10) ? 1 : 0) << 0xa
        | (fpu_val_7_101 == f10 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double fpu_val_7_102 = 1.0f;
        long double f11_1 = item_d0_2;
        fpu_val_7_102 - f11_1;

        if (*(&((fpu_val_7_102 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_102, f11_1) ? 1 : 0) << 0xa
                | (fpu_val_7_102 == f11_1 ? 1 : 0) << 0xe) + 1) & 1)
            item_d0_2 = 1.0f;
    }
    else
        item_d0_2 = 0.0f;

    int32_t item_e4_13 = 0xa76c70;
    int32_t item_e8_13 = 0xa76c70;
    item_54 = (0.5f - Sys_AllocateMemory_14(0xa76c70)) * item_cc_1 * 4096.0f + item_54;
    *(&item_f0_10 + 4) = 0xa76c70;
    double item_4c_1 = (0.5f - Sys_AllocateMemory_14(0xa76c70)) * item_cc_1 * 4096.0f + item_4c;
    item_f0_10 = 0xa76c70;
    double item_44_1 = (0.5f - Sys_AllocateMemory_14()) * item_cc_1 * 4096.0f + item_44;
    float item_e4_14 = (0.5f - Sys_AllocateMemory_14(0xa76c70)) * item_cc_1 * 0.53407079f;
    int32_t item_e8_14 = 0xa76c70;
    float item_e8_15 = (0.5f - Sys_AllocateMemory_14(0xa76c70)) * item_cc_1 * 0.53407079f;
    *(&item_f0_10 + 4) = 0xa76c70;
    *(&item_f0_10 + 4) = (0.5f - Sys_AllocateMemory_14()) * item_cc_1 * 0.53407079f;
    float item_7c;
    item_f0_10 = &item_7c;
    Sys_ReadFileBlock_12(item_f0_10, item_e8_15, item_e4_14);
    float item_ac;
    float item_a8;
    float item_70;
    float item_64;
    float item_30 = item_64 * item_a8 + item_70 * item_ac + item_7c * item_b0;
    float item_78;
    float item_6c;
    float item_60;
    float item_2c = item_60 * item_a8 + item_6c * item_ac + item_78 * item_b0;
    float item_74;
    float item_68;
    float item_5c;
    float item_28 = item_5c * item_a8 + item_68 * item_ac + item_74 * item_b0;
    int32_t item_8c;
    int32_t item_58;
    int32_t item_c = item_58 + item_8c + 1;
    float item_a4;
    float item_a0;
    float item_9c;
    float item_24 = item_9c * item_64 + item_a0 * item_70 + item_a4 * item_7c;
    float item_20 = item_9c * item_60 + item_a0 * item_6c + item_a4 * item_78;
    float item_1c = item_9c * item_5c + item_a0 * item_68 + item_a4 * item_74;
    float item_98;
    float item_94;
    float item_90;
    float item_18 = item_90 * item_64 + item_94 * item_70 + item_98 * item_7c;
    float item_14 = item_90 * item_60 + item_94 * item_6c + item_98 * item_78;
    float item_10 = item_90 * item_5c + item_94 * item_68 + item_98 * item_74;
    memcpy(&item_b0, &item_30, 0x28);
    int32_t item_e4_15 = 0;
    *(&item_f0_10 + 4) = 0;
    float item_c0_1 = item_d0_2 * *(context + 0x70) + 1.0f - item_d0_2;
    item_f0_10 = SoundSys_SetFrequency_9();
    *(&item_f8_10 + 4) = 0x447a0000;
    item_f8_10 = 0x3f800000;
    *(&item_100_9 + 4) = fp0_6;
    item_100_9 = &item_b0;
    *(&item_108_9 + 4) = &item_54;
    item_108_9 = g_a76c7c;
    int32_t* data_79;
    float entity_38;
    data_79 =
        Camera_SubmitFrame(item_108_9, item_100_9, 0x447a00003f800000, item_f0_10, item_34, nullptr);
    data_79 = *(context + 0x26c);

    if (!data_79)
    {
        if (g_a76c80 && param_6)
        {
            int32_t* data_81 = *(context + 0x25c);

            if (data_81)
            {
                QTask_FindType(data_81);
                *(context + 0x25c) = 0;
            }

            void* data_83 = *param_2[1];

            if (*(data_83 + 0xcc) == 1)
            {
                int32_t item_e4_17 = 1;
                int32_t item_e8_17 = 0x4419999a;
                *(&item_f0_10 + 4) = *(data_83 + 0xdc);
                item_f0_10 = *(data_83 + 0xd8);
                *(&item_f8_10 + 4) = *(data_83 + 0xd4);
                item_f8_10 = g_a76c80;
                *(context + 0x25c) = Camera_ApplyWideScreen(item_f8_10, item_f0_10, 0x4419999a, 1);
            }

            if (*(*param_2[1] + 0xcc) == 3)
                Camera_ApplyHandiCam_2();

            int32_t* data_87 = *(context + 0x264);

            if (data_87)
            {
                QTask_FindType(data_87);
                *(context + 0x264) = 0;
            }

            void* data_88 = *param_2[1];
            entity_38 = *(data_88 + 0xcc);

            if (entity_38 == 2 || entity_38 == 3)
            {
                int32_t item_e8_18 = 0x5a;
                *(&item_f0_10 + 4) = 0x3c;
                item_f0_10 = *(data_88 + 0xdc);
                *(&item_f8_10 + 4) = *(data_88 + 0xd8);
                item_f8_10 = *(data_88 + 0xd4);
                *(&item_100_9 + 4) = 0x4419999a;
                item_100_9 = g_a76c80;
                struct status_msg* data_90;
                data_90 = Camera_UpdateViewCone(item_100_9, item_f8_10, item_f0_10, 1.26116862e-43.0f, item_c4_1);
                *(context + 0x264) = data_90;
            }

            int32_t* data_91 = *(context + 0x268);

            if (data_91)
            {
                entity_38 = QTask_FindType(data_91);
                *(context + 0x268) = 0;
            }

            void* data_92 = *param_2[1];

            if (*(data_92 + 0xcc) == 4)
            {
                int32_t item_e4_21 = 0x4419999a;
                int32_t item_e8_19 = *(data_92 + 0xdc);
                *(&item_f0_10 + 4) = *(data_92 + 0xd8);
                item_f0_10 = *(data_92 + 0xd4);
                *(&item_f8_10 + 4) = g_a76c80;
                int32_t data_94;
                data_94 = Camera_ApplyWideScreen_2();
                *(context + 0x268) = data_94;
            }
        }

        int32_t data_95 = *(context + 0x264);

        if (data_95)
        {
            *(&item_f0_10 + 4) = item_88;
            item_f0_10 = data_95;
            entity_38 = Camera_ApplyLineFilter_2(item_f0_10, item_84, item_80);
        }

        void* data_96 = *(context + 0x25c);

        if (data_96)
        {
            entity_38 = item_c4_1;
            Camera_SetFieldOfView_3(data_96, entity_38);
        }

        long double fpu_val_7_169;
        long double f12_1;

        if (g_a76c80)
        {
            fpu_val_7_169 = item_c0_1;
            f12_1 = 1.0f;
            fpu_val_7_169 - f12_1;
        }

        if (!g_a76c80 || *(&((fpu_val_7_169 < f12_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_169, f12_1) ? 1 : 0) << 0xa
            | (fpu_val_7_169 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            data_79 = *(context + 0x260);

            if (data_79)
            {
                data_79 = QTask_FindType(data_79);
                *(context + 0x260) = 0;
            }
        }
        else
        {
            float item_c8_2 = g_c28b48 + 1.0f;
            data_79 = Display_GetActiveMode();

            if (!*(context + 0x260))
            {
                float item_e4_24 = entity_38;
                int32_t item_e8_22 = 0;
                *(&item_f0_10 + 4) = 0;
                item_f0_10 = item_c8_2;
                *(&item_f8_10 + 4) = g_c28b44 + 1.0f;
                item_f8_10 = 0x43cccccd;
                *(&item_100_9 + 4) = 0;
                item_100_9 = 0;
                *(&item_108_9 + 4) = 0;
                item_108_9 = g_a76c80;
                struct status_msg* data_99 = Camera_ApplyPostProcess(item_108_9, 0, 0x43cccccd, item_f0_10, 0,
                    (1.0f - item_c0_1) * item_c8_2 * 0.5f + 1.0f);
                *(context + 0x260) = data_99;
                return data_99;
            }
        }
    }

    return data_79;
}

// Original IGI.EXE function: SoundSys_Update3DPosition_2 (VA 0x004E4530; static CFG gate PASS, CFG score 0.924).
#include "SoundSys_Update3DPosition_2.h"
int32_t* SoundSys_Update3DPosition_2(float context, int32_t* param_2, double* param_3, float* param_4, float* param_5, char param_6, char param_7, int32_t param_8, char* param_9 )

{
    int32_t saved_ebp_1;
    int32_t saved_frame = saved_ebp_1;
    int32_t saved_ebx_1;
    int32_t saved_obj = saved_ebx_1;
    int32_t saved_esi_1;
    int32_t saved_src = saved_esi_1;
    *(context + 0x5b4) = param_6;
    *(context + 0x5b5) = param_7;
    int32_t saved_edi_1;
    int32_t saved_target = saved_edi_1;
    *(context + 0xa4) = 0;
    *(context + 0x59c) = param_8;

    if (param_6)
        *(context + 0x59c) = 1;

    int32_t* dest_val = param_3;
    int32_t* source_val = param_2;
    double* item_138 = source_val;
    double item_118 = Sys_DispatchOpcode_11(item_138, dest_val);
    item_138 = *param_5 * item_118;
    int32_t item_144 = dest_val[1];
    double item_68[0x4];
    Terrain_ConnectGraphNode_7(&item_68, *source_val, source_val[1], *dest_val, *param_4 * item_118, item_138);
    item_138 = param_5[3] * item_118;
    int32_t item_144_1 = dest_val[3];
    double item_48[0x4];
    Terrain_ConnectGraphNode_7(&item_48, source_val[2], source_val[3], dest_val[2], param_4[3] * item_118, item_138);
    item_138 = param_5[6] * item_118;
    double item_140_3 = param_4[6] * item_118;
    int32_t item_144_2 = dest_val[5];
    double item_28[0x4];
    Terrain_ConnectGraphNode_7(&item_28, source_val[4], source_val[5], dest_val[4], item_140_3, item_138);
    float item_74;
    float item_70;
    float item_6c;
    Sys_Atan2UndefinedInOrig(param_4, &item_74, &item_70, &item_6c);
    float item_a4;
    float item_a0;
    float item_9c;
    Sys_Atan2UndefinedInOrig(param_5, &item_a4, &item_a0, &item_9c);
    long double fpu_val_7_14 = *source_val + *dest_val;
    int32_t data_8 = *(context + 0x59c);
    int32_t item_108 = data_8;
    double item_98 = fpu_val_7_14 * 0.5;
    double item_90 = (*(dest_val + 8) + *(source_val + 8)) * 0.5;
    int32_t i = 0;
    long double fpu_val_7_21 = (*(dest_val + 0x10) + *(source_val + 0x10)) * 0.5;
    *(context + 0xf8) = 0;
    int32_t i_6 = 0;
    double item_88 = fpu_val_7_21;
    float item_ec = 1.0f / item_108;
    float item_fc;
    float item_e4;
    float item_e0;
    double item_d0;
    double item_c8;

    if (data_8 >= 0)
    {
        do
        {
            int16_t data_9;
            data_9 = param_6;
            long double fpu_val_7_25 = i_6 * item_ec;
            float item_dc_1 = fpu_val_7_25;
            long double fpu_val_7_40;

            if (!data_9)
            {
                long double fpu_val_6_18 = item_74;
                float item_f0_1 = fpu_val_6_18;
                long double fpu_val_5_3 = item_a4;
                item_108 = fpu_val_5_3;
                long double fpu_val_4_7 = item_a4 - item_74;
                long double f1_1 = 3.14159274f;
                fpu_val_4_7 - f1_1;

                if (!(*(&((fpu_val_4_7 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_4_7, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_4_7 == f1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
                {
                    long double fpu_val_4_9;
                    long double f4_1;

                    do
                    {
                        fpu_val_6_18 = fpu_val_6_18 + 6.28318548f;
                        fpu_val_4_9 = item_a4 - fpu_val_6_18;
                        f4_1 = 3.14159274f;
                        fpu_val_4_9 - f4_1;
                    } while (!(*(&((fpu_val_4_9 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_4_9, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_4_9 == f4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41));
                    item_f0_1 = fpu_val_6_18;
                }

                long double fpu_val_4_11 = item_a4 - fpu_val_6_18;
                long double f3_1 = -3.14159274f;
                fpu_val_4_11 - f3_1;
                data_9 = (fpu_val_4_11 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_4_11, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_4_11 == f3_1 ? 1 : 0) << 0xe | 0x2800;

                if (*(&data_9 + 1) & 1)
                {
                    do
                    {
                        fpu_val_5_3 = fpu_val_5_3 + 6.28318548f;
                        long double fpu_val_4_13 = fpu_val_5_3 - fpu_val_6_18;
                        long double f6_1 = -3.14159274f;
                        fpu_val_4_13 - f6_1;
                        data_9 = (fpu_val_4_13 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_4_13, f6_1) ? 1 : 0) << 0xa
                            | (fpu_val_4_13 == f6_1 ? 1 : 0) << 0xe | 0x2800;
                    } while (*(&data_9 + 1) & 1);

                    item_108 = fpu_val_5_3;
                }

                double item_118_1 = fpu_val_7_25;
                int32_t item_134_3 = *(&item_118_1 + 4);
                void* data_15 = context + i * 0xc;
                int32_t item_138_3 = item_118_1;
                *(&item_140_3 + 4) = &item_68;
                *(data_15 + 0x104) = Terrain_SampleHeightmap_7() - item_98;
                float* data_16 = context + ((i * 3 + 0x42) << 2);
                item_140_3 = *(&item_118_1 + 4);
                *data_16 = Terrain_SampleHeightmap_7(&item_48, item_118_1) - item_90;
                int32_t item_14c_3 = *(&item_118_1 + 4);
                *(data_15 + 0x10c) = Terrain_SampleHeightmap_7(&item_28, item_118_1) - item_88;

                if (!i)
                {
                    memcpy(context + 0x200, param_4, 0x28);
                    i = i_6;
                    source_val = param_2;
                }
                else if (i != *(context + 0x59c))
                {
                    int32_t item_134_4 = *(&item_118_1 + 4);
                    int32_t item_138_4 = item_118_1;
                    *(&item_140_3 + 4) = &item_68;
                    item_fc = Terrain_CalculateNormals_7();
                    item_140_3 = *(&item_118_1 + 4);
                    float item_f8_1 = Terrain_CalculateNormals_7(&item_48, item_118_1);
                    int32_t item_14c_4 = *(&item_118_1 + 4);
                    float item_f4_1 = Terrain_CalculateNormals_7(&item_28, item_118_1);
                    long double fpu_val_7_57 = item_fc;
                    long double f15_1 = 0.0f;
                    fpu_val_7_57 - f15_1;

                    if (!(*(&((fpu_val_7_57 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_57, f15_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_57 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4e4b0b:
                        float* item_134_5 = &item_e0;
                        float* item_138_5 = &item_e4;
                        *(&item_140_3 + 4) = &item_fc;
                        Sys_ResolveSymbol_10();
                    }
                    else
                    {
                        long double fpu_val_7_58 = item_f8_1;
                        long double f17_1 = 0.0f;
                        fpu_val_7_58 - f17_1;

                        if (!(*(&((fpu_val_7_58 < f17_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_58, f17_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_58 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e4b0b;

                        long double fpu_val_7_59 = item_f4_1;
                        long double f19_1 = 0.0f;
                        fpu_val_7_59 - f19_1;

                        if (!(*(&((fpu_val_7_59 < f19_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_59, f19_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_59 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e4b0b;

                        item_e4 = 0.0f;
                        item_e0 = 0.0f;
                    }

                    *(&item_140_3 + 4) = (item_108 - item_f0_1) * item_dc_1 + item_f0_1;
                    item_140_3 = context + i * 0x28 + 0x200;
                    Sys_ReadFileBlock_12(item_140_3, item_e4, item_e0);
                    item_fc = *(data_15 + 0x104) - *(data_15 + 0xf8);
                    long double fpu_val_7_69 = *(data_15 + 0x10c) - *(data_15 + 0x100);
                    float item_f4_2 = fpu_val_7_69;
                    long double fpu_val_6_29 = *data_16 - *(context + ((i * 3 + 0x3f) << 2));
                    long double fpu_val_5_10 = item_fc;
                    fpu_val_7_40 = sqrtl(fpu_val_5_10 * fpu_val_5_10 + fpu_val_6_29 * fpu_val_6_29
                        + fpu_val_7_69 * fpu_val_7_69);
                    *(context + (i << 2) + 0x544) = fpu_val_7_40;
                    *(context + 0xf8) = fpu_val_7_40 + *(context + 0xf8);
                }
                else
                {
                    memcpy(context + i * 0x28 + 0x200, param_5, 0x28);
                    long double fpu_val_7_48 = *(data_15 + 0x104) - *(data_15 + 0xf8);
                    i = i_6;
                    source_val = param_2;
                    long double fpu_val_6_23 = *data_16 - *(context + ((i_6 * 3 + 0x3f) << 2));
                    item_108 = *(data_15 + 0x10c) - *(data_15 + 0x100);
                    double item_118_2 = fpu_val_6_23;
                    long double fpu_val_7_52 =
                        sqrtl(fpu_val_7_48 * fpu_val_7_48 + item_118_2 * item_118_2 + item_108 * item_108);
                    *(context + (i_6 << 2) + 0x544) = fpu_val_7_52;
                    *(context + 0xf8) = fpu_val_7_52 + *(context + 0xf8);
                }
            }
            else
            {
                void* data_10 = context + i * 0xc;
                item_d0 = (param_3[1] - *(source_val + 8)) * item_dc_1 + *(source_val + 8);
                item_c8 = (param_3[2] - *(source_val + 0x10)) * item_dc_1 + *(source_val + 0x10);
                *(data_10 + 0x104) = (*param_3 - *source_val) * fpu_val_7_25 + *source_val - item_98;
                *(context + ((i * 3 + 0x42) << 2)) = item_d0 - item_90;
                *(data_10 + 0x10c) = item_c8 - item_88;
                void* data_12 = context + i * 0x28;
                item_108 = data_12 + 0x200;
                *(data_12 + 0x200) = 0;
                *(data_12 + 0x204) = 0;
                *(context + ((i * 5 + 0x41) << 3)) = 0;
                memset(data_12 + 0x20c, 0, 0x1c);
                long double fpu_val_7_35 = *param_3 - *source_val;
                float item_b0 = fpu_val_7_35;
                float item_ac_1 = param_3[1] - *(source_val + 8);
                float item_a8_1 = param_3[2] - *(source_val + 0x10);
                long double f2_1 = 0.0f;
                fpu_val_7_35 - f2_1;
                float item_78;
                int32_t item_7c;

                if (!(*(&((fpu_val_7_35 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_35, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_35 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4e482c:
                    float* item_134_1 = &item_78;
                    int32_t* item_138_1 = &item_7c;
                    *(&item_140_3 + 4) = &item_b0;
                    Sys_ResolveSymbol_10();
                }
                else
                {
                    long double fpu_val_7_36 = item_ac_1;
                    long double f5_1 = 0.0f;
                    fpu_val_7_36 - f5_1;

                    if (!(*(&((fpu_val_7_36 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_36, f5_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_36 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e482c;

                    long double fpu_val_7_37 = item_a8_1;
                    long double f7_1 = 0.0f;
                    fpu_val_7_37 - f7_1;

                    if (!(*(&((fpu_val_7_37 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_37, f7_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_37 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e482c;

                    item_7c = 0;
                    item_78 = 0.0f;
                }
                Sys_DispatchOpcode_12(item_108, item_78);

                if (!i)
                {
                    long double fpu_val_7_38 = item_a8_1;
                    long double fpu_val_6_16 = item_ac_1;
                    long double fpu_val_5_1 = item_b0;
                    fpu_val_7_40 =
sqrtl SoundSys_Update3DPosition_2(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_16 * fpu_val_6_16 + fpu_val_7_38 * fpu_val_7_38)
                        * item_ec;
                    *(context + 0x548) = fpu_val_7_40;
                    *(context + 0xf8) = fpu_val_7_40 + *(context + 0xf8);
                }
            }
            i += 1;
            i_6 = i;
        } while (i <= *(context + 0x59c));
    }

    *(context + (*(context + 0x59c) << 2) + 0x548) = 0;
    int32_t* result = DynObj_Missing(param_9);
    item_108 = result;
    *(context + 0x6c) = result;

    if (result)
    {
        *(context + 0xfc) = 0;
        *(context + 0x100) = 0;
        int32_t i_7 = 0;

        if (result[0xf] > 0)
        {
            int32_t* result_1 = result;
            int32_t i_1;

            do
            {
                void* entity_23 = *(*(*result_1 + 0xc) + 0xc);

                if (!*(entity_23 + 0x20))
                {
                    void* temp_23 = *(entity_23 + 0x24);
                    int32_t j = 0;
                    float* entity_24 = *(temp_23 + 0x10);

                    if (*(temp_23 + 0xc) > 0)
                    {
                        do
                        {
                            long double fpu_val_7_71 = *entity_24;
                            long double f11_1 = *(context + 0xfc);
                            fpu_val_7_71 - f11_1;

                            if (*(&((fpu_val_7_71 < f11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_71, f11_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_71 == f11_1 ? 1 : 0) << 0xe) + 1) & 1)
                                *(context + 0xfc) = *entity_24;

                            long double fpu_val_7_72 = *entity_24;
                            long double f14_1 = *(context + 0x100);
                            fpu_val_7_72 - f14_1;

                            if (!(*(&((fpu_val_7_72 < f14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_72, f14_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_72 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                *(context + 0x100) = *entity_24;

                            j += 1;
                            entity_24 = &entity_24[8];
                        } while (j < *(temp_23 + 0xc));

                        result = item_108;
                    }
                }

                i_1 = i_7 + 1;
                result_1 = &result_1[1];
                i_7 = i_1;
            } while (i_1 < result[0xf]);
        }

        float item_120_1;

        if (!*(context + 0x5b4))
        {
            item_120_1 = 0.0f;

            for (int32_t i_2 = 0; i_2 < 2; i_2 += 1)
            {
                int32_t item_138_9 = 0;
                *(&item_140_3 + 4) = 1;
                item_140_3 = i_2;
                int32_t item_144_5 = 0;
                void* data_56 = Display_SetDisplayMode_18(context, 0, item_140_3, &item_108);
                int32_t j_2 = item_108;

                if (j_2 > 0)
                {
                    float* entity_41 = data_56 + 4;
                    int32_t j_1;

                    do
                    {
                        long double fpu_val_7_90 = entity_41[1];
                        long double fpu_val_6_49 = *entity_41;
                        long double fpu_val_5_18 = entity_41[-1];
                        long double fpu_val_4_32 = sqrtl(fpu_val_5_18 * fpu_val_5_18 + fpu_val_7_90 * fpu_val_7_90
                            + fpu_val_6_49 * fpu_val_6_49);
                        long double fpu_val_6_51 = item_120_1;
                        fpu_val_6_51 - fpu_val_4_32;

                        if (*(&((fpu_val_6_51 < fpu_val_4_32 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_51, fpu_val_4_32) ? 1 : 0) << 0xa
                                | (fpu_val_6_51 == fpu_val_4_32 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                            item_120_1 = fpu_val_4_32;

                        entity_41 = &entity_41[3];
                        j_1 = j_2;
                        j_2 -= 1;
                    } while (j_1 != 1);
                }

                long double fpu_val_7_93 = item_120_1;
                long double f9_1 = 1.0f;
                fpu_val_7_93 - f9_1;

                if (*(&((fpu_val_7_93 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_93, f9_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_93 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    item_120_1 = 1.0f;
            }
        }
        else
        {
            float item_120 = 1.0f;

            if (!Sys_ResolveSymbol_11(source_val, param_3))
            {
                long double fpu_val_7_74 = *param_3 - *source_val;
                item_fc = fpu_val_7_74;
                float item_f8_3 = param_3[1] - *(source_val + 8);
                float item_f4_3 = param_3[2] - *(source_val + 0x10);
                long double f8_1 = 0.0f;
                fpu_val_7_74 - f8_1;

                if (*(&((fpu_val_7_74 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_74, f8_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_74 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    long double fpu_val_7_75 = item_f8_3;
                    long double f10_1 = 0.0f;
                    fpu_val_7_75 - f10_1;

                    if (*(&((fpu_val_7_75 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_75, f10_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_75 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    {
                        long double fpu_val_7_76 = item_f4_3;
                        long double f13_1 = 0.0f;
                        fpu_val_7_76 - f13_1;

                        if (*(&((fpu_val_7_76 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_76, f13_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_76 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        {
                            item_fc = 1.0f;
                            item_f8_3 = 0.0f;
                            item_f4_3 = 0.0f;
                        }
                    }
                }

                int32_t entity_26 = *(context + 0x20c);
                item_d0 = *(context + 0x218);
                long double fpu_val_7_79 = 1.0f / (*(context + 0x100) - *(context + 0xfc));
                int32_t temp_28 = *(context + 0x21c);
                int32_t item_d8 = *(context + 0x200);
                int32_t item_d4_1 = entity_26;
                *(&item_c8 + 4) = temp_28;
                *(&item_d0 + 4) = *(context + 0x204);
                item_c8 = *(context + 0x210);
                int32_t item_b8_1 = *(context + 0x220);
                int32_t item_c0_1 = *(context + 0x208);
                int32_t item_bc_1 = *(context + 0x214);
                int32_t item_b4_1 = *(context + 0x224);
                float data_39 = item_fc;
                memcpy(context + 0x70, &item_d8, 0x28);
                *(context + 0x70) = data_39;
                *(context + 0x74) = item_f8_3;
                *(context + 0x78) = item_f4_3;
                bool flag_8_1 = !*(context + 0x5b5);
                long double fpu_val_6_36 = fpu_val_7_79 * *(context + 0x70);
                item_108 = fpu_val_6_36;
                *(context + 0x70) = fpu_val_6_36;
                long double fpu_val_6_38 = fpu_val_7_79 * *(context + 0x74);
                float item_ec_1 = fpu_val_6_38;
                *(context + 0x74) = fpu_val_6_38;
                long double fpu_val_7_80 = fpu_val_7_79 * *(context + 0x78);
                *(context + 0x78) = fpu_val_7_80;

                if (!flag_8_1)
                {
                    *(context + 0x70) = -(item_108);
                    *(context + 0x74) = -(item_ec_1);
                    *(context + 0x78) = -(fpu_val_7_80);
                }

                int32_t data_43 = *(context + 0x7c);
                item_d8 = *(context + 0x70);
                int32_t item_d4_2 = data_43;
                item_d0 = *(context + 0x88);
                *(&item_d0 + 4) = *(context + 0x74);
                item_c8 = *(context + 0x80);
                *(&item_c8 + 4) = *(context + 0x8c);
                int32_t item_c0_2 = *(context + 0x78);
                int32_t item_bc_2 = *(context + 0x84);
                int32_t item_b8_2 = *(context + 0x90);
                int32_t item_b4_2 = *(context + 0x94);
                memcpy(context + 0x70, &item_d8, 0x28);
                long double fpu_val_7_83 = *(context + 0x78);
                long double fpu_val_6_43 = *(context + 0x74);
                long double fpu_val_5_12 = *(context + 0x70);
                long double fpu_val_4_23 =
                    sqrtl(fpu_val_5_12 * fpu_val_5_12 + fpu_val_6_43 * fpu_val_6_43 + fpu_val_7_83 * fpu_val_7_83);
                long double fpu_val_6_45 = *(context + 0x84);
                long double fpu_val_5_14 = *(context + 0x80);
                long double fpu_val_4_24 = *(context + 0x7c);
                item_e4 =
                    sqrtl(fpu_val_4_24 * fpu_val_4_24 + fpu_val_5_14 * fpu_val_5_14 + fpu_val_6_45 * fpu_val_6_45);
                long double fpu_val_6_47 = *(context + 0x90);
                long double fpu_val_5_16 = *(context + 0x8c);
                long double fpu_val_4_26 = *(context + 0x88);
                item_e0 =
                    sqrtl(fpu_val_4_26 * fpu_val_4_26 + fpu_val_5_16 * fpu_val_5_16 + fpu_val_6_47 * fpu_val_6_47);
                item_120 = fpu_val_4_23;
                long double f21_1 = item_e4;
                fpu_val_4_23 - f21_1;

                if (*(&((fpu_val_4_23 < f21_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_4_23, f21_1) ? 1 : 0) << 0xa
                        | (fpu_val_4_23 == f21_1 ? 1 : 0) << 0xe) + 1) & 1)
                    item_120 = item_e4;

                long double fpu_val_7_85 = item_120;
                long double f22_1 = item_e0;
                fpu_val_7_85 - f22_1;

                if (*(&((fpu_val_7_85 < f22_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_85, f22_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_85 == f22_1 ? 1 : 0) << 0xe) + 1) & 1)
                    item_120 = item_e0;

                int32_t data_50 = *(context + 0x88);
                int32_t temp_31 = *(context + 0x7c);
                item_d8 = *(context + 0x70);
                item_d0 = data_50;
                *(&item_d0 + 4) = *(context + 0x74);
                *(&item_c8 + 4) = *(context + 0x8c);
                int32_t item_d4_3 = temp_31;
                int32_t item_c0_3 = *(context + 0x78);
                int32_t item_b8_3 = *(context + 0x90);
                item_c8 = *(context + 0x80);
                int32_t item_b4_3 = *(context + 0x94);
                int32_t item_bc_3 = *(context + 0x84);
                memcpy(context + 0x520, &item_d8, 0x28);
                Sys_ReadFileBlock_13(context + 0x520, context + 0x520);
            }

            void** entity_40 = *(context + 0x6c);
            long double fpu_val_7_86 = 0.0f;
            int32_t i_10 = entity_40[0xf];

            if (i_10 > 0)
            {
                int32_t i_8 = i_10;
                int32_t i_3;

                do
                {
                    void* temp_35 = *(*(*entity_40 + 0xc) + 0xc);
                    long double f12_1 = *(temp_35 + 0x78);
                    fpu_val_7_86 - f12_1;

                    if (*(&((fpu_val_7_86 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_86, f12_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_86 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        fpu_val_7_86 = *(temp_35 + 0x78);

                    entity_40 = &entity_40[1];
                    i_3 = i_8;
                    i_8 -= 1;
                } while (i_3 != 1);
            }

            item_120_1 = fpu_val_7_86 * item_120 * 1.10000002f;
        }

        *(&item_140_3 + 4) = context;
        item_140_3 = *(context + 0xf0);
        WorldObject_CommitTransform(item_140_3, &item_98, item_120_1);
        *(context + 0xf4) = item_120_1;
        Display_CloseDevice_18(context);

        if (*(context + 0x5b0) != *(context + 0x6c) || param_6)
        {
            int32_t** source_4 = context + 0x5a0;
            int32_t i_9 = 2;
            int32_t i_4;

            do
            {
                result = *source_4;

                if (result)
                {
                    result = Sys_ExecuteBytecode_2(result);
                    *source_4 = nullptr;
                }

                source_4 = &source_4[2];
                i_4 = i_9;
                i_9 -= 1;
            } while (i_4 != 1);
            result = param_6;

            if (!result)
                goto label_4e50ae;
        }
        else
        {
        label_4e50ae:
            result = *(context + 0x6c);
            int32_t i_5 = 0;

            if (result)
            {
                int32_t temp_38 = *(context + 0xa4);
                int32_t* dest_7 = context + 0x5a0;
                int32_t item_10c_2 = temp_38;
                int32_t item_11c_2 = 0;
                item_108 = 0;
                int32_t* item_f0_2 = dest_7;

                do
                {
                    result = *(*(*(*(*(context + 0x6c) + (temp_38 << 2)) + 0xc) + 0xc) + 0x2c) + i_5;
                    g_a5e3f8 = result;

                    if (result[3])
                    {
                        int32_t item_134_13 = 0;
                        int32_t item_138_11 = 0;
                        *(&item_140_3 + 4) = 1;
                        item_140_3 = item_11c_2;
                        g_a5e3ec = Display_SetDisplayMode_18(context, temp_38, item_140_3, nullptr);

                        if (!*dest_7)
                        {
                            int32_t item_134_14 = 4;
                            int32_t data_68 = *(g_a5e3f8 + 0xc);
                            dest_7[1] = data_68;
                            *dest_7 = Mem_Alloc(data_68 * 0x18, 4);
                        }

                        int32_t entity_46 = dest_7[1] * 0x18;
                        int32_t source_7;
                        int32_t dest_9;
                        dest_9 =
                            memcpy(*dest_7, *(g_a5e3f8 + 0x1c), entity_46 & 0xfffffffc);
                        memcpy(dest_9, source_7, entity_46 & 3);
                        g_a5e3f0 = item_f0_2;
                        SoundSys_EvaluateTrigger(context, item_f0_2);
                        g_a5e374 = *item_f0_2;
                        g_a5e400 = 0;
                        result = SoundSys_LoadSoundDef_2();
                        i_5 = item_108;
                        temp_38 = item_10c_2;
                        dest_7 = item_f0_2;
                    }

                    i_5 += 0x20;
                    dest_7 = &dest_7[2];
                    item_11c_2 += 1;
                    item_f0_2 = dest_7;
                    item_108 = i_5;
                } while (i_5 < 0x40);
            }
        }

        *(context + 0x5b0) = *(context + 0x6c);
    }

    return result;
}

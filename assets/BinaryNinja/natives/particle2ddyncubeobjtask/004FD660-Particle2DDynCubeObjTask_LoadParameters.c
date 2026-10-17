// Original IGI.EXE function: Particle2DDynCubeObjTask_LoadParameters (VA 0x004FD660; static CFG gate FAIL, CFG score 0.812).
#include "Particle2DDynCubeObjTask_LoadParameters.h"
void* Particle2DDynCubeObjTask_LoadParameters(int32_t* context)

{
    void* result = context[0x3c];
    int32_t source_val = 0;
    int32_t dest_val = 0;

    if (!result)
    {
        result = *(context + 0xfd);

        if (result)
            return QTask_FindType(context);
    }
    else
    {
        result = context[0x3f];
        int32_t item_94 = 0xffffffff;
        int32_t item_90_1 = 0x7fefffff;
        int32_t item_8c_1 = 0xffffffff;
        int32_t item_88_1 = 0x7fefffff;
        int32_t item_84_1 = 0xffffffff;
        int32_t item_80_1 = 0x7fefffff;
        int32_t item_ac = 0xffffffff;
        int32_t item_a8_1 = 0xffefffff;
        int32_t item_a4_1 = 0xffffffff;
        int32_t item_a0_1 = 0xffefffff;
        int32_t item_9c_1 = 0xffffffff;
        int32_t item_98_1 = 0xffefffff;

        if (result)
        {
            result = context[0x20];
            source_val = *(*(result + 0xc) + 4) - 1;
        }

        int32_t temp_1;

        do
        {
            temp_1 = context[0x1b];
            double* entity_2 = *(temp_1 + (dest_val << 2));
            entity_2[3] = entity_2[3] + context[0x31];
            *(entity_2 + 0x1c) = context[0x32] + *(entity_2 + 0x1c);
            entity_2[4] = context[0x33] + entity_2[4];
            *entity_2 = entity_2[3] + *entity_2;
            entity_2[1] = *(entity_2 + 0x1c) + entity_2[1];
            entity_2[2] = entity_2[4] + entity_2[2];
            entity_2[7] = *(entity_2 + 0x2c) + entity_2[7];
            *(entity_2 + 0x3c) = context[0x39] + *(entity_2 + 0x3c);

            if (source_val)
            {
                *(entity_2 + 0x2a) += 1;
                temp_1 = context[0x3d];
                result = *(entity_2 + 0x2a);

                if (result >= temp_1)
                {
                    result = entity_2[5];
                    *(entity_2 + 0x2a) = 0;
                    temp_1 = result;

                    if (temp_1 < source_val)
                    {
                        result += 1;
                        entity_2[5] = result;
                    }
                }
            }

            result = *(entity_2 + 0x26);

            if (!result)
            {
                long double fpu_val_7_49 = entity_2[6] - *(entity_2 + 0x34);
                entity_2[6] = fpu_val_7_49;
                long double f0_1 = 0.0f;
                fpu_val_7_49 - f0_1;
                long double fpu_val_7_50;
                long double f1_1;

                if (!(*(&((fpu_val_7_49 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_49, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_49 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    fpu_val_7_50 = *(entity_2 + 0x3c);
                    f1_1 = 0.0f;
                    fpu_val_7_50 - f1_1;
                }

                if (!(*(&((fpu_val_7_49 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_49, f0_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_49 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41) && !(*(&(
                        (fpu_val_7_50 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_50, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_50 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    dest_val += 1;
                else
                    temp_1 = Script_ExecuteLevelScript_30(context, dest_val);
            }
            else
            {
                *(entity_2 + 0x26) = result - 1;
                dest_val += 1;
            }

            result = context[0x3c];
        } while (dest_val < result);

        if (result)
        {
            if (result > 0)
            {
                int32_t* temp_2 = context[0x1b];
                void* source_2 = result;
                void* i;

                do
                {
                    double* entity_3 = *temp_2;
                    long double fpu_val_7_17 = item_ac;
                    long double f5_1 = *entity_3;
                    fpu_val_7_17 - f5_1;

                    if (*(&((fpu_val_7_17 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_17, f5_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_17 == f5_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        int32_t dest_1 = *(entity_3 + 4);
                        item_ac = *entity_3;
                        int32_t item_a8_2 = dest_1;
                    }

                    long double fpu_val_7_18 = item_a4_1;
                    long double f7_1 = entity_3[1];
                    fpu_val_7_18 - f7_1;

                    if (*(&((fpu_val_7_18 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_18, f7_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_18 == f7_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        item_a4_1 = entity_3[1];
                        int32_t item_a0_2 = *(entity_3 + 0xc);
                    }

                    long double fpu_val_7_19 = item_9c_1;
                    long double f9_1 = entity_3[2];
                    fpu_val_7_19 - f9_1;

                    if (*(&((fpu_val_7_19 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_19, f9_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_19 == f9_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        item_9c_1 = entity_3[2];
                        int32_t item_98_2 = *(entity_3 + 0x14);
                    }

                    long double fpu_val_7_20 = item_94;
                    long double f11_1 = *entity_3;
                    fpu_val_7_20 - f11_1;

                    if (!(*(&((fpu_val_7_20 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_20, f11_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_20 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        int32_t dest_4 = *(entity_3 + 4);
                        item_94 = *entity_3;
                        int32_t item_90_2 = dest_4;
                    }

                    long double fpu_val_7_21 = item_8c_1;
                    long double f13_1 = entity_3[1];
                    fpu_val_7_21 - f13_1;

                    if (!(*(&((fpu_val_7_21 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_21, f13_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_21 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        item_8c_1 = entity_3[1];
                        int32_t item_88_2 = *(entity_3 + 0xc);
                    }

                    long double fpu_val_7_22 = item_84_1;
                    long double f15_1 = entity_3[2];
                    fpu_val_7_22 - f15_1;

                    if (!(*(&((fpu_val_7_22 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_22, f15_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_22 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        item_84_1 = entity_3[2];
                        int32_t item_80_2 = *(entity_3 + 0x14);
                    }

                    temp_2 = &temp_2[1];
                    i = source_2;
                    source_2 -= 1;
                } while (i != 1);
            }

            temp_1 = &context[0x28];
            double item_60_1 = item_94 - *(context + 0x88);
            double item_58_1 = item_8c_1 - *(context + 0x90);
            double item_50 = item_84_1 - *(context + 0x98);
            double item_78 = item_ac - *temp_1;
            double item_70_1 = item_a4_1 - *(context + 0xa8);
            double item_68_1 = item_9c_1 - *(context + 0xb0);
            long double fpu_val_7_35 = item_60_1;
            long double f3_1 = 0.0;
            fpu_val_7_35 - f3_1;

            if (*(&((fpu_val_7_35 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_35, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_35 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
            label_4fd9a5:
                memcpy(&context[0x22], &item_94, 0x18);
                memcpy(temp_1, &item_ac, 0x18);
                float item_b4_1 = Script_ParseEnumReal32_30(context);
                Script_ParseEnumString_30(&item_78, context);
                temp_1 = WorldObject_CommitTransform(context[0x2e], context, &item_78, item_b4_1);
            }
            else
            {
                long double fpu_val_7_36 = item_58_1;
                long double f4_1 = 0.0;
                fpu_val_7_36 - f4_1;

                if (*(&((fpu_val_7_36 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_36, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_36 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;

                long double fpu_val_7_37 = item_50;
                long double f6_1 = 0.0;
                fpu_val_7_37 - f6_1;

                if (*(&((fpu_val_7_37 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_37, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_37 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;

                long double fpu_val_7_38 = item_78;
                long double f8_1 = 0.0;
                fpu_val_7_38 - f8_1;

                if (!(*(&((fpu_val_7_38 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_38, f8_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_38 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double fpu_val_7_39 = item_70_1;
                long double f10_1 = 0.0;
                fpu_val_7_39 - f10_1;

                if (!(*(&((fpu_val_7_39 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_39, f10_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_39 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double fpu_val_7_40 = item_68_1;
                long double f12_1 = 0.0;
                fpu_val_7_40 - f12_1;

                if (!(*(&((fpu_val_7_40 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_40, f12_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_40 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double fpu_val_7_41 = item_60_1;
                long double f14_1 = 12288.0;
                fpu_val_7_41 - f14_1;

                if (!(*(&((fpu_val_7_41 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_41, f14_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_41 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double fpu_val_7_42 = item_58_1;
                long double f16_1 = 12288.0;
                fpu_val_7_42 - f16_1;

                if (!(*(&((fpu_val_7_42 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_42, f16_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_42 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double fpu_val_7_43 = item_50;
                long double f18_1 = 12288.0;
                fpu_val_7_43 - f18_1;

                if (!(*(&((fpu_val_7_43 < f18_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_43, f18_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_43 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double fpu_val_7_44 = item_78;
                long double f19_1 = 12288.0;
                fpu_val_7_44 - f19_1;

                if (*(&((fpu_val_7_44 < f19_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_44, f19_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_44 == f19_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;

                long double fpu_val_7_45 = item_70_1;
                long double f20_1 = 12288.0;
                fpu_val_7_45 - f20_1;

                if (*(&((fpu_val_7_45 < f20_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_45, f20_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_45 == f20_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;

                long double fpu_val_7_46 = item_68_1;
                long double f21_1 = 12288.0;
                fpu_val_7_46 - f21_1;

                if (*(&((fpu_val_7_46 < f21_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_46, f21_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_46 == f21_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;
            }
        }

        result = context[0x3b];
        int32_t i_1 = 0;

        if (result)
        {
            int32_t* source_3 = nullptr;
            int32_t* item_b0_1 = nullptr;
            int32_t i_2 = 0;

            if (context[0x3c] > 0)
            {
                int32_t item_bc_1 = 0;

                do
                {
                    void* data_12 = *(context[0x1b] + (i_1 << 2));
                    temp_1 = *(data_12 + 0x24);

                    if (temp_1)
                    {
                        temp_1 -= 1;
                        *(data_12 + 0x24) = temp_1;
                    }

                    if (!*(data_12 + 0x24))
                    {
                        *(context[0x1f] + (source_3 << 2)) = i_1;
                        temp_1 = data_12 + 0x40;
                        memcpy(context[0x1d] + item_bc_1, temp_1, 0x18);
                        memcpy(context[0x1e] + item_bc_1, data_12, 0x18);
                        item_b0_1 += 1;
                        item_bc_1 += 0x18;
                        *(data_12 + 0x24) = 0xf;
                        memcpy(temp_1, data_12, 0x18);
                        source_3 = item_b0_1;
                        i_1 = i_2;
                    }

                    i_1 += 1;
                    i_2 = i_1;
                } while (i_1 < context[0x3c]);
            }

            i_1 = g_54e56a;
            int32_t item_44_1 = 0;
            void item_48;
            DynObj_FindSymbol_11(context[0x2e], context[0x1c], context[0x1d], context[0x1e], source_3, i_1, &item_48,
                0x20000000);
            result = nullptr;
            int32_t item_bc_2 = 0;

            if (source_3 > 0)
            {
                int32_t temp_7 = 0;
                void* result_1 = nullptr;
                int32_t item_b4_2 = 0;
                bool flag_5_1;

                do
                {
                    void* data_15 = result + context[0x1c];

                    if (*(data_15 + 0x58))
                    {
                        int32_t data_18 = g_a7a4d8 * 0x30;
                        memcpy(data_18 + 0xa774c0, context[0x1d] + temp_7, 0x18);
                        int32_t data_20 = g_a7a4d8 + 1;
                        memcpy(data_18 + 0xa774d8, context[0x1e] + temp_7, 0x18);
                        g_a7a4d8 = data_20;

                        if (data_20 == 0x100)
                            g_a7a4d8 = 0;

                        int32_t source_15 = context[0x1d] + temp_7;
                        void* item_40 = data_15;
                        void item_38;
                        memcpy(&item_38, source_15, 0x18);
                        void item_20;
                        memcpy(&item_20, context[0x1e] + temp_7, 0x18);
                        context[0x3b](&item_40);
                        Script_ExecuteLevelScript_30(context, *(context[0x1f] + (item_bc_2 << 2)));
                        source_3 = item_b0_1;
                        temp_7 = item_b4_2;
                    }

                    result = result_1 + 0x70;
                    temp_7 += 0x18;
                    flag_5_1 = item_bc_2 + 1 < source_3;
                    item_bc_2 += 1;
                    result_1 = result;
                    item_b4_2 = temp_7;
                } while (flag_5_1);
            }
        }
    }

    return result;
}

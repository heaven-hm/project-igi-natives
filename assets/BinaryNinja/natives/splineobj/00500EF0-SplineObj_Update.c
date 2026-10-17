// Original IGI.EXE function: SplineObj_Update (VA 0x00500EF0; static CFG gate PASS, CFG score 0.910).
#include "SplineObj_Update.h"
float* SplineObj_Update(int32_t* context)

{
    int32_t* i_10 = context;
    int32_t* i_9 = QTask_TriggerEvent_2(i_10, g_a7a620);
    void* data_1 = QTask_AllocateEvent_2(i_10, g_a7a620);
    int32_t* dest_val = i_10[5];
    void* item_64 = data_1;
    context = dest_val;
    float item_50;
    float item_48;
    float item_38;
    float item_28;
    char entity_19;

    if ((*(dest_val + 0x4f) || *(i_10 + 0x1a5)) && (data_1 || i_9))
    {
        if (!*(dest_val + 0x4e))
        {
            item_50 = 0.0f;
            float item_4c_1 = 0.0f;
            void* item_48_1 = nullptr;

            if (data_1)
            {
                long double fpu_val_7_2 = *(i_10 + 0xf8) - *(data_1 + 0xf8);
                float item_34_1 = *(i_10 + 0x100) - *(data_1 + 0x100);
                data_1 = *(i_10 + 0x108) - *(data_1 + 0x108);
                item_50 = fpu_val_7_2;
                item_4c_1 = item_34_1;
                item_48_1 = data_1;
            }

            if (i_9)
            {
                float item_34_2 = *(i_9 + 0x100) - *(i_10 + 0x100);
                float item_30_2 = *(i_9 + 0x108) - *(i_10 + 0x108);
                item_50 = *(i_9 + 0xf8) - *(i_10 + 0xf8) + item_50;
                item_4c_1 = item_34_2 + item_4c_1;
                item_48_1 = item_30_2 + item_48_1;
            }

            long double fpu_val_7_10 = item_50;
            long double f1_1 = 0.0f;
            fpu_val_7_10 - f1_1;
            int32_t* temp_2;

            if (!(*(&((fpu_val_7_10 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_10, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_10 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_501055:
                temp_2 = &i_10[0x44];
                float* entity_3 = temp_2;
                *entity_3 = item_50;
                entity_3[1] = item_4c_1;
                entity_3[2] = item_48_1;
            }
            else
            {
                long double fpu_val_7_11 = item_4c_1;
                long double f2_1 = 0.0f;
                fpu_val_7_11 - f2_1;

                if (!(*(&((fpu_val_7_11 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_11, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_11 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_501055;

                long double fpu_val_7_12 = item_48_1;
                long double f4_1 = 0.0f;
                fpu_val_7_12 - f4_1;

                if (!(*(&((fpu_val_7_12 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_12, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_12 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_501055;

                temp_2 = &i_10[0x44];
                i_10[0x45] = 0;
                i_10[0x46] = 0;
                *temp_2 = 0x3f800000;
            }

            long double fpu_val_7_13 = *temp_2;
            long double f3_1 = 0.0f;
            fpu_val_7_13 - f3_1;
            long double fpu_val_7_14;
            long double f6_1;

            if (*(&((fpu_val_7_13 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_13, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_13 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                fpu_val_7_14 = i_10[0x45];
                f6_1 = 0.0f;
                fpu_val_7_14 - f6_1;
            }

            if (!(*(&((fpu_val_7_13 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_13, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_13 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
                (fpu_val_7_14 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_14, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_7_14 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                long double fpu_val_7_15 = i_10[0x45];
                i_10[0x49] = 0;
                i_10[0x47] = fpu_val_7_15;
                long double fpu_val_6_10 = -(*temp_2);
                i_10[0x48] = fpu_val_6_10;
                long double f5_1 = 0.0f;
                fpu_val_7_15 - f5_1;
                long double f7_1;

                if (*(&((fpu_val_7_15 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_15, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_15 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                {
                    f7_1 = 0.0f;
                    fpu_val_6_10 - f7_1;
                }

                if (!(*(&((fpu_val_7_15 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_15, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_15 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40) || !(*(&(
                    (fpu_val_6_10 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_10, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_10 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                {
                    i_10[0x49] = 0;
                    long double fpu_val_5_4 =
                        1.0 / sqrtl(fpu_val_7_15 * fpu_val_7_15 + fpu_val_6_10 * fpu_val_6_10);
                    i_10[0x47] = fpu_val_7_15 * fpu_val_5_4;
                    i_10[0x48] = fpu_val_6_10 * fpu_val_5_4;
                }
            }
            else
            {
                i_10[0x47] = 0;
                i_10[0x48] = 0x3f800000;
                i_10[0x49] = 0;
            }

            item_38 = i_10[0x48] * i_10[0x46] - i_10[0x49] * i_10[0x45];
            long double fpu_val_7_23 = i_10[0x47] * i_10[0x46];
            long double fpu_val_6_16 = i_10[0x49] * *temp_2;
            i_10[0x4a] = item_38;
            long double fpu_val_7_27 = i_10[0x47] * i_10[0x45];
            long double fpu_val_6_18 = i_10[0x48] * *temp_2;
            i_10[0x4b] = -((fpu_val_7_23 - fpu_val_6_16));
            i_10[0x4c] = fpu_val_7_27 - fpu_val_6_18;
            item_28 = *temp_2;
            long double fpu_val_7_29 = item_28;
            long double f8_1 = 0.0f;
            fpu_val_7_29 - f8_1;
            float item_24_1 = temp_2[1];
            float item_20_1 = temp_2[2];

            if (!(*(&((fpu_val_7_29 < f8_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_29, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_7_29 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_5011d2:
                long double fpu_val_7_32 = item_20_1;
                long double fpu_val_6_19 = item_24_1;
                long double fpu_val_5_7 = item_28;
                long double fpu_val_7_34 = 1.0
                    / sqrtl(fpu_val_5_7 * fpu_val_5_7 + fpu_val_6_19 * fpu_val_6_19 + fpu_val_7_32 * fpu_val_7_32);
                item_28 = item_28 * fpu_val_7_34;
                item_24_1 = item_24_1 * fpu_val_7_34;
                item_20_1 = item_20_1 * fpu_val_7_34;
            }
            else
            {
                long double fpu_val_7_30 = item_24_1;
                long double f9_1 = 0.0f;
                fpu_val_7_30 - f9_1;

                if (!(*(&((fpu_val_7_30 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_30, f9_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_30 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_5011d2;

                long double fpu_val_7_31 = item_20_1;
                long double f11_1 = 0.0f;
                fpu_val_7_31 - f11_1;

                if (!(*(&((fpu_val_7_31 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_31, f11_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_31 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_5011d2;
            }

            item_50 = i_10[0x46] * i_10[0x4b] - i_10[0x4c] * i_10[0x45];
            float item_1c_1 = item_50;
            float item_4c_2 = -((i_10[0x46] * i_10[0x4a] - i_10[0x4c] * *temp_2));
            item_48 = i_10[0x45] * i_10[0x4a] - *temp_2 * i_10[0x4b];
            item_38 = item_48 * item_24_1 - item_4c_2 * item_20_1;
            float item_10_1 = item_38;
            float item_34_4 = -((item_48 * item_28 - item_50 * item_20_1));
            float item_30_4 = item_4c_2 * item_28 - item_50 * item_24_1;
            long double fpu_val_7_56 = item_50;
            long double f10_1 = 0.0f;
            fpu_val_7_56 - f10_1;

            if (!(*(&((fpu_val_7_56 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_56, f10_1) ? 1 : 0) << 0xa
                | (fpu_val_7_56 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_50130f:
                long double fpu_val_7_59 = item_50;
                long double fpu_val_6_39 = item_4c_2;
                long double fpu_val_5_9 = item_48;
                long double fpu_val_7_61 = 1.0
                    / sqrtl(fpu_val_5_9 * fpu_val_5_9 + fpu_val_6_39 * fpu_val_6_39 + fpu_val_7_59 * fpu_val_7_59);
                float item_1c_2 = item_50 * fpu_val_7_61;
                float item_18_2 = item_4c_2 * fpu_val_7_61;
                float item_14_2 = item_48 * fpu_val_7_61;
            }
            else
            {
                long double fpu_val_7_57 = item_4c_2;
                long double f12_1 = 0.0f;
                fpu_val_7_57 - f12_1;

                if (!(*(&((fpu_val_7_57 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_57, f12_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_57 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_50130f;

                long double fpu_val_7_58 = item_48;
                long double f14_1 = 0.0f;
                fpu_val_7_58 - f14_1;

                if (!(*(&((fpu_val_7_58 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_58, f14_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_58 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_50130f;
            }

            long double fpu_val_7_63 = item_38;
            long double f13_1 = 0.0f;
            fpu_val_7_63 - f13_1;

            if (!(*(&((fpu_val_7_63 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_63, f13_1) ? 1 : 0) << 0xa
                | (fpu_val_7_63 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_50138c:
                long double fpu_val_7_66 = item_30_4;
                long double fpu_val_6_47 = item_34_4;
                long double fpu_val_5_11 = item_38;
                long double fpu_val_7_68 = 1.0
                    / sqrtl(fpu_val_5_11 * fpu_val_5_11 + fpu_val_6_47 * fpu_val_6_47 + fpu_val_7_66 * fpu_val_7_66);
                float item_10_2 = item_38 * fpu_val_7_68;
                float item_c_2 = item_34_4 * fpu_val_7_68;
                float item_8_2 = item_30_4 * fpu_val_7_68;
            }
            else
            {
                long double fpu_val_7_64 = item_34_4;
                long double f15_1 = 0.0f;
                fpu_val_7_64 - f15_1;

                if (!(*(&((fpu_val_7_64 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_64, f15_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_64 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_50138c;

                long double fpu_val_7_65 = item_30_4;
                long double f16_1 = 0.0f;
                fpu_val_7_65 - f16_1;

                if (!(*(&((fpu_val_7_65 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_65, f16_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_65 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_50138c;
            }

            memcpy(temp_2, &item_28, 0x28);
            item_28 = *temp_2;
            int32_t item_24_2 = i_10[0x47];
            float item_20_2 = i_10[0x4a];
            int32_t item_1c_3 = i_10[0x45];
            int32_t item_18_3 = i_10[0x48];
            int32_t item_14_3 = i_10[0x4b];
            int32_t item_10_3 = i_10[0x46];
            int32_t item_c_3 = i_10[0x49];
            int32_t item_8_3 = i_10[0x4c];
            i_10[0x4d] = 0;
            int32_t item_4_1 = 0;
            data_1 = item_64;
            memcpy(temp_2, &item_28, 0x28);
            dest_val = context;
            goto label_50145b;
        }

        entity_19 = 1;
    }
    else
    {
    label_50145b:

        if (*(dest_val + 0x4e) || *(i_10 + 0x1a1))
            entity_19 = 1;
        else
            entity_19 = 0;
    }

    *(i_10 + 0x1a2) = entity_19;
    int32_t entity_20 = i_10[0x66];
    int32_t temp_3 = dest_val[9];
    int32_t source_1 = entity_20;

    if (entity_20 >= temp_3)
        source_1 = temp_3;

    if (source_1 > 0x14)
        entity_20 = 0x14;
    else if (entity_20 >= temp_3)
        entity_20 = temp_3;

    i_10[0x66] = entity_20;

    if (dest_val[0x13] && data_1)
    {
        void* entity_22 = i_10[0x3c];

        if (entity_22)
        {
            item_38 = *(i_10 + 0xf8) - *(data_1 + 0xf8);
            float item_34_5 = *(i_10 + 0x100) - *(data_1 + 0x100);
            long double fpu_val_7_75 = *(i_10 + 0x108) - *(data_1 + 0x108);
            long double fpu_val_5_13 = item_34_5;
            long double fpu_val_4_18 = item_38;
            long double fpu_val_6_58 = (*(entity_22 + 0x100) - *(entity_22 + 0xfc))
                / sqrtl(fpu_val_4_18 * fpu_val_4_18 + fpu_val_5_13 * fpu_val_5_13 + fpu_val_7_75 * fpu_val_7_75);
            item_38 = item_38 * fpu_val_6_58;
            float item_34_6 = item_34_5 * fpu_val_6_58;
            *(i_10 + 0xf8) = item_38 + *(data_1 + 0xf8);
            *(i_10 + 0x100) = item_34_6 + *(data_1 + 0x100);
            *(i_10 + 0x108) = fpu_val_7_75 * fpu_val_6_58 + *(data_1 + 0x108);
        }
    }

    int16_t data_16;
    data_16 = i_10[0x68];
    bool flag_1 = !data_16;
    data_16 = *(dest_val + 0x4d);

    if (flag_1)
    {
        if (data_16)
        {
            long double fpu_val_7_79 = i_10[0x27];
            long double fpu_val_6_67 = i_10[0x28];
            fpu_val_6_67 - fpu_val_7_79;
            long double fpu_val_7_80;

            if (!(*(&((fpu_val_6_67 < fpu_val_7_79 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_67, fpu_val_7_79) ? 1 : 0) << 0xa
                    | (fpu_val_6_67 == fpu_val_7_79 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_80 = i_10[0x28];
            else
                fpu_val_7_80 = i_10[0x27];

            long double fpu_val_6_68 = i_10[0x26];
            fpu_val_6_68 - fpu_val_7_80;
            data_16 = (fpu_val_6_68 < fpu_val_7_80 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_68, fpu_val_7_80) ? 1 : 0) << 0xa
                | (fpu_val_6_68 == fpu_val_7_80 ? 1 : 0) << 0xe | 0x3800;
            long double fpu_val_7_82;

            if (*(&data_16 + 1) & 0x41)
            {
                long double fpu_val_7_83 = i_10[0x27];
                long double fpu_val_6_69 = i_10[0x28];
                fpu_val_6_69 - fpu_val_7_83;
                data_16 = (fpu_val_6_69 < fpu_val_7_83 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_69, fpu_val_7_83) ? 1 : 0) << 0xa
                    | (fpu_val_6_69 == fpu_val_7_83 ? 1 : 0) << 0xe;

                if (!(*(&data_16 + 1) & 1))
                    fpu_val_7_82 = i_10[0x28];
                else
                    fpu_val_7_82 = i_10[0x27];
            }
            else
                fpu_val_7_82 = i_10[0x26];

            long double fpu_val_7_85 = Render_ComputeNormals(i_10[0x1b]) * fpu_val_7_82;
            DynObj_LinkDynamicCube_8(g_a44344, i_10, &i_10[0x3e], fpu_val_7_85, 1);
            i_10[0x68] = 1;
        }
    }
    else if (!data_16)
    {
        DynObj_RegisterSymbol_9(i_10[0x1a], i_10);
        i_10[0x68] = 0;
    }

    data_16 = i_10[0x5e];
    float entity_24 = memcpy(&i_10[0x1c], &i_10[0x44], 0x28);

    if (data_16 != 0x2a && data_16)
    {
        void* data_20;
        data_20 = DynObj_Missing(&i_10[0x5e]);

        if (!data_20)
        {
            char* dest_4 = &i_10[0x5e];
            int32_t i = 0xffffffff;

            while (i)
            {
                bool flag_4_1 = 0 != *dest_4;
                dest_4 = &dest_4[1];
                i -= 1;

                if (!flag_4_1)
                    break;
            }

            int32_t entity_25 = ~i;
            int32_t source_4;
            int32_t dest_6;
            dest_6 = memcpy(&item_38, dest_4 - entity_25, entity_25 & 0xfffffffc);
            memcpy(dest_6, source_4, entity_25 & 3);
            float* item_7c_3 = &item_38;
            int32_t data_22;
            data_22 = Game_DataSymbolLoad(&i_10[0x5e], "*%s");
        }
        else
            i_10[0x1b] = data_20;
    }

    data_16 = i_10[0x68];

    if (data_16)
    {
        float item_7c_5 = Render_ComputeNormals(i_10[0x1b]);
        entity_24 = WorldObject_CommitTransform(i_10[0x67], i_10, &i_10[0x3e], item_7c_5);
    }

    int32_t* data_27;

    if (!item_64)
    {
        data_27 = i_10[0x3c];

        if (data_27)
        {
            entity_24 = Menu_FormatScreen_3(data_27);
            i_10[0x3c] = 0;
        }
    }
    else
    {
        float source_5 = i_10[0x3c];
        char entity_30 = *(i_10 + 0x1a2);

        if (source_5)
        {
            char entity_34;

            if (entity_30 || *(i_10 + 0x1a1))
                entity_34 = 1;
            else
                entity_34 = 0;

            int32_t item_80_6 = context[8];
            int32_t temp_15 = i_10[0x66];
            int32_t item_84_5 = temp_15;
            temp_15 = i_10[0x69];
            entity_24 = SoundSys_Update3DPosition_2(source_5, item_64 + 0xf8, &i_10[0x3e], item_64 + 0x110, &i_10[0x44],
                entity_34, temp_15, item_84_5, &i_10[0x62]);
        }
        else
        {
            char entity_31;

            if (entity_30 || *(i_10 + 0x1a1))
                entity_31 = 1;
            else
                entity_31 = 0;

            int32_t temp_10 = i_10[0x66];
            int32_t item_84_4 = temp_10;
            temp_10 = i_10[0x69];
            data_27 = SoundSys_PlaySoundSample_2(i_10, i_10[0x67], item_64 + 0xf8, &i_10[0x3e], item_64 + 0x110,
                &i_10[0x44], entity_31, temp_10, item_84_4, context[8], &i_10[0x62]);
            i_10[0x3c] = data_27;
        }
    }
    int32_t* i_5 = i_9;

    if (i_5)
    {
        entity_24 = i_5[0x3c];

        if (entity_24)
        {
            char data_30;

            if (*(i_5 + 0x1a2) || *(i_5 + 0x1a1))
                data_30 = 1;
            else
                data_30 = 0;

            int32_t item_80_7 = context[8];
            int32_t temp_20 = i_5[0x66];
            int32_t item_84_6 = temp_20;
            temp_20 = i_5[0x69];
            entity_24 = SoundSys_Update3DPosition_2(entity_24, &i_10[0x3e], &i_5[0x3e], &i_10[0x44], &i_5[0x44], data_30,
                temp_20, item_84_6, &i_5[0x62]);
        }
    }

    char data_34 = *(i_10 + 0x1a1);

    if (data_34)
    {
    label_501862:
        int32_t context_3 = 0;
        int32_t item_60_2 = 0;
        int32_t* i_8;
        int32_t* i_6;

        if (!data_34)
        {
            i_6 = i_5;
            i_8 = i_6;
        }
        else
        {
            i_6 = i_10;
            i_5 = i_10;
            i_8 = i_6;
        }

        entity_24 = g_a7a620;
        int32_t* i_7 = i_5;
        void* i_1 = QTask_AllocateEvent_2(i_6, entity_24);

        if (*(i_6 + 0x1a1))
        {
            while (i_1)
            {
                i_6 = i_1;
                i_1 = QTask_AllocateEvent_2(i_1, g_a7a620);
                context_3 += 1;

                if (!*(i_6 + 0x1a1))
                    break;
            }

            item_60_2 = context_3;
            i_8 = i_6;
        }

        i_1 = g_a7a620;
        int32_t* i_2;
        i_2 = QTask_TriggerEvent_2(i_5, i_1);

        if (i_2)
        {
            do
            {
                entity_24 = *(i_2 + 0x1a1);

                if (!entity_24)
                    break;

                entity_24 = g_a7a620;
                i_5 = i_2;
                i_2 = QTask_TriggerEvent_2(i_2, entity_24);
                context_3 += 1;
            } while (i_2);

            item_60_2 = context_3;
            i_7 = i_5;
        }

        if (i_6 != i_5)
        {
            int32_t* i_3 = QTask_TriggerEvent_2(i_8, g_a7a620);
            int32_t* i_11 = i_7;
            float item_34_7 = *(i_11 + 0x100) - *(i_8 + 0x100);
            float item_30_5 = *(i_11 + 0x108) - *(i_8 + 0x108);
            long double fpu_val_6_75 = 1.0f / item_60_2;
            float item_60_3 = fpu_val_6_75;
            item_38 = fpu_val_6_75 * (*(i_11 + 0xf8) - *(i_8 + 0xf8));
            float item_34_8 = item_60_3 * item_34_7;
            float item_30_6 = item_60_3 * item_30_5;
            float item_58;
            float item_54;
            Sys_ResolveSymbol_10(&item_38, &item_54, &item_58);
            Sys_ReadFileBlock_12(&item_28, 0.0f, item_54, item_58);
            int32_t* i_12 = i_8;
            memcpy(&item_50, &i_8[0x3e], 0x18);
            memcpy(&i_12[0x44], &item_28, 0x28);
            memcpy(&i_12[0x1c], &item_28, 0x28);

            if (i_12[0x3c])
            {
                i_12 = g_a7a620;
                void* data_37 = QTask_AllocateEvent_2(i_8, i_12);
                char dest_10;

                if (*(i_8 + 0x1a2) || *(i_8 + 0x1a1))
                    dest_10 = 1;
                else
                    dest_10 = 0;

                int32_t entity_47 = context[8];
                int32_t item_80_14 = entity_47;
                entity_47 = i_8[0x69];
                SoundSys_Update3DPosition_2(i_8[0x3c], data_37 + 0xf8, &i_8[0x3e], data_37 + 0x110, &i_8[0x44],
                    dest_10, entity_47, i_8[0x66], &i_8[0x62]);
            }

            for (; i_3 != i_7; i_3 = QTask_TriggerEvent_2(i_3, g_a7a620))
            {
                char data_40 = i_3[0x68];
                memcpy(&i_3[0x44], &item_28, 0x28);
                item_50 = item_38 + item_50;
                item_48 = item_34_8 + item_48;
                double item_40 = item_30_6 + item_40;
                memcpy(&i_3[0x3e], &item_50, 0x18);
                memcpy(&i_3[0x1c], &item_28, 0x28);

                if (data_40)
                {
                    float item_7c_18 = Render_ComputeNormals(i_3[0x1b]);
                    WorldObject_CommitTransform(i_3[0x67], i_3, &i_3[0x3e], item_7c_18);
                }

                int32_t data_42 = i_3[0x3c];

                if (data_42)
                {
                    data_42 = g_a7a620;
                    void* data_43 = QTask_AllocateEvent_2(i_3, data_42);
                    char source_8;

                    if (*(i_3 + 0x1a2) || *(i_3 + 0x1a1))
                        source_8 = 1;
                    else
                        source_8 = 0;

                    int32_t entity_55 = context[8];
                    int32_t item_80_17 = entity_55;
                    entity_55 = i_3[0x69];
                    SoundSys_Update3DPosition_2(i_3[0x3c], data_43 + 0xf8, &i_3[0x3e], data_43 + 0x110, &i_3[0x44],
                        source_8, entity_55, i_3[0x66], &i_3[0x62]);
                }
            }

            int32_t* i_13 = i_7;
            int32_t data_47 = i_13[0x3c];
            memcpy(&i_13[0x44], &item_28, 0x28);
            memcpy(&i_13[0x1c], &item_28, 0x28);

            if (data_47)
            {
                void* data_48 = QTask_AllocateEvent_2(i_13, g_a7a620);
                char source_9;

                if (*(i_13 + 0x1a2) || *(i_13 + 0x1a1))
                    source_9 = 1;
                else
                    source_9 = 0;

                int32_t entity_62 = context[8];
                int32_t item_80_20 = entity_62;
                entity_62 = i_13[0x69];
                SoundSys_Update3DPosition_2(i_13[0x3c], data_48 + 0xf8, &i_11[0x3e], data_48 + 0x110, &i_13[0x44],
                    source_9, entity_62, i_13[0x66], &i_13[0x62]);
            }

            int32_t* data_51;
            data_51 = QTask_TriggerEvent_2(i_13, g_a7a620);

            if (data_51)
            {
                float source_10 = data_51[0x3c];

                if (source_10)
                {
                    char entity_65;

                    if (*(data_51 + 0x1a2) || *(data_51 + 0x1a1))
                        entity_65 = 1;
                    else
                        entity_65 = 0;

                    int32_t item_80_22 = context[8];
                    int32_t temp_38 = data_51[0x66];
                    int32_t item_84_12 = temp_38;
                    temp_38 = data_51[0x69];
                    entity_24 = SoundSys_Update3DPosition_2(source_10, &i_11[0x3e], &data_51[0x3e], &i_13[0x44],
                        &data_51[0x44], entity_65, temp_38, item_84_12, &data_51[0x62]);
                }
            }
        }
    }
    else if (i_5)
    {
        entity_24 = *(i_5 + 0x1a1);

        if (entity_24)
            goto label_501862;
    }

    entity_24 = g_a7a620;
    int32_t* data_54 = QTask_DeleteTask_2(context, entity_24);
    context[0xa] = 0;

    if (data_54)
    {
        void* entity_67;

        for (int32_t* i_4 = QTask_TriggerEvent_2(data_54, g_a7a620); i_4;
            i_4 = QTask_TriggerEvent_2(i_4, entity_67))
        {
            entity_67 = i_4[0x3c];

            if (entity_67)
                context[0xa] = *(entity_67 + 0xf8) + context[0xa];

            entity_67 = g_a7a620;
        }
    }

    void* data_55 = i_10[0x3c];

    if (data_55)
    {
        *(data_55 + 0xa8) = context[0x14];
        *(data_55 + 0xac) = context[0x15];
        *(data_55 + 0xb0) = context[0x16];
        int32_t* data_58 = i_10[0x3c] + 0xb4;
        *data_58 = context[0x17];
        data_58[1] = context[0x18];
        data_58[2] = context[0x19];
    }

    return Physics_EvaluateAreaCriteria(i_10);
}

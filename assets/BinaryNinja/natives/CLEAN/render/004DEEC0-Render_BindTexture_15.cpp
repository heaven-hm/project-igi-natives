// IGI native provenance: Render_BindTexture_15 - 0x004DEEC0 - CFG score 92.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DEEC0-Render_BindTexture_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_BindTexture_15.h"
float Render_BindTexture_15(float context) {
    float result = *(context + 0x6c);

    if (result)
    {
        if (!*(context + 0x18c))
        {
            int32_t* data_18 = *(context + 0xe8);

            if (data_18)
                QTask_FindType(data_18);

            int32_t* data_19 = *(context + 0x148);

            if (data_19)
                QTask_FindType(data_19);

            *(context + 0xe8) = CarGun_Create(nullptr, context);
            float item_ac_1 = context;
            *(context + 0x148) = CarGun_Create(nullptr, context);
            Render_MagicObjectTypeSNotD(context);
            result = Render_ClipMesh_15(context, context + 0x190, context + 0x19c);
            *(context + 0x18c) = 1;
        }
        else
        {
            result = *(context + 0x148);
            float item_7c;

            if (result)
            {
                int32_t* i = *(result + 8);

                if (*i && i)
                {
                    do
                    {
                        float item_58 = *(context + 0x7c) * i[0x43] + i[0x44] * *(context + 0x88)
                            + *(context + 0x70) * i[0x42];
                        float item_54_1 = *(context + 0x80) * i[0x43] + *(context + 0x8c) * i[0x44]
                            + i[0x42] * *(context + 0x74);
                        float item_50_1 = *(context + 0x84) * i[0x43] + *(context + 0x78) * i[0x42]
                            + *(context + 0x90) * i[0x44];
                        float item_4c_1 = i[0x47] * *(context + 0x88) + *(context + 0x7c) * i[0x46]
                            + i[0x45] * *(context + 0x70);
                        float item_48_1 = *(context + 0x80) * i[0x46] + i[0x45] * *(context + 0x74)
                            + i[0x47] * *(context + 0x8c);
                        float item_44_1 = i[0x47] * *(context + 0x90) + i[0x46] * *(context + 0x84)
                            + i[0x45] * *(context + 0x78);
                        float item_40_1 = *(context + 0x7c) * i[0x49] + i[0x4a] * *(context + 0x88)
                            + *(context + 0x70) * i[0x48];
                        float item_3c_1 = *(context + 0x80) * i[0x49] + *(context + 0x8c) * i[0x4a]
                            + i[0x48] * *(context + 0x74);
                        result = i[0x4b] + *(context + 0x94) + 1;
                        float result_2 = result;
                        float item_38_1 = *(context + 0x84) * i[0x49] + *(context + 0x78) * i[0x48]
                            + *(context + 0x90) * i[0x4a];
                        memcpy(&i[0x1c], &item_58, 0x28);

                        if (result > 0x3e8)
                        {
                            long double fpu_val_7_37 = item_58;
                            long double f1_1 = 0.0f;
                            fpu_val_7_37 - f1_1;
                            float item_30 = item_58;
                            float item_28_1 = item_50_1;
                            float item_2c_1 = item_54_1;

                            if (!(*(&((fpu_val_7_37 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_37, f1_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_37 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                            label_4df0ed:
                                long double fpu_val_7_40 = item_50_1;
                                long double fpu_val_6_37 = item_54_1;
                                long double fpu_val_5_1 = item_58;
                                long double fpu_val_7_42 = 1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1
                                    + fpu_val_6_37 * fpu_val_6_37 + fpu_val_7_40 * fpu_val_7_40);
                                item_30 = item_58 * fpu_val_7_42;
                                item_2c_1 = item_2c_1 * fpu_val_7_42;
                                item_28_1 = item_28_1 * fpu_val_7_42;
                            }
                            else
                            {
                                long double fpu_val_7_38 = item_54_1;
                                long double f2_1 = 0.0f;
                                fpu_val_7_38 - f2_1;

                                if (!(*(&((fpu_val_7_38 < f2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_38, f2_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_38 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_4df0ed;

                                long double fpu_val_7_39 = item_50_1;
                                long double f4_1 = 0.0f;
                                fpu_val_7_39 - f4_1;

                                if (!(*(&((fpu_val_7_39 < f4_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_39, f4_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_39 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_4df0ed;
                            }

                            float item_88_1 = item_3c_1 * item_50_1 - item_38_1 * item_54_1;
                            float item_24_1 = item_88_1;
                            float item_84_1 = -((item_40_1 * item_50_1 - item_38_1 * item_58));
                            float item_80 = item_40_1 * item_54_1 - item_3c_1 * item_58;
                            float entity_4 = item_80;
                            item_7c = item_80 * item_2c_1 - item_84_1 * item_28_1;
                            float item_18_1 = item_7c;
                            float item_78_1 = -((item_80 * item_30 - item_88_1 * item_28_1));
                            float result_1 = item_84_1 * item_30 - item_88_1 * item_2c_1;
                            long double fpu_val_7_64 = item_88_1;
                            long double f3_1 = 0.0f;
                            fpu_val_7_64 - f3_1;
                            result = result_1;
                            float result_3 = result;
                            result = (fpu_val_7_64 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_64, f3_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_64 == f3_1 ? 1 : 0) << 0xe;

                            if (!(*(&result + 1) & 0x40))
                            {
                            label_4df22b:
                                long double fpu_val_7_67 = item_88_1;
                                long double fpu_val_6_57 = item_84_1;
                                long double fpu_val_5_3 = item_80;
                                long double fpu_val_7_69 = 1.0 / sqrtl(fpu_val_5_3 * fpu_val_5_3
                                    + fpu_val_6_57 * fpu_val_6_57 + fpu_val_7_67 * fpu_val_7_67);
                                float item_24_2 = item_88_1 * fpu_val_7_69;
                                float item_20_2 = item_84_1 * fpu_val_7_69;
                                float item_1c_2 = entity_4 * fpu_val_7_69;
                            }
                            else
                            {
                                long double fpu_val_7_65 = item_84_1;
                                long double f5_1 = 0.0f;
                                fpu_val_7_65 - f5_1;
                                result = (fpu_val_7_65 < f5_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_65, f5_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_65 == f5_1 ? 1 : 0) << 0xe;

                                if (!(*(&result + 1) & 0x40))
                                    goto label_4df22b;

                                long double fpu_val_7_66 = item_80;
                                long double f7_1 = 0.0f;
                                fpu_val_7_66 - f7_1;
                                result = (fpu_val_7_66 < f7_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_66, f7_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_66 == f7_1 ? 1 : 0) << 0xe;

                                if (!(*(&result + 1) & 0x40))
                                    goto label_4df22b;
                            }

                            long double fpu_val_7_71 = item_7c;
                            long double f6_1 = 0.0f;
                            fpu_val_7_71 - f6_1;
                            result = (fpu_val_7_71 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_71, f6_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_71 == f6_1 ? 1 : 0) << 0xe;

                            if (!(*(&result + 1) & 0x40))
                            {
                            label_4df2a8:
                                long double fpu_val_7_74 = result_1;
                                long double fpu_val_6_65 = item_78_1;
                                long double fpu_val_5_5 = item_7c;
                                long double fpu_val_7_76 = 1.0 / sqrtl(fpu_val_5_5 * fpu_val_5_5
                                    + fpu_val_6_65 * fpu_val_6_65 + fpu_val_7_74 * fpu_val_7_74);
                                float item_18_2 = item_7c * fpu_val_7_76;
                                float item_14_2 = item_78_1 * fpu_val_7_76;
                                float item_10_1 = result_3 * fpu_val_7_76;
                            }
                            else
                            {
                                long double fpu_val_7_72 = item_78_1;
                                long double f8_1 = 0.0f;
                                fpu_val_7_72 - f8_1;
                                result = (fpu_val_7_72 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_72, f8_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_72 == f8_1 ? 1 : 0) << 0xe;

                                if (!(*(&result + 1) & 0x40))
                                    goto label_4df2a8;

                                long double fpu_val_7_73 = result_1;
                                long double f9_1 = 0.0f;
                                fpu_val_7_73 - f9_1;
                                result = (fpu_val_7_73 < f9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_73, f9_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_73 == f9_1 ? 1 : 0) << 0xe;

                                if (!(*(&result + 1) & 0x40))
                                    goto label_4df2a8;
                            }

                            memcpy(&item_58, &item_30, 0x28);
                            int32_t item_34_1 = 0;
                        }

                        long double fpu_val_7_81 = *(context + 0x78) * *(i + 0x100)
                            + *(context + 0x70) * *(i + 0xf0) + *(context + 0x74) * *(i + 0xf8);
                        long double fpu_val_6_80 = *(context + 0x80) * *(i + 0xf8)
                            + *(context + 0x7c) * *(i + 0xf0) + *(context + 0x84) * *(i + 0x100);
                        double item_68_1 = fpu_val_6_80;
                        long double fpu_val_6_84 = *(context + 0x8c) * *(i + 0xf8)
                            + *(context + 0x88) * *(i + 0xf0) + *(context + 0x90) * *(i + 0x100);
                        double item_60_1 = fpu_val_6_84;
                        *(i + 0x20) = fpu_val_7_81 + *(context + 0x20);
                        *(i + 0x28) = item_68_1 + *(context + 0x28);
                        *(i + 0x30) = item_60_1 + *(context + 0x30);
                        i = *i;

                        if (!i)
                            break;

                        if (!*i)
                            break;
                    } while (i);
                }
            }

            float i_1 = context;

            if (context)
            {
                int32_t entity_6 = g_afa7e0;

                do
                {
                    item_7c = i_1 + 0x20;
                    float i_2 = i_1;
                    int32_t item_78_2 = i_1 + 0x70;
                    int32_t* j = *(*(i_1 + 0xe8) + 8);

                    if (*j && j)
                    {
                        do
                        {
                            int32_t* temp_3 = *j;
                            void* data_11;

                            if (!temp_3)
                                data_11 = nullptr;
                            else
                            {
                                int32_t data_8 = *temp_3;
                                int32_t data_9 = -(data_8);
                                data_11 = (data_9 - data_9) & temp_3;
                            }

                            *((entity_6 << 2) + &g_afa6e0) = data_11;
                            g_afa7e0 = entity_6 + 1;
                            uint32_t data_13 = MagicObj_GetEventId();
                            int32_t entity_8 = 0;
                            entity_8 = j[7];
                            int32_t data_17 = *(((data_13 * 0x180 + entity_8) << 2) + &g_a96ae0);

                            if (data_17)
                                data_17(j, &item_7c);

                            entity_6 = g_afa7e0 - 1;
                            g_afa7e0 = entity_6;
                            j = *((entity_6 << 2) + &g_afa6e0);
                        } while (j);
                    }

                    if (i_1 != context)
                    {
                        result = *i_1;

                        if (!result)
                            break;

                        if (!*result)
                            break;
                    }
                    else
                    {
                        result = *(i_1 + 0x148);

                        if (!result)
                            break;

                        result = *(result + 8);

                        if (!*result)
                            break;
                    }

                    i_1 = result;
                } while (i_1);
            }
        }
    }

    return result;
}

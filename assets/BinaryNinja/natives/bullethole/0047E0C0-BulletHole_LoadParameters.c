// IGI native provenance: BulletHole_LoadParameters - 0x0047E0C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047E0C0-BulletHole_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BulletHole_LoadParameters.h"
int32_t BulletHole_LoadParameters(void* context, int32_t* param_2)

{
    int32_t flagP = g_5c1118;
    void* dest_val = *param_2;
    int32_t data_1 = g_5c1110;
    int32_t kind = 0;
    float item_28 = 1.0f;
    int32_t item_24 = 0;
    int32_t item_20 = 0;
    int32_t item_1c = 0;
    int32_t item_18 = 0x3f800000;
    int32_t item_14 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    int32_t item_8 = 0x3f800000;
    int32_t item_4 = 0;
    int32_t data_15;

    if (data_1 > 0)
    {
        int32_t* temp_1 = g_5c110c;

        do
        {
            void* context_2 = *(*temp_1 * flagP + g_5c1108);

            if (*(context_2 + 0xe130) == context)
            {
                int32_t i = *(context_2 + 0x44e0);

                if (i >= 0)
                {
                    data_15 = i * 0xb;
                    float* entity_7 = context_2 + (data_15 << 3) + 0x28;

                    do
                    {
                        if (entity_7[0x10] != 0xffffffff)
                        {
                            long double fpu_val_7_2 = entity_7[3] - *(dest_val + 0x28);
                            long double fpu_val_6_2 = entity_7[2] - *(dest_val + 0x24);
                            long double fpu_val_5_2 = entity_7[1] - *(dest_val + 0x20);
                            float item_34_2 = entity_7[0x12] * 1.5f;
                            long double fpu_val_4_6 =
                                fpu_val_5_2 * fpu_val_5_2 + fpu_val_6_2 * fpu_val_6_2 + fpu_val_7_2 * fpu_val_7_2;
                            long double fpu_val_6_5 = item_34_2 * item_34_2;
                            fpu_val_6_5 - fpu_val_4_6;
                            data_15 = (fpu_val_6_5 < fpu_val_4_6 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_5, fpu_val_4_6) ? 1 : 0) << 0xa
                                | (fpu_val_6_5 == fpu_val_4_6 ? 1 : 0) << 0xe;

                            if (!(*(&data_15 + 1) & 0x41))
                            {
                                long double fpu_val_7_4 = *(dest_val + 0x2c);
                                long double f2_1 = 0.0f;
                                fpu_val_7_4 - f2_1;
                                data_15 = (fpu_val_7_4 < f2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe;

                                if (!(*(&data_15 + 1) & 0x40))
                                {
                                label_47e31f:
                                    long double fpu_val_7_7 = *(dest_val + 0x34);
                                    long double fpu_val_6_6 = *(dest_val + 0x30);
                                    long double fpu_val_5_4 = *(dest_val + 0x2c);
                                    long double fpu_val_7_9 = 1.0 / sqrtl(fpu_val_5_4 * fpu_val_5_4
                                        + fpu_val_6_6 * fpu_val_6_6 + fpu_val_7_7 * fpu_val_7_7);
                                    *(dest_val + 0x2c) = *(dest_val + 0x2c) * fpu_val_7_9;
                                    *(dest_val + 0x30) = *(dest_val + 0x30) * fpu_val_7_9;
                                    *(dest_val + 0x34) = *(dest_val + 0x34) * fpu_val_7_9;
                                }
                                else
                                {
                                    long double fpu_val_7_5 = *(dest_val + 0x30);
                                    long double f4_1 = 0.0f;
                                    fpu_val_7_5 - f4_1;
                                    data_15 = (fpu_val_7_5 < f4_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_5, f4_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_5 == f4_1 ? 1 : 0) << 0xe;

                                    if (!(*(&data_15 + 1) & 0x40))
                                        goto label_47e31f;

                                    long double fpu_val_7_6 = *(dest_val + 0x34);
                                    long double f7_1 = 0.0f;
                                    fpu_val_7_6 - f7_1;
                                    data_15 = (fpu_val_7_6 < f7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_6, f7_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_6 == f7_1 ? 1 : 0) << 0xe;

                                    if (!(*(&data_15 + 1) & 0x40))
                                        goto label_47e31f;
                                }

                                long double fpu_val_7_11 = entity_7[-2];
                                long double f6_1 = 0.0f;
                                fpu_val_7_11 - f6_1;
                                data_15 = (fpu_val_7_11 < f6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_11, f6_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_11 == f6_1 ? 1 : 0) << 0xe;

                                if (!(*(&data_15 + 1) & 0x40))
                                {
                                label_47e38f:
                                    long double fpu_val_7_14 = *entity_7;
                                    long double fpu_val_6_14 = entity_7[-1];
                                    long double fpu_val_5_6 = entity_7[-2];
                                    long double fpu_val_7_16 = 1.0 / sqrtl(fpu_val_6_14 * fpu_val_6_14
                                        + fpu_val_7_14 * fpu_val_7_14 + fpu_val_5_6 * fpu_val_5_6);
                                    entity_7[-2] = entity_7[-2] * fpu_val_7_16;
                                    entity_7[-1] = entity_7[-1] * fpu_val_7_16;
                                    *entity_7 = *entity_7 * fpu_val_7_16;
                                }
                                else
                                {
                                    long double fpu_val_7_12 = entity_7[-1];
                                    long double f10_1 = 0.0f;
                                    fpu_val_7_12 - f10_1;
                                    data_15 = (fpu_val_7_12 < f10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_12, f10_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_12 == f10_1 ? 1 : 0) << 0xe;

                                    if (!(*(&data_15 + 1) & 0x40))
                                        goto label_47e38f;

                                    long double fpu_val_7_13 = *entity_7;
                                    long double f13_1 = 0.0f;
                                    fpu_val_7_13 - f13_1;
                                    data_15 = (fpu_val_7_13 < f13_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_13, f13_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_13 == f13_1 ? 1 : 0) << 0xe;

                                    if (!(*(&data_15 + 1) & 0x40))
                                        goto label_47e38f;
                                }

                                long double fpu_val_7_21 = *(dest_val + 0x2c) * entity_7[-2]
                                    + *(dest_val + 0x34) * *entity_7 + entity_7[-1] * *(dest_val + 0x30);
                                long double f12_1 = 0.899999976f;
                                fpu_val_7_21 - f12_1;
                                data_15 = (fpu_val_7_21 < f12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_21, f12_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_21 == f12_1 ? 1 : 0) << 0xe;

                                if (!(*(&data_15 + 1) & 0x41))
                                    return data_15;
                            }
                        }

                        i -= 1;
                        entity_7 -= 0x58;
                    } while (i >= 0);
                }

                int32_t temp_9 = *(context_2 + 0x44e8) - 1;

                if (temp_9 > *(context_2 + 0x44e0))
                {
                    data_15 = temp_9 * 0xb;
                    float* entity_9 = context_2 + (data_15 << 3) + 0x28;

                    do
                    {
                        if (entity_9[0x10] != 0xffffffff)
                        {
                            long double fpu_val_7_23 = entity_9[3] - *(dest_val + 0x28);
                            long double fpu_val_6_27 = entity_9[2] - *(dest_val + 0x24);
                            long double fpu_val_5_9 = entity_9[1] - *(dest_val + 0x20);
                            float item_34_3 = entity_9[0x12] * 1.5f;
                            long double fpu_val_4_22 =
                                fpu_val_5_9 * fpu_val_5_9 + fpu_val_6_27 * fpu_val_6_27 + fpu_val_7_23 * fpu_val_7_23;
                            long double fpu_val_6_30 = item_34_3 * item_34_3;
                            fpu_val_6_30 - fpu_val_4_22;
                            data_15 = (fpu_val_6_30 < fpu_val_4_22 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_30, fpu_val_4_22) ? 1 : 0) << 0xa
                                | (fpu_val_6_30 == fpu_val_4_22 ? 1 : 0) << 0xe;

                            if (!(*(&data_15 + 1) & 0x41))
                            {
                                long double fpu_val_7_25 = *(dest_val + 0x2c);
                                long double f3_1 = 0.0f;
                                fpu_val_7_25 - f3_1;
                                data_15 = (fpu_val_7_25 < f3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_25, f3_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_25 == f3_1 ? 1 : 0) << 0xe;

                                if (!(*(&data_15 + 1) & 0x40))
                                {
                                label_47e4a1:
                                    long double fpu_val_7_28 = *(dest_val + 0x34);
                                    long double fpu_val_6_31 = *(dest_val + 0x30);
                                    long double fpu_val_5_11 = *(dest_val + 0x2c);
                                    long double fpu_val_7_30 = 1.0 / sqrtl(fpu_val_5_11 * fpu_val_5_11
                                        + fpu_val_6_31 * fpu_val_6_31 + fpu_val_7_28 * fpu_val_7_28);
                                    *(dest_val + 0x2c) = *(dest_val + 0x2c) * fpu_val_7_30;
                                    *(dest_val + 0x30) = *(dest_val + 0x30) * fpu_val_7_30;
                                    *(dest_val + 0x34) = *(dest_val + 0x34) * fpu_val_7_30;
                                }
                                else
                                {
                                    long double fpu_val_7_26 = *(dest_val + 0x30);
                                    long double f5_1 = 0.0f;
                                    fpu_val_7_26 - f5_1;
                                    data_15 = (fpu_val_7_26 < f5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_26, f5_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_26 == f5_1 ? 1 : 0) << 0xe;

                                    if (!(*(&data_15 + 1) & 0x40))
                                        goto label_47e4a1;

                                    long double fpu_val_7_27 = *(dest_val + 0x34);
                                    long double f9_1 = 0.0f;
                                    fpu_val_7_27 - f9_1;
                                    data_15 = (fpu_val_7_27 < f9_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_27, f9_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_27 == f9_1 ? 1 : 0) << 0xe;

                                    if (!(*(&data_15 + 1) & 0x40))
                                        goto label_47e4a1;
                                }

                                long double fpu_val_7_32 = entity_9[-2];
                                long double f8_1 = 0.0f;
                                fpu_val_7_32 - f8_1;
                                data_15 = (fpu_val_7_32 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_32, f8_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_32 == f8_1 ? 1 : 0) << 0xe;

                                if (!(*(&data_15 + 1) & 0x40))
                                {
                                label_47e511:
                                    long double fpu_val_7_35 = *entity_9;
                                    long double fpu_val_6_39 = entity_9[-1];
                                    long double fpu_val_5_13 = entity_9[-2];
                                    long double fpu_val_7_41 = 1.0 / sqrtl(fpu_val_7_35 * fpu_val_7_35
                                        + fpu_val_5_13 * fpu_val_5_13 + fpu_val_6_39 * fpu_val_6_39);
                                    entity_9[-2] = entity_9[-2] * fpu_val_7_41;
                                    entity_9[-1] = entity_9[-1] * fpu_val_7_41;
                                    *entity_9 = *entity_9 * fpu_val_7_41;
                                }
                                else
                                {
                                    long double fpu_val_7_33 = entity_9[-1];
                                    long double f11_1 = 0.0f;
                                    fpu_val_7_33 - f11_1;
                                    data_15 = (fpu_val_7_33 < f11_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_33, f11_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_33 == f11_1 ? 1 : 0) << 0xe;

                                    if (!(*(&data_15 + 1) & 0x40))
                                        goto label_47e511;

                                    long double fpu_val_7_34 = *entity_9;
                                    long double f15_1 = 0.0f;
                                    fpu_val_7_34 - f15_1;
                                    data_15 = (fpu_val_7_34 < f15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_34, f15_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_34 == f15_1 ? 1 : 0) << 0xe;

                                    if (!(*(&data_15 + 1) & 0x40))
                                        goto label_47e511;
                                }

                                long double fpu_val_7_46 = *(dest_val + 0x34) * *entity_9
                                    + *(dest_val + 0x30) * entity_9[-1] + entity_9[-2] * *(dest_val + 0x2c);
                                long double f14_1 = 0.899999976f;
                                fpu_val_7_46 - f14_1;
                                data_15 = (fpu_val_7_46 < f14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_46, f14_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_46 == f14_1 ? 1 : 0) << 0xe;

                                if (!(*(&data_15 + 1) & 0x41))
                                    return data_15;
                            }
                        }

                        data_15 = *(context_2 + 0x44e0);
                        temp_9 -= 1;
                        entity_9 -= 0x58;
                    } while (temp_9 > data_15);
                }

                int32_t data_17 = *(context_2 + 0x44e8);
                int32_t* item_34_4;

                if (data_17 != 0xc8)
                {
                    *(context_2 + 0x44e0) = data_17;
                    *(context_2 + 0x44e8) = data_17 + 1;
                    item_34_4 = context_2 + data_17 * 0x58 + 0x20;
                }
                else
                {
                    int32_t data_18 = *(context_2 + 0x44e4);
                    *(context_2 + 0x44e0) = data_18;
                    int32_t data_19 = data_18 + 1;
                    *(context_2 + 0x44e4) = data_19;
                    item_34_4 = context_2 + data_18 * 0x58 + 0x20;

                    if (data_19 >= 0xc8)
                        data_19 -= 0xc8;

                    *(context_2 + 0x44e4) = data_19;
                    int32_t* i_2 = *(context_2 + data_18 * 0x58 + 0x74);

                    if (i_2)
                    {
                        int32_t source_6 = g_5c1128;
                        int32_t flagP1 = g_5c1134;
                        int32_t* i_1;

                        do
                        {
                            int32_t entity_12 = *(i_2 + flagP1);
                            i_1 = i_2[0xf];
                            source_6 -= 1;
                            g_5c1128 = source_6;

                            if (entity_12 != source_6)
                            {
                                int32_t temp_11 = g_5c1124;
                                int32_t* data_22 =
                                    *(temp_11 + (source_6 << 2)) * g_5c1130 + g_5c1120;
                                int32_t source_8 = *(data_22 + flagP1);
                                int32_t flagP2 = *(temp_11 + (entity_12 << 2));
                                *(temp_11 + (entity_12 << 2)) = *(temp_11 + (source_8 << 2));
                                *(g_5c1124 + (source_8 << 2)) = flagP2;
                                *(data_22 + g_5c1134) = entity_12;
                                source_6 = g_5c1128;
                                flagP1 = g_5c1134;
                            }

                            i_2 = i_1;
                        } while (i_1);
                    }
                }

                Weapon_UpdateZoom_8(context + 0x20, &item_28, context_2, item_34_4, dest_val, 0, param_2[2], param_2[3]);
                int32_t data_28 = Timer_Now();
                *(context_2 + 0xe144) = data_28;
                return data_28;
            }

            kind += 1;
            temp_1 = &temp_1[1];
        } while (kind < data_1);
    }

    if (data_1 == g_5c1114)
    {
        int32_t* context_3 = nullptr;
        int32_t temp_2 = 0xffffffff;

        if (data_1 > 0)
        {
            int32_t* source_4 = g_5c110c;
            int32_t item_34_1 = data_1;
            bool flag_1_1;

            do
            {
                int32_t* data_3 = *(flagP * *source_4 + g_5c1108);
                int32_t entity_2 = data_3[0x3851];

                if (entity_2 <= temp_2)
                {
                    context_3 = data_3;
                    temp_2 = entity_2;
                }

                source_4 = &source_4[1];
                flag_1_1 = item_34_1 != 1;
                item_34_1 -= 1;
            } while (flag_1_1);
        }

        kind = QTask_FindType(context_3);
    }

    kind = g_5c1138;
    struct status_msg* data_6 = QTask_HandleInput(context, kind, 0);
    int32_t entity_3 = g_5c1110;
    int32_t* data_10 = *(g_5c110c + (entity_3 << 2)) * g_5c1118 + g_5c1108;
    *(data_10 + g_5c111c) = entity_3;
    g_5c1110 += 1;
    *(data_6 + 0xe134) = data_10;
    *data_10 = data_6;
    *(data_6 + 0xe130) = context;
    struct status_msg* data_13 = Display_RestoreDevice_18(Level_StartMission_4(), data_6, context + 0x20, &item_28,
        &data_6->head[0x113b], 0, 0, 0, 1, nullptr, 0);
    *(data_6 + 0xe12c) = data_13;
    Display_CheckCapabilities_18(data_13, 2);
    *(data_6 + 0x44e0) = 0;
    *(data_6 + 0x44e4) = 0;
    *(data_6 + 0x44e8) = 1;
    Weapon_UpdateZoom_8(context + 0x20, &item_28, data_6, &data_6->head[8], dest_val, 0, param_2[2], param_2[3]);
    data_15 = Timer_Now();
    *(data_6 + 0xe144) = data_15;
    return data_15;
}

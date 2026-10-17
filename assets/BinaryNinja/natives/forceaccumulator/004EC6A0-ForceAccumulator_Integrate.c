// Original IGI.EXE function: ForceAccumulator_Integrate (VA 0x004EC6A0; static CFG gate PASS, CFG score 1.000).
#include "ForceAccumulator_Integrate.h"
int32_t ForceAccumulator_Integrate(void* context, float* param_2)

{
    int32_t entity_val = 0;
    int32_t result = 0;
    int32_t result_1 = 0;
    long double fpu_val_7_2 = param_2[4] + *param_2 + param_2[8];
    long double f1 = 0.0f;
    fpu_val_7_2 - f1;
    float item_88;
    float item_84;
    float item_80;
    float item_7c;
    float item_6c;

    if (*(&((fpu_val_7_2 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_8 = param_2[4];
        long double f2_1 = *param_2;
        fpu_val_7_8 - f2_1;
        item_6c = 1.40129846e-45.0f;
        int32_t item_68_1 = 2;
        int32_t item_64_1 = 0;

        if (!(*(&((fpu_val_7_8 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_8 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            entity_val = 1;

        long double fpu_val_7_9 = param_2[8];
        long double f3_1 = param_2[entity_val * 4];
        fpu_val_7_9 - f3_1;

        if (!(*(&((fpu_val_7_9 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_9 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            entity_val = 2;

        int32_t temp_1 = (&item_6c)[entity_val];
        int32_t dest_1 = (&item_6c)[temp_1];
        long double fpu_val_7_14 =
            sqrtl(param_2[entity_val * 4] - *((temp_1 << 4) + param_2) - *((dest_1 << 4) + param_2) + 1.0f);
        (&item_88)[entity_val] = fpu_val_7_14 * 0.5f;
        long double f4_1 = 0.0f;
        fpu_val_7_14 - f4_1;

        if (!(*(&((fpu_val_7_14 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_14, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_14 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            fpu_val_7_14 = 0.5f / fpu_val_7_14;

        int32_t data_9 = entity_val * 3;
        int32_t context_5 = dest_1 * 3;
        result = result_1;
        (&item_88)[temp_1] = (param_2[temp_1 * 3 + entity_val] + param_2[data_9 + temp_1]) * fpu_val_7_14;
        (&item_88)[dest_1] = (param_2[entity_val + context_5] + param_2[data_9 + dest_1]) * fpu_val_7_14;
        item_7c = -(((param_2[temp_1 * 3 + dest_1] - param_2[context_5 + temp_1]) * fpu_val_7_14));
    }
    else
    {
        long double fpu_val_7_4 = sqrtl(fpu_val_7_2 + 1.0f);
        item_7c = fpu_val_7_4 * 0.5f;
        long double fpu_val_7_5 = 0.5f / fpu_val_7_4;
        item_88 = -(((param_2[5] - param_2[7]) * fpu_val_7_5));
        item_84 = -(((param_2[6] - param_2[2]) * fpu_val_7_5));
        item_80 = -(((param_2[1] - param_2[3]) * fpu_val_7_5));
    }

    float i_2 = *(context + 0x5c);
    *(context + 0x60) = i_2;

    if (i_2 > 0)
    {
        long double fpu_val_7_16 = 0.0f;
        long double fpu_val_6_26 = 0.0f;
        float* temp_2 = *(context + 0x54);
        float item_68_2 = fpu_val_6_26;
        long double fpu_val_5_1 = 0.0f;
        float item_50_1 = 0.0f;
        float item_64_2 = fpu_val_5_1;
        long double fpu_val_4_1 = 0.0f;
        long double fpu_val_3_1 = 0.0f;
        float* entity_2 = &temp_2[4];
        float i_1 = i_2;
        float i;

        do
        {
            fpu_val_4_1 = fpu_val_4_1 + *temp_2;
            fpu_val_3_1 = fpu_val_3_1 + entity_2[-3];
            item_50_1 = item_50_1 + entity_2[-2];
            long double fpu_val_2_3 = entity_2[-1];
            long double f7_1 = 0.0f;
            fpu_val_2_3 - f7_1;

            if (!(*(&((fpu_val_2_3 < f7_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_2_3, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_2_3 == f7_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
            {
            label_4ec87d:
                long double fpu_val_2_6 = *temp_2;
                long double f9_1 = 0.0f;
                fpu_val_2_6 - f9_1;

                if (!(*(&((fpu_val_2_6 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_2_6, f9_1) ? 1 : 0) << 0xa
                    | (fpu_val_2_6 == f9_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                {
                label_4ec8dc:
                    fpu_val_7_16 = fpu_val_7_16 + entity_2[-2] * *entity_2 - entity_2[1] * entity_2[-3];
                    fpu_val_6_26 = fpu_val_6_26 + -((entity_2[-2] * entity_2[-1] - *temp_2 * entity_2[1]));
                    fpu_val_5_1 = fpu_val_5_1 + entity_2[-3] * entity_2[-1] - *temp_2 * *entity_2;
                }
                else
                {
                    long double fpu_val_2_7 = entity_2[-3];
                    long double f11_1 = 0.0f;
                    fpu_val_2_7 - f11_1;

                    if (!(*(&((fpu_val_2_7 < f11_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_2_7, f11_1) ? 1 : 0) << 0xa
                            | (fpu_val_2_7 == f11_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                        goto label_4ec8dc;

                    long double fpu_val_2_8 = entity_2[-2];
                    long double f14_1 = 0.0f;
                    fpu_val_2_8 - f14_1;

                    if (!(*(&((fpu_val_2_8 < f14_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_2_8, f14_1) ? 1 : 0) << 0xa
                            | (fpu_val_2_8 == f14_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                        goto label_4ec8dc;
                }
            }
            else
            {
                long double fpu_val_2_4 = *entity_2;
                long double f10_1 = 0.0f;
                fpu_val_2_4 - f10_1;

                if (!(*(&((fpu_val_2_4 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_2_4, f10_1) ? 1 : 0) << 0xa
                        | (fpu_val_2_4 == f10_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                    goto label_4ec87d;

                long double fpu_val_2_5 = entity_2[1];
                long double f12_1 = 0.0f;
                fpu_val_2_5 - f12_1;

                if (!(*(&((fpu_val_2_5 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_2_5, f12_1) ? 1 : 0) << 0xa
                        | (fpu_val_2_5 == f12_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                    goto label_4ec87d;
            }

            temp_2 = &temp_2[6];
            entity_2 = &entity_2[6];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        float item_54_1 = fpu_val_3_1;
        float item_58_1 = fpu_val_4_1;
        float item_64_3 = fpu_val_5_1;
        *(context + 0x3c) = item_58_1;
        float item_68_3 = fpu_val_6_26;
        long double fpu_val_6_27 = *(context + 4);
        *(context + 0x40) = item_54_1;
        *(context + 0x44) = item_50_1;
        float item_38_1 = fpu_val_6_27 * item_58_1;
        float item_34_2 = fpu_val_6_27 * item_54_1;
        long double fpu_val_6_28 = fpu_val_6_27 * item_50_1;
        float item_58_2 = fpu_val_6_28 * param_2[2] + item_34_2 * param_2[1] + item_38_1 * *param_2;
        float item_54_2 = fpu_val_6_28 * param_2[5] + item_38_1 * param_2[3] + item_34_2 * param_2[4];
        long double fpu_val_5_16 = item_34_2 * param_2[7] + item_38_1 * param_2[6];
        long double fpu_val_5_18 = fpu_val_6_28 * param_2[8];
        *(context + 0x5c) = 0;
        *(context + 0x18) = item_58_2 + *(context + 0x18);
        *(context + 0x1c) = item_54_2 + *(context + 0x1c);
        *(context + 0x20) = fpu_val_5_16 + fpu_val_5_18 + *(context + 0x20);
        *(context + 0x30) = fpu_val_7_16 + *(context + 0x30);
        *(context + 0x34) = item_68_3 + *(context + 0x34);
        *(context + 0x38) = item_64_3 + *(context + 0x38);
    }

    long double fpu_val_7_22 = *(context + 0x30);
    long double f5 = 0.0f;
    fpu_val_7_22 - f5;

    if (!(*(&((fpu_val_7_22 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_22, f5) ? 1 : 0) << 0xa
        | (fpu_val_7_22 == f5 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4eca05:
        float item_28;
        Sys_PushStack_12(&item_28, *(context + 0xc), *(context + 0x10), *(context + 0x14));
        float item_24;
        float item_20;
        item_6c = item_20 * *(context + 0x38) + item_24 * *(context + 0x34) + item_28 * *(context + 0x30);
        float item_14;
        long double fpu_val_7_30 = item_14 * *(context + 0x38);
        float item_18;
        long double fpu_val_6_37 = item_18 * *(context + 0x34);
        *(context + 0x48) = item_6c;
        float item_8;
        long double fpu_val_7_34 = item_8 * *(context + 0x38);
        float item_c;
        long double fpu_val_6_41 = item_c * *(context + 0x34);
        float item_1c;
        *(context + 0x4c) = fpu_val_7_30 + fpu_val_6_37 + item_1c * *(context + 0x30);
        float item_10;
        *(context + 0x50) = fpu_val_7_34 + fpu_val_6_41 + item_10 * *(context + 0x30);
        item_6c = *(context + 0x4c) * param_2[1] + *param_2 * *(context + 0x48) + *(context + 0x50) * param_2[2];
        float item_68_5 =
            param_2[3] * *(context + 0x48) + *(context + 0x50) * param_2[5] + *(context + 0x4c) * param_2[4];
        long double fpu_val_7_47 = param_2[7] * *(context + 0x4c) + *(context + 0x50) * param_2[8];
        long double fpu_val_6_55 = *(context + 0x48) * param_2[6];
        *(context + 0x48) = item_6c;
        *(context + 0x4c) = item_68_5;
        *(context + 0x50) = fpu_val_7_47 + fpu_val_6_55;
        long double fpu_val_7_50 = *(context + 0x48) * 0.5f;
        long double fpu_val_6_57 = *(context + 0x4c) * 0.5f;
        long double fpu_val_5_24 = *(context + 0x50) * 0.5f;
        float item_64_6 = fpu_val_5_24;
        float item_44_1 = (item_64_6 + fpu_val_7_50) * (item_84 + item_88);
        float item_48_1 = (item_7c - item_80) * fpu_val_6_57;
        long double fpu_val_6_59 = (item_80 + item_7c) * -(fpu_val_6_57);
        long double fpu_val_6_61 = fpu_val_6_59 + item_48_1 + item_44_1;
        float item_74_1 = ((item_64_6 - fpu_val_7_50) * (item_88 - item_84) + fpu_val_6_61) * 0.5f;
        float item_68_6 = item_74_1 + (item_80 + item_84) * -(fpu_val_7_50) - fpu_val_6_59;
        float item_64_7 = item_74_1 + (item_64_6 + fpu_val_6_57) * (item_7c - item_88) - item_48_1;
        float item_60_1 = item_74_1 + (fpu_val_5_24 - fpu_val_6_57) * (item_84 - item_80) - item_44_1;
        item_88 = (item_88 + item_7c) * fpu_val_7_50 + item_74_1 - fpu_val_6_61 + item_88;
        float item_84_1 = item_68_6 + item_84;
        float item_80_1 = item_64_7 + item_80;
        long double fpu_val_7_61 = item_60_1 + item_7c;
        long double fpu_val_6_82 = 1.0 / sqrtl(item_80_1 * item_80_1 + item_84_1 * item_84_1
            + item_88 * item_88 + fpu_val_7_61 * fpu_val_7_61);
        item_88 = item_88 * fpu_val_6_82;
        float item_84_2 = item_84_1 * fpu_val_6_82;
        float item_80_2 = item_80_1 * fpu_val_6_82;
        long double fpu_val_6_84 = fpu_val_7_61 * fpu_val_6_82;
        long double fpu_val_6_93 = 1.0 / sqrtl(item_80_2 * item_80_2 + item_84_2 * item_84_2
            + item_88 * item_88 + fpu_val_6_84 * fpu_val_6_84);
        item_88 = item_88 * fpu_val_6_93;
        float item_84_3 = item_84_2 * fpu_val_6_93;
        float item_80_3 = item_80_2 * fpu_val_6_93;
        long double fpu_val_6_95 = fpu_val_6_84 * fpu_val_6_93;
        long double fpu_val_6_99 = item_88 * item_88;
        param_2[9] = 0;
        result = 1;
        float item_2c_1 = fpu_val_6_99 + fpu_val_6_99;
        long double fpu_val_6_102 = item_84_3 * item_88;
        float item_44_2 = fpu_val_6_102 + fpu_val_6_102;
        long double fpu_val_6_105 = item_80_3 * item_88;
        float item_4c_2 = fpu_val_6_105 + fpu_val_6_105;
        long double fpu_val_6_108 = item_88 * fpu_val_6_95;
        float item_3c_2 = fpu_val_6_108 + fpu_val_6_108;
        long double fpu_val_6_111 = item_84_3 * item_84_3;
        float item_70_1 = fpu_val_6_111 + fpu_val_6_111;
        long double fpu_val_6_114 = item_80_3 * item_84_3;
        float item_40_2 = fpu_val_6_114 + fpu_val_6_114;
        long double fpu_val_6_117 = item_84_3 * fpu_val_6_95;
        float item_74_2 = fpu_val_6_117 + fpu_val_6_117;
        long double fpu_val_6_120 = item_80_3 * item_80_3;
        float item_48_2 = fpu_val_6_120 + fpu_val_6_120;
        long double fpu_val_7_66 = fpu_val_6_95 * item_80_3;
        long double fpu_val_7_67 = fpu_val_7_66 + fpu_val_7_66;
        *param_2 = 1.0f - item_70_1 - item_48_2;
        param_2[1] = item_44_2 - fpu_val_7_67;
        param_2[2] = item_74_2 + item_4c_2;
        param_2[3] = fpu_val_7_67 + item_44_2;
        long double fpu_val_7_70 = 1.0f - item_2c_1;
        param_2[4] = fpu_val_7_70 - item_48_2;
        param_2[5] = item_40_2 - item_3c_2;
        param_2[6] = item_4c_2 - item_74_2;
        param_2[7] = item_40_2 + item_3c_2;
        param_2[8] = fpu_val_7_70 - item_70_1;
    }
    else
    {
        long double fpu_val_7_23 = *(context + 0x34);
        long double f6_1 = 0.0f;
        fpu_val_7_23 - f6_1;

        if (!(*(&((fpu_val_7_23 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_23, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_7_23 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4eca05;

        long double fpu_val_7_24 = *(context + 0x38);
        long double f8_1 = 0.0f;
        fpu_val_7_24 - f8_1;

        if (!(*(&((fpu_val_7_24 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_24, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_7_24 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4eca05;
    }

    SoundSys_InitSoundSys_17(context);
    return result;
}

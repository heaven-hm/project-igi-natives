// IGI native provenance: SplineObj_Setup - 0x00502740 - CFG score 92.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 00502740-SplineObj_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SplineObj_Setup.h"
int32_t SplineObj_Setup(void* context, char* param_2)

{
    char* source_val = param_2;
    int32_t temp_val;
    void* dest_val;

    if (!source_val || !*source_val)
        dest_val = context;
    else
    {
        dest_val = context;
        *(dest_val + 0x38) = *(dest_val + 0x2c);
        temp_val = *(dest_val + 0x30);
        *(dest_val + 0x3c) = temp_val;
        *(dest_val + 0x40) = *(dest_val + 0x34);
        *(dest_val + 0x48) = *(dest_val + 0x44);
    }

    long double fpu7 = *(dest_val + 0x44);
    float item_90 = fpu7;
    long double f1 = *(dest_val + 0x48);
    fpu7 - f1;
    float item_8c;
    float item_88;
    float item_84;
    float item_80;
    float item_7c;
    float item_78;
    float item_74;
    float item_70;
    float item_6c;

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        temp_val = g_a7a620;
        int32_t* data_3;
        int32_t entity_3;
        data_3 = QTask_DeleteTask_2(dest_val, temp_val);
        int32_t* context_1 = data_3;

        if (context_1)
        {
            int32_t item_bc_2 = entity_3;
            double* source_1 = &context_1[0x3e];
            double* item_90_1 = source_1;
            float item_64;
            Sys_DispatchOpcode_12(&item_64, *(dest_val + 0x44) - *(dest_val + 0x48));

            while (true)
            {
                long double fpu_val_7_4 = *(context_1 + 0xf8) - *source_1;
                long double fpu_val_6_2 = *(context_1 + 0x100) - source_1[1];
                long double fpu_val_5_2 = *(context_1 + 0x108) - source_1[2];
                float item_58;
                float item_54;
                float item_50;
                float item_10_1 = item_50 * fpu_val_5_2 + item_54 * fpu_val_6_2 + item_58 * fpu_val_7_4;
                float item_60;
                float item_5c;
                *(context_1 + 0xf8) =
                    item_5c * fpu_val_5_2 + item_60 * fpu_val_6_2 + item_64 * fpu_val_7_4 + *source_1;
                *(context_1 + 0x100) = item_10_1 + source_1[1];
                float item_4c;
                float item_48;
                float item_44;
                *(context_1 + 0x108) =
                    item_44 * fpu_val_5_2 + item_48 * fpu_val_6_2 + item_4c * fpu_val_7_4 + source_1[2];
                float item_3c = item_64 * context_1[0x44] + item_4c * context_1[0x46] + item_58 * context_1[0x45];
                float item_38_1 = item_60 * context_1[0x44] + item_48 * context_1[0x46] + item_54 * context_1[0x45];
                float item_34_1 = item_5c * context_1[0x44] + item_44 * context_1[0x46] + item_50 * context_1[0x45];
                int32_t item_40;
                float data_4 = context_1[0x4d] + item_40 + 1;
                float item_18_1 = data_4;
                float item_30_1 = item_64 * context_1[0x47] + item_4c * context_1[0x49] + item_58 * context_1[0x48];
                float item_2c_1 = item_60 * context_1[0x47] + item_48 * context_1[0x49] + item_54 * context_1[0x48];
                float item_28_1 = item_5c * context_1[0x47] + item_44 * context_1[0x49] + item_50 * context_1[0x48];
                float item_24_1 = item_4c * context_1[0x4c] + item_58 * context_1[0x4b] + item_64 * context_1[0x4a];
                float item_20_1 = item_48 * context_1[0x4c] + item_54 * context_1[0x4b] + item_60 * context_1[0x4a];
                float item_1c_1 = item_44 * context_1[0x4c] + item_50 * context_1[0x4b] + item_5c * context_1[0x4a];
                memcpy(&context_1[0x44], &item_3c, 0x28);

                if (data_4 > 0x3e8)
                {
                    long double fpu_val_7_43 = item_3c;
                    long double f5_1 = 0.0f;
                    fpu_val_7_43 - f5_1;
                    item_8c = item_3c;
                    item_88 = item_38_1;
                    item_84 = item_34_1;

                    if (!(*(&((fpu_val_7_43 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_43, f5_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_43 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_502a58:
                        long double fpu_val_7_46 = item_34_1;
                        long double fpu_val_6_44 = item_38_1;
                        long double fpu_val_5_4 = item_3c;
                        long double fpu_val_7_48 = 1.0 / sqrtl(fpu_val_5_4 * fpu_val_5_4
                            + fpu_val_6_44 * fpu_val_6_44 + fpu_val_7_46 * fpu_val_7_46);
                        item_8c = item_3c * fpu_val_7_48;
                        item_88 = item_88 * fpu_val_7_48;
                        item_84 = item_84 * fpu_val_7_48;
                    }
                    else
                    {
                        long double fpu_val_7_44 = item_38_1;
                        long double f6_1 = 0.0f;
                        fpu_val_7_44 - f6_1;

                        if (!(*(&((fpu_val_7_44 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_44, f6_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_44 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_502a58;

                        long double fpu_val_7_45 = item_34_1;
                        long double f8_1 = 0.0f;
                        fpu_val_7_45 - f8_1;

                        if (!(*(&((fpu_val_7_45 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_45, f8_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_45 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_502a58;
                    }

                    float item_9c_1 = item_20_1 * item_34_1 - item_1c_1 * item_38_1;
                    item_80 = item_9c_1;
                    float item_98_1 = -((item_24_1 * item_34_1 - item_1c_1 * item_3c));
                    item_7c = item_98_1;
                    float item_94_1 = item_24_1 * item_38_1 - item_20_1 * item_3c;
                    item_78 = item_94_1;
                    float item_a8_1 = item_94_1 * item_88 - item_98_1 * item_84;
                    data_4 = item_a8_1;
                    item_74 = data_4;
                    float item_a4_1 = -((item_94_1 * item_8c - item_9c_1 * item_84));
                    item_70 = item_a4_1;
                    float item_a0_1 = item_98_1 * item_8c - item_9c_1 * item_88;
                    long double fpu_val_7_70 = item_9c_1;
                    long double f7_1 = 0.0f;
                    fpu_val_7_70 - f7_1;
                    item_6c = item_a0_1;
                    data_4 = (fpu_val_7_70 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_70, f7_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_70 == f7_1 ? 1 : 0) << 0xe;

                    if (!(*(&data_4 + 1) & 0x40))
                    {
                    label_502bb1:
                        long double fpu_val_7_73 = item_9c_1;
                        long double fpu_val_6_64 = item_98_1;
                        long double fpu_val_5_6 = item_94_1;
                        long double fpu_val_7_75 = 1.0 / sqrtl(fpu_val_5_6 * fpu_val_5_6
                            + fpu_val_6_64 * fpu_val_6_64 + fpu_val_7_73 * fpu_val_7_73);
                        item_80 = item_9c_1 * fpu_val_7_75;
                        item_7c = item_7c * fpu_val_7_75;
                        item_78 = item_78 * fpu_val_7_75;
                    }
                    else
                    {
                        long double fpu_val_7_71 = item_98_1;
                        long double f9_1 = 0.0f;
                        fpu_val_7_71 - f9_1;
                        data_4 = (fpu_val_7_71 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_71, f9_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_71 == f9_1 ? 1 : 0) << 0xe;

                        if (!(*(&data_4 + 1) & 0x40))
                            goto label_502bb1;

                        long double fpu_val_7_72 = item_94_1;
                        long double f12_1 = 0.0f;
                        fpu_val_7_72 - f12_1;
                        data_4 = (fpu_val_7_72 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_72, f12_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_72 == f12_1 ? 1 : 0) << 0xe;

                        if (!(*(&data_4 + 1) & 0x40))
                            goto label_502bb1;
                    }

                    long double fpu_val_7_77 = item_a8_1;
                    long double f11_1 = 0.0f;
                    fpu_val_7_77 - f11_1;
                    data_4 = (fpu_val_7_77 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_77, f11_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_77 == f11_1 ? 1 : 0) << 0xe;

                    if (!(*(&data_4 + 1) & 0x40))
                    {
                    label_502c2e:
                        long double fpu_val_7_80 = item_a0_1;
                        long double fpu_val_6_72 = item_a4_1;
                        long double fpu_val_5_8 = item_a8_1;
                        long double fpu_val_7_86 = 1.0 / sqrtl(fpu_val_7_80 * fpu_val_7_80
                            + fpu_val_5_8 * fpu_val_5_8 + fpu_val_6_72 * fpu_val_6_72);
                        item_74 = item_a8_1 * fpu_val_7_86;
                        item_70 = item_70 * fpu_val_7_86;
                        item_6c = item_6c * fpu_val_7_86;
                    }
                    else
                    {
                        long double fpu_val_7_78 = item_a4_1;
                        long double f13_1 = 0.0f;
                        fpu_val_7_78 - f13_1;
                        data_4 = (fpu_val_7_78 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_78, f13_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_78 == f13_1 ? 1 : 0) << 0xe;

                        if (!(*(&data_4 + 1) & 0x40))
                            goto label_502c2e;

                        long double fpu_val_7_79 = item_a0_1;
                        long double f14_1 = 0.0f;
                        fpu_val_7_79 - f14_1;
                        data_4 = (fpu_val_7_79 < f14_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_79, f14_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_79 == f14_1 ? 1 : 0) << 0xe;

                        if (!(*(&data_4 + 1) & 0x40))
                            goto label_502c2e;
                    }

                    memcpy(&item_3c, &item_8c, 0x28);
                    int32_t item_18_2 = 0;
                }

                data_4 = g_a7a620;
                context_1 = QTask_TriggerEvent_2(context_1, data_4);

                if (!context_1)
                    break;

                source_1 = item_90_1;
            }

            dest_val = context;
            source_val = param_2;
        }

        long double fpu_val_7_88 = *(dest_val + 0x44);
        item_90 = fpu_val_7_88;
        *(dest_val + 0x48) = fpu_val_7_88;
    }

    long double fpu_val_7_89 = *(dest_val + 0x2c);
    long double f2 = *(dest_val + 0x38);
    fpu_val_7_89 - f2;

    if (!(*(&((fpu_val_7_89 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_89, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_89 == f2 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_502cf9:
        float item_a8_2 = *(dest_val + 0x2c) - *(dest_val + 0x38);
        float item_a4_2 = *(dest_val + 0x30) - *(dest_val + 0x3c);
        float item_a0_2 = *(dest_val + 0x34) - *(dest_val + 0x40);
        Sys_DispatchOpcode_12(&item_8c, item_90);
        float item_9c_2 = item_84 * item_a0_2 + item_88 * item_a4_2 + item_8c * item_a8_2;

        for (int32_t* i = QTask_DeleteTask_2(dest_val, g_a7a620); i;
            i = QTask_TriggerEvent_2(i, g_a7a620))
        {
            *(i + 0xf8) = item_9c_2 + *(i + 0xf8);
            *(i + 0x100) = item_78 * item_a0_2 + item_7c * item_a4_2 + item_80 * item_a8_2 + *(i + 0x100);
            *(i + 0x108) = item_6c * item_a0_2 + item_70 * item_a4_2 + item_74 * item_a8_2 + *(i + 0x108);
        }

        int32_t data_9 = *(dest_val + 0x30);
        int32_t entity_10 = *(dest_val + 0x34);
        *(dest_val + 0x38) = *(dest_val + 0x2c);
        *(dest_val + 0x3c) = data_9;
        *(dest_val + 0x40) = entity_10;
    }
    else
    {
        long double fpu_val_7_90 = *(dest_val + 0x30);
        long double f3_1 = *(dest_val + 0x3c);
        fpu_val_7_90 - f3_1;

        if (!(*(&((fpu_val_7_90 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_90, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_90 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_502cf9;

        long double fpu_val_7_91 = *(dest_val + 0x34);
        long double f4_1 = *(dest_val + 0x40);
        fpu_val_7_91 - f4_1;

        if (!(*(&((fpu_val_7_91 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_91, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_91 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_502cf9;
    }

    int32_t result = *(dest_val + 0x20);

    if (result < 0)
        *(dest_val + 0x20) = 0;

    if (!source_val || !*source_val)
    {
        int32_t* i_1 = *(dest_val + 8);

        if (*i_1 && i_1)
        {
            int32_t entity_11 = g_afa7e0;

            do
            {
                int32_t* temp_7 = *i_1;
                void* data_13;

                if (!temp_7)
                    data_13 = nullptr;
                else
                {
                    int32_t data_10 = *temp_7;
                    int32_t data_11 = -(data_10);
                    data_13 = (data_11 - data_11) & temp_7;
                }

                *((entity_11 << 2) + &g_afa6e0) = data_13;
                g_afa7e0 = entity_11 + 1;
                uint32_t data_15 = Script_ParseEnumReal32_8();
                int32_t data_16 = 0;
                data_16 = i_1[7];
                result = *(((data_15 * 0x180 + data_16) << 2) + &g_a96ae0);

                if (result)
                    result = result(i_1, source_val);

                entity_11 = g_afa7e0 - 1;
                g_afa7e0 = entity_11;
                i_1 = *((entity_11 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}

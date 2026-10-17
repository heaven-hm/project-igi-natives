// IGI native provenance: Menu_UpdateLanguage_20 - 0x00428D00 - CFG score 93.8% (PASS; structural only); runtime behavior not verified.
// Evidence: 00428D00-Menu_UpdateLanguage_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_UpdateLanguage_20.h"
void* Menu_UpdateLanguage_20(float context)

{
    float context_val = context;
    long double fpu7 = *(context_val + 0x720);
    long double f0 = 0.699999988f;
    fpu7 - f0;
    void* flagP = *(*(context_val + 0x1b4) + 0x2d4);
    float item_68;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
        item_68 = *(flagP + 0x20);
    else
        item_68 = *(flagP + 0x24);

    float data_2 = *(context_val + 0x730);
    long double fpu_val_7_1 = *(context_val + 0x720);
    long double f1 = data_2;
    fpu_val_7_1 - f1;

    if (!(*(&((fpu_val_7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double f2_1 = data_2;
        fpu_val_7_1 - f2_1;

        if (!(*(&((fpu_val_7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            fpu_val_7_1 = fpu_val_7_1 - item_68;
            long double f5_1 = data_2;
            fpu_val_7_1 - f5_1;

            if (*(&((fpu_val_7_1 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                fpu_val_7_1 = data_2;
        }
    }
    else
    {
        fpu_val_7_1 = fpu_val_7_1 + item_68;
        long double f3_1 = data_2;
        fpu_val_7_1 - f3_1;

        if (!(*(&((fpu_val_7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            fpu_val_7_1 = data_2;
    }

    long double f4 = 0.00100000005f;
    fpu_val_7_1 - f4;

    if (*(&((fpu_val_7_1 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f4) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        fpu_val_7_1 = 0.0f;

    float entity_2 = *(flagP + 8);
    float temp_2 = *(flagP + 0x10);
    float data_4 = *(flagP + 0x18);
    *(context_val + 0x720) = fpu_val_7_1;
    long double fpu_val_7_7 = (1.0f - entity_2) * *(context_val + 0x734) + entity_2 * *(context_val + 0x724);
    *(context_val + 0x724) = fpu_val_7_7;
    long double fpu_val_6_5 = (1.0f - temp_2) * *(context_val + 0x738) + temp_2 * *(context_val + 0x728);
    *(context_val + 0x728) = fpu_val_6_5;
    long double fpu_val_5_5 = (1.0f - data_4) * *(context_val + 0x73c) + data_4 * *(context_val + 0x72c);
    context = fpu_val_5_5;
    *(context_val + 0x72c) = fpu_val_5_5;
    long double f6 = 0.0f;
    fpu_val_7_7 - f6;
    float item_50;
    float item_4c;
    float item_48;
    float item_44;
    float item_40;
    float item_3c;
    float item_38;
    float item_34;
    float item_30;
    int32_t item_2c;
    float item_28;

    if (!(*(&((fpu_val_7_7 < f6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f6) ? 1 : 0) << 0xa
        | (fpu_val_7_7 == f6 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_428e60:
        float item_7c_1 = entity_2;
        context = context * *(flagP + 0x14) * 0.0174532924f;
        Sys_CloseFileStream_12(&item_50, fpu_val_7_7 * *(flagP + 4) * 0.0174532924f);
        item_28 = item_38 * *(context_val + 0x78) + item_50 * *(context_val + 0x70) + item_44 * *(context_val + 0x74);
        float item_24_1 = item_34 * *(context_val + 0x78) + item_4c * *(context_val + 0x70) + item_40 * *(context_val + 0x74);
        float item_20_1 = item_30 * *(context_val + 0x78) + item_48 * *(context_val + 0x70) + item_3c * *(context_val + 0x74);
        float item_1c_1 = item_44 * *(context_val + 0x80) + item_38 * *(context_val + 0x84) + item_50 * *(context_val + 0x7c);
        float item_18_1 = item_40 * *(context_val + 0x80) + item_34 * *(context_val + 0x84) + item_4c * *(context_val + 0x7c);
        float item_14_1 = item_3c * *(context_val + 0x80) + item_30 * *(context_val + 0x84) + item_48 * *(context_val + 0x7c);
        float item_10_1 = item_38 * *(context_val + 0x90) + item_50 * *(context_val + 0x88) + item_44 * *(context_val + 0x8c);
        int32_t item_4_1 = item_2c + *(context_val + 0x94) + 1;
        float item_c_1 = item_34 * *(context_val + 0x90) + item_4c * *(context_val + 0x88) + item_40 * *(context_val + 0x8c);
        float item_8_1 = item_30 * *(context_val + 0x90) + item_48 * *(context_val + 0x88) + item_3c * *(context_val + 0x8c);
        memcpy(context_val + 0x70, &item_28, 0x28);
        Sys_DispatchOpcode_12(&item_50, context);
        item_28 = item_38 * *(context_val + 0x78) + item_50 * *(context_val + 0x70) + item_44 * *(context_val + 0x74);
        float item_24_2 = item_34 * *(context_val + 0x78) + item_4c * *(context_val + 0x70) + item_40 * *(context_val + 0x74);
        float item_20_2 = item_30 * *(context_val + 0x78) + item_48 * *(context_val + 0x70) + item_3c * *(context_val + 0x74);
        float item_1c_2 = item_44 * *(context_val + 0x80) + item_38 * *(context_val + 0x84) + item_50 * *(context_val + 0x7c);
        int32_t item_4_2 = item_2c + *(context_val + 0x94) + 1;
        float item_18_2 = item_40 * *(context_val + 0x80) + item_34 * *(context_val + 0x84) + item_4c * *(context_val + 0x7c);
        float item_14_2 = item_3c * *(context_val + 0x80) + item_30 * *(context_val + 0x84) + item_48 * *(context_val + 0x7c);
        float item_10_2 = item_38 * *(context_val + 0x90) + item_50 * *(context_val + 0x88) + item_44 * *(context_val + 0x8c);
        float item_c_2 = item_34 * *(context_val + 0x90) + item_4c * *(context_val + 0x88) + item_40 * *(context_val + 0x8c);
        float item_8_2 = item_30 * *(context_val + 0x90) + item_48 * *(context_val + 0x88) + item_3c * *(context_val + 0x8c);
        memcpy(context_val + 0x70, &item_28, 0x28);
    }
    else
    {
        long double f7_1 = 0.0f;
        fpu_val_6_5 - f7_1;

        if (!(*(&((fpu_val_6_5 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_5, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_6_5 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_428e60;

        long double fpu_val_6_6 = context;
        long double f8_1 = 0.0f;
        fpu_val_6_6 - f8_1;

        if (!(*(&((fpu_val_6_6 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_6, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_6_6 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_428e60;
    }

    long double fpu_val_7_83 = *(context_val + 0x864);
    long double f9 = 0.0f;
    fpu_val_7_83 - f9;

    if (*(&((fpu_val_7_83 < f9 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_83, f9) ? 1 : 0) << 0xa
        | (fpu_val_7_83 == f9 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        Sys_ReadFileBlock_12(&item_50, (0.5f - Sys_AllocateMemory_14(0x57bc88)) * 0.100000001f,
            (0.699999988f - Sys_AllocateMemory_14(0x57bc88)) * 0.100000001f,
            (0.300000012f - Sys_AllocateMemory_14(0x57bc88)) * 0.100000001f);
        item_28 = item_44 * *(context_val + 0x74) + item_38 * *(context_val + 0x78) + item_50 * *(context_val + 0x70);
        float item_24_3 = item_40 * *(context_val + 0x74) + item_34 * *(context_val + 0x78) + item_4c * *(context_val + 0x70);
        float item_20_3 = item_3c * *(context_val + 0x74) + item_30 * *(context_val + 0x78) + item_48 * *(context_val + 0x70);
        float item_1c_3 = item_44 * *(context_val + 0x80) + item_38 * *(context_val + 0x84) + item_50 * *(context_val + 0x7c);
        float item_18_3 = item_40 * *(context_val + 0x80) + item_34 * *(context_val + 0x84) + item_4c * *(context_val + 0x7c);
        int32_t item_4_3 = *(context_val + 0x94) + item_2c + 1;
        float item_14_3 = item_3c * *(context_val + 0x80) + item_30 * *(context_val + 0x84) + item_48 * *(context_val + 0x7c);
        float item_10_3 = item_44 * *(context_val + 0x8c) + item_38 * *(context_val + 0x90) + item_50 * *(context_val + 0x88);
        float item_c_3 = item_40 * *(context_val + 0x8c) + item_34 * *(context_val + 0x90) + item_4c * *(context_val + 0x88);
        float item_8_3 = item_3c * *(context_val + 0x8c) + item_30 * *(context_val + 0x90) + item_48 * *(context_val + 0x88);
        memcpy(context_val + 0x70, &item_28, 0x28);
    }

    long double fpu_val_7_129 = *(context_val + 0x720);
    long double f10 = 0.0f;
    fpu_val_7_129 - f10;

    if (!(*(&((fpu_val_7_129 < f10 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_129, f10) ? 1 : 0) << 0xa
        | (fpu_val_7_129 == f10 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double fpu_val_7_130 = *(context_val + 0x864);
        long double f11_1 = 0.0f;
        fpu_val_7_130 - f11_1;

        if (!(*(&((fpu_val_7_130 < f11_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_130, f11_1) ? 1 : 0) << 0xa
            | (fpu_val_7_130 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double fpu_val_7_133 = *(flagP + 0x1c) * *(context_val + 0x720) * 44.6008873f;
            item_50 = 0.0f;
            int32_t item_48_1 = 0;
            int32_t item_44_1 = 0;
            int32_t item_40_1 = 0;
            int32_t item_3c_1 = 0;
            float item_4c_1 = fpu_val_7_133;
            ForceAccumulator_Add(context_val + 0xf0, &item_50);
        }
    }

    long double fpu_val_7_135 = *(context_val + 0x864) - *(flagP + 0x124);
    *(context_val + 0x864) = fpu_val_7_135;
    long double fpu_val_6_119 = 0.0f;
    fpu_val_6_119 - fpu_val_7_135;

    if (!(*(&((fpu_val_6_119 < fpu_val_7_135 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_6_119, fpu_val_7_135) ? 1 : 0) << 0xa
            | (fpu_val_6_119 == fpu_val_7_135 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        fpu_val_7_135 = 0.0f;

    *(context_val + 0x864) = fpu_val_7_135;

    if (!Script_ParseEnumReal32_29(context_val))
    {
        int32_t* data_12 = *(context_val + 0x858);
        float item_4c_2 = context_val;

        if (!data_12)
            int32_t item_48_3 = 0;
        else
            int32_t item_48_2 = *data_12;

        int32_t* data_14 = *(context_val + 0x85c);

        if (!data_14)
            int32_t item_44_3 = 0;
        else
            int32_t item_44_2 = *data_14;

        int32_t item_40_2 = 0x3f800000;

        if (*(flagP + 0x28))
        {
            float item_5c = *(context_val + 0x108);
            float entity_9 = *(context_val + 0x10c);
            item_5c = -(item_5c);
            float item_58_2 = -(entity_9);
            float item_54_2 = -(*(context_val + 0x110));
            SoundSys_SetMasterVolume_16(context_val + 0x748, *(flagP + 0x28), 0.000326999987f, context_val + 0xf0, context_val + 0x70,
                &item_5c);
        }

        int32_t data_18 = Level_StartMission_2();
        Script_FormatString_28(context_val, 44.6008873f, 0.949999988f, 0.920000017f, Level_StartMission_4(), data_18,
            &item_50);
    }

    void* result = *(context_val + 0xe8);

    if (result)
    {
        item_50 = context_val + 0x20;
        int32_t item_4c_3 = context_val + 0x70;
        float item_48_4 = context_val;
        int32_t* i = *(result + 8);

        if (*i && i)
        {
            int32_t entity_12 = g_afa7e0;

            do
            {
                int32_t* temp_12 = *i;
                void* data_23;

                if (!temp_12)
                    data_23 = nullptr;
                else
                {
                    int32_t data_20 = *temp_12;
                    int32_t data_21 = -(data_20);
                    data_23 = (data_21 - data_21) & temp_12;
                }

                *((entity_12 << 2) + &g_afa6e0) = data_23;
                g_afa7e0 = entity_12 + 1;
                uint32_t data_25 = MagicObj_GetEventId();
                int32_t entity_14 = 0;
                entity_14 = i[7];
                result = *(((data_25 * 0x180 + entity_14) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &item_50);

                entity_12 = g_afa7e0 - 1;
                g_afa7e0 = entity_12;
                i = *((entity_12 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}

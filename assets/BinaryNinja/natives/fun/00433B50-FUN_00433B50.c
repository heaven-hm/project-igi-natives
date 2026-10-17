// IGI native provenance: FUN_00433B50 - 0x00433B50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00433B50-FUN_00433B50.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FUN_00433B50.h"
void* FUN_00433B50(double* context)

{
    void* flagP = *(context + 0x1b4);
    void* dest_val = *(flagP + 0x2d4);
    long double fpu_val_7_2 = context[0x1f] / (*(dest_val + 0x1c) * 37.9259262f);
    long double f0 = 0.0f;
    fpu_val_7_2 - f0;

    if (!(*(&((fpu_val_7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double f1_1 = 1.0f;
        fpu_val_7_2 - f1_1;

        if (!(*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            fpu_val_7_2 = 1.0f;
    }
    else
        fpu_val_7_2 = 0.0f;

    int32_t i = 0;

    if (*(flagP + 0x148) > 0)
    {
        char* entity_1 = context + 0x1d4;

        do
        {
            *entity_1 = !*(context + 0x82d);
            i += 1;
            entity_1 = &entity_1[0x38];
        } while (i < *(flagP + 0x148));
    }

    long double fpu6 = context[0xe4];
    long double f2 = 0.800000012f;
    fpu6 - f2;
    float item_70;

    if (!(*(&((fpu6 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f2) ? 1 : 0) << 0xa
            | (fpu6 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        item_70 = *(dest_val + 0x20);
    else
        item_70 = *(dest_val + 0x24);

    long double fpu_val_6_1 = context[0xe4];
    long double fpu_val_5_1;
    long double f3_1;

    if (context[0x37])
    {
        fpu_val_5_1 = context[0xe6];
        f3_1 = 1.0f;
        fpu_val_5_1 - f3_1;
    }

    float item_74;

    if (!context[0x37] || !(*(&((fpu_val_5_1 < f3_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_5_1, f3_1) ? 1 : 0) << 0xa | (fpu_val_5_1 == f3_1 ? 1 : 0) << 0xe
            | 0x3000) + 1) & 1))
        item_74 = context[0xe6];
    else
        item_74 = context[0xe6] - 0.600000024f;

    long double f4 = item_74;
    fpu_val_6_1 - f4;

    if (!(*(&((fpu_val_6_1 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f4) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == f4 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
    {
        long double f5_1 = item_74;
        fpu_val_6_1 - f5_1;

        if (!(*(&((fpu_val_6_1 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f5_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
        {
            fpu_val_6_1 = fpu_val_6_1 - item_70;
            long double f8_1 = item_74;
            fpu_val_6_1 - f8_1;

            if (*(&((fpu_val_6_1 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f8_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_1 == f8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                fpu_val_6_1 = item_74;
        }
    }
    else
    {
        fpu_val_6_1 = fpu_val_6_1 + item_70;
        long double f6_1 = item_74;
        fpu_val_6_1 - f6_1;

        if (!(*(&((fpu_val_6_1 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
            fpu_val_6_1 = item_74;
    }

    long double f7 = 0.00100000005f;
    fpu_val_6_1 - f7;

    if (*(&((fpu_val_6_1 < f7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f7) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == f7 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        fpu_val_6_1 = 0.0f;

    float data_5 = *(dest_val + 8);
    float entity_3 = *(dest_val + 0x10);
    float temp_3 = *(dest_val + 0x18);
    context[0xe4] = fpu_val_6_1;
    long double fpu_val_7_6 = 0.995000005f - fpu_val_7_2 * 0.000829999975f;
    float item_70_2 = ((1.0f - data_5) * *(context + 0x734) + data_5 * *(context + 0x724)) * fpu_val_7_6;
    *(context + 0x724) = item_70_2;
    float item_74_2 = ((1.0f - entity_3) * context[0xe7] + entity_3 * context[0xe5]) * fpu_val_7_6;
    float entity_4 = item_74_2;
    context[0xe5] = entity_4;
    long double fpu_val_7_7 = fpu_val_7_6 * ((1.0f - temp_3) * *(context + 0x73c) + temp_3 * *(context + 0x72c));
    *(context + 0x72c) = fpu_val_7_7;
    long double fpu_val_6_18 = item_70_2;
    long double f9 = 0.0f;
    fpu_val_6_18 - f9;
    float item_68;
    float item_50;
    float item_28;
    float item_24;
    float item_20;
    float item_1c;
    float item_18;
    float item_14;
    float item_10;
    float item_c;
    float item_8;

    if (!(*(&((fpu_val_6_18 < f9 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_18, f9) ? 1 : 0) << 0xa
        | (fpu_val_6_18 == f9 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_433d6a:
        long double fpu_val_7_9;
        long double f12_1;

        if (context[0x37])
        {
            fpu_val_7_9 = context[0x1f];
            f12_1 = 10.0f;
            fpu_val_7_9 - f12_1;
        }

        if (!context[0x37] || !(*(&((fpu_val_7_9 < f12_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_9, f12_1) ? 1 : 0) << 0xa | (fpu_val_7_9 == f12_1 ? 1 : 0) << 0xe)
            + 1) & 1))
        {
            item_68 = item_70_2 * *(dest_val + 4) * 0.00872664619f;
            long double fpu_val_7_15 = item_74_2 * *(dest_val + 0xc) * 0.00872664619f;
            long double fpu_val_7_17 = -((fpu_val_7_15 + item_68));
            long double fpu_val_6_20 = *(dest_val + 4);
            fpu_val_7_17 - fpu_val_6_20;

            if (!(*(&((fpu_val_7_17 < fpu_val_6_20 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_17, fpu_val_6_20) ? 1 : 0) << 0xa
                    | (fpu_val_7_17 == fpu_val_6_20 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                fpu_val_7_17 = *(dest_val + 4);

            Sys_CloseFileStream_12(&item_50, fpu_val_7_17);
            long double fpu_val_7_20 = fpu_val_7_15 - item_68;
            long double fpu_val_6_21 = *(dest_val + 4);
            fpu_val_7_20 - fpu_val_6_21;

            if (!(*(&((fpu_val_7_20 < fpu_val_6_21 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_20, fpu_val_6_21) ? 1 : 0) << 0xa
                    | (fpu_val_7_20 == fpu_val_6_21 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                fpu_val_7_20 = *(dest_val + 4);

            item_68 = fpu_val_7_20;
            Sys_CloseFileStream_12(&item_28, item_68);
            float item_4c;
            float item_48;
            item_68 = item_50 * *(dest_val + 0x84) + item_48 * *(dest_val + 0x8c) + item_4c * *(dest_val + 0x88);
            float item_44;
            float item_40;
            float item_3c;
            float item_64_1 =
                item_3c * *(dest_val + 0x8c) + item_40 * *(dest_val + 0x88) + item_44 * *(dest_val + 0x84);
            float item_34;
            float item_30;
            long double fpu_val_7_32 = item_30 * *(dest_val + 0x8c) + item_34 * *(dest_val + 0x88);
            float item_38;
            long double fpu_val_6_33 = item_38 * *(dest_val + 0x84);
            context[0xf4] = item_68;
            *(context + 0x7a4) = item_64_1;
            long double fpu_val_7_34 = item_28;
            context[0xf5] = fpu_val_7_32 + fpu_val_6_33;
            item_68 = fpu_val_7_34 * *(dest_val + 0xa0) + item_20 * *(dest_val + 0xa8) + item_24 * *(dest_val + 0xa4);
            entity_4 = item_1c * *(dest_val + 0xa0) + item_14 * *(dest_val + 0xa8) + item_18 * *(dest_val + 0xa4);
            long double fpu_val_7_44 = item_10 * *(dest_val + 0xa0) + item_8 * *(dest_val + 0xa8);
            long double fpu_val_6_45 = item_c * *(dest_val + 0xa4);
            *(context + 0x7bc) = item_68;
            context[0xf8] = entity_4;
            *(context + 0x7c4) = fpu_val_7_44 + fpu_val_6_45;
        }
    }
    else
    {
        long double fpu_val_6_19 = item_74_2;
        long double f10_1 = 0.0f;
        fpu_val_6_19 - f10_1;

        if (!(*(&((fpu_val_6_19 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_19, f10_1) ? 1 : 0) << 0xa
                | (fpu_val_6_19 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_433d6a;

        long double f11_1 = 0.0f;
        fpu_val_7_7 - f11_1;

        if (!(*(&((fpu_val_7_7 < f11_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f11_1) ? 1 : 0) << 0xa
                | (fpu_val_7_7 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_433d6a;
    }

    int16_t data_16;
    data_16 = *(context + 0x744);

    if (!data_16)
    {
        *(context + 0x764) = *(dest_val + 0x48);
        *(context + 0x79c) = *(dest_val + 0x80);
        context[0xf7] = *(dest_val + 0x9c);
        entity_4 = *(dest_val + 0x64);
        context[0xf0] = entity_4;
    }
    else
    {
        *(context + 0x764) = *(dest_val + 0x48) * 3.0f;
        *(context + 0x79c) = *(dest_val + 0x64) * 0.375f;
        context[0xf7] = *(dest_val + 0x64) * 0.375f;
        context[0xf0] = *(dest_val + 0x64) * 0.75f;
    }

    data_16 = *(context + 0x82e);

    if (data_16)
    {
        int32_t item_44_1 = 0;
        int32_t item_40_1 = 0;
        int32_t item_3c_1 = 0;
        float item_4c_1 = *(flagP + 8) * 6489.4292f;
        item_50 = 0.0f;
        int32_t item_48_1 = 0;
        entity_4 = ForceAccumulator_Add(&context[0x1e], &item_50);
    }

    long double fpu_val_7_56 = context[0xe4];
    long double f13 = 0.0f;
    fpu_val_7_56 - f13;

    if (!(*(&((fpu_val_7_56 < f13 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_56, f13) ? 1 : 0) << 0xa
        | (fpu_val_7_56 == f13 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double fpu_val_7_58 = *(flagP + 8) * context[0xe4];
        int32_t data_18 = context[0x37];
        item_50 = 0.0f;
        float item_48_2 = 0.0f;
        float item_4c_2 = fpu_val_7_58 * 44.6008873f;

        if (!data_18)
        {
            float item_88_4 = entity_4;
            Sys_DispatchOpcode_12(&item_28, *(dest_val + 0x14) * *(context + 0x72c) * 0.0087266462599716512);
            item_68 = item_20 * item_48_2 + item_24 * item_4c_2 + item_28 * item_50;
            float item_4c_3 = item_14 * item_48_2 + item_18 * item_4c_2 + item_1c * item_50;
            long double fpu_val_6_57 = item_10 * item_50;
            item_50 = item_68;
            float item_48_3 = item_8 * item_48_2 + item_c * item_4c_2 + fpu_val_6_57;
        }

        int32_t item_44_2 = 0;
        int32_t item_40_2 = 0x47200000;
        int32_t item_3c_2 = 0;
        ForceAccumulator_Add(&context[0x1e], &item_50);
    }

    Vehicle_CheckFlightDynamics_3(context);

    if (!Script_ParseEnumReal32_29(context))
    {
        double* item_64_4 = context;

        if (*(dest_val + 0x28))
        {
            long double fpu_val_7_75;
            long double f15_1;

            if (context[0x37])
            {
                fpu_val_7_75 = context[0x1f];
                f15_1 = 1137.77783f;
                fpu_val_7_75 - f15_1;
            }

            if (!context[0x37] || !(*(&((fpu_val_7_75 < f15_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_75, f15_1) ? 1 : 0) << 0xa
                | (fpu_val_7_75 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                float item_5c = context[0x21];
                float entity_10 = *(context + 0x10c);
                item_5c = -(item_5c);
                float item_58_2 = -(entity_10);
                float item_54_2 = -(context[0x22]);
                SoundSys_SetMasterVolume_16(&context[0xe9], *(dest_val + 0x28), 0.000326999987f, &context[0x1e], &context[0xe],
                    &item_5c);
            }
        }

        Script_FormatString_28(context, 44.6008873f, 1.0f, 0.920000017f, Level_StartMission_4(), 0xc, &item_68);
    }

    void* data_27 = context[0x1d];

    if (data_27)
    {
        item_68 = &context[4];
        void* item_64_5 = &context[0xe];
        double* item_60_4 = context;
        int32_t* i_3 = *(data_27 + 8);

        if (*i_3)
        {
            int32_t data_37;

            for (int32_t* i_1 = i_3; i_1; i_1 = *((data_37 << 2) + &g_afa6e0))
            {
                int32_t* entity_13 = *i_1;
                void* data_31;

                if (!entity_13)
                    data_31 = nullptr;
                else
                {
                    int32_t data_28 = *entity_13;
                    int32_t data_29 = -(data_28);
                    data_31 = (data_29 - data_29) & entity_13;
                }

                int32_t entity_14 = g_afa7e0;
                *((entity_14 << 2) + &g_afa6e0) = data_31;
                g_afa7e0 = entity_14 + 1;
                uint32_t data_33 = MagicObj_GetEventId();
                int32_t data_34 = 0;
                data_34 = i_1[7];
                int32_t data_35 = *(((data_33 * 0x180 + data_34) << 2) + &g_a96ae0);

                if (data_35)
                    data_35(i_1, &item_68);

                data_37 = g_afa7e0 - 1;
                g_afa7e0 = data_37;
            }
        }
    }

    void* result = context[0x105];

    if (result)
    {
        int32_t temp_16 = context[0xe4];
        item_68 = 1.40129846e-45.0f;
        *(result + 4) = temp_16;
        long double fpu_val_7_82 = context[0xe4];
        long double f14_1 = 0.00999999978f;
        fpu_val_7_82 - f14_1;

        if (*(&((fpu_val_7_82 < f14_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_82, f14_1) ? 1 : 0) << 0xa
                | (fpu_val_7_82 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            item_68 = 0.0f;

        result = context[0x105];
        *(result + 8) = item_68;
    }

    int32_t* i_2 = context[1];
    item_68 = &context[4];
    void* item_64_6 = &context[0xe];

    if (*i_2 && i_2)
    {
        int32_t temp_18 = g_afa7e0;

        do
        {
            int32_t* entity_17 = *i_2;
            void* data_42;

            if (!entity_17)
                data_42 = nullptr;
            else
            {
                int32_t data_39 = *entity_17;
                int32_t data_40 = -(data_39);
                data_42 = (data_40 - data_40) & entity_17;
            }

            *((temp_18 << 2) + &g_afa6e0) = data_42;
            g_afa7e0 = temp_18 + 1;
            uint32_t data_44 = DynObj_CreateMagicObject_6();
            int32_t entity_18 = 0;
            entity_18 = i_2[7];
            result = *(((data_44 * 0x180 + entity_18) << 2) + &g_a96ae0);

            if (result)
                result = result(i_2, &item_68);

            temp_18 = g_afa7e0 - 1;
            g_afa7e0 = temp_18;
            i_2 = *((temp_18 << 2) + &g_afa6e0);
        } while (i_2);
    }

    return result;
}

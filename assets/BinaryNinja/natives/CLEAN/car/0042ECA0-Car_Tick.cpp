// IGI native provenance: Car_Tick - 0x0042ECA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042ECA0-Car_Tick.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Car_Tick.h"
void* Car_Tick(int32_t context)

{
    float source_val = context;
    void* data_val = *(source_val + 0x1b4);
    void* entity_val = *(data_val + 0x2d4);
    *(source_val + 0x720) = (1.0f - *(entity_val + 0x20)) * *(source_val + 0x730) + *(entity_val + 0x20) * *(source_val + 0x720);
    void* data_1 = *(data_val + 0x2d4);
    *(source_val + 0x72c) = (1.0f - *(data_1 + 0x18)) * *(source_val + 0x73c) + *(source_val + 0x72c) * *(data_1 + 0x18);
    long double fpu_val_7_8 = *(source_val + 0x730);
    long double f0 = 0.0f;
    fpu_val_7_8 - f0;

    if (*(&((fpu_val_7_8 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_8 == f0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double fpu_val_7_9 = *(source_val + 0x720);
        long double f1_1 = 0.0f;
        fpu_val_7_9 - f1_1;
        long double fpu_val_7_10 = *(source_val + 0x720);

        if (*(&((fpu_val_7_9 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_9 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            fpu_val_7_10 = -(fpu_val_7_10);

        long double f2_1 = 0.00999999978f;
        fpu_val_7_10 - f2_1;

        if (*(&((fpu_val_7_10 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_10 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
            *(source_val + 0x720) = 0;
    }

    Car_WheelSweep(source_val);
    float item_c;

    if (!Script_ParseEnumReal32_29(source_val))
    {
        void* data_4 = *(source_val + 0x1b4);
        float item_10_1 = source_val;

        if (*(*(data_4 + 0x2d4) + 0x28))
        {
            item_c = *(source_val + 0x108);
            float context_3 = *(source_val + 0x10c);
            item_c = -(item_c);
            float item_8_2 = -(context_3);
            float item_4_2 = -(*(source_val + 0x110));
            void* data_6 = *(data_4 + 0x2d4) + 0x2c;
            SoundSys_SetMasterVolume_16(data_6, *(data_6 - 4), 0.000326999987f, source_val + 0xf0, source_val + 0x70, &item_c);
        }

        void item_14;
        Script_FormatString_28(source_val, 44.6008873f, 0.970000029f, 0.899999976f, Level_StartMission_4(), 0xc,
            &item_14);
    }

    void* data_8 = *(source_val + 0x74c);

    if (data_8)
    {
        context = 1;
        *(data_8 + 4) = *(source_val + 0x720);
        long double fpu_val_7_17 = *(source_val + 0x720);
        long double f3_1 = 0.00999999978f;
        fpu_val_7_17 - f3_1;

        if (*(&((fpu_val_7_17 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_17, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_17 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            context = 0;

        *(*(source_val + 0x74c) + 8) = context;
        long double fpu_val_7_20 = *(source_val + 0xf8) * 0.00100000005f;
        long double f4_1 = 1.0f;
        fpu_val_7_20 - f4_1;

        if (!(*(&((fpu_val_7_20 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_20, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_20 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            fpu_val_7_20 = 1.0f;

        *(*(source_val + 0x74c) + 0xc) = fpu_val_7_20;
    }

    void* result = *(source_val + 0xe8);

    if (result)
    {
        item_c = source_val + 0x20;
        int32_t item_8_3 = source_val + 0x70;
        float item_4_3 = source_val;
        int32_t* i = *(result + 8);

        if (*i && i)
        {
            int32_t entity_5 = g_afa7e0;

            do
            {
                int32_t* temp_7 = *i;
                void* data_14;

                if (!temp_7)
                    data_14 = nullptr;
                else
                {
                    int32_t data_11 = *temp_7;
                    int32_t data_12 = -(data_11);
                    data_14 = (data_12 - data_12) & temp_7;
                }

                *((entity_5 << 2) + &g_afa6e0) = data_14;
                g_afa7e0 = entity_5 + 1;
                uint32_t data_16 = MagicObj_GetEventId();
                int32_t entity_7 = 0;
                entity_7 = i[7];
                result = *(((data_16 * 0x180 + entity_7) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &item_c);

                entity_5 = g_afa7e0 - 1;
                g_afa7e0 = entity_5;
                i = *((entity_5 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}

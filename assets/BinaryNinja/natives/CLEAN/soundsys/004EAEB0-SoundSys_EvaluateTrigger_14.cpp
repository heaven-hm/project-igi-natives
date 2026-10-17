// IGI native provenance: SoundSys_EvaluateTrigger_14 - 0x004EAEB0 - CFG score 84.6% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004EAEB0-SoundSys_EvaluateTrigger_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_EvaluateTrigger_14.h"
int32_t SoundSys_EvaluateTrigger_14(void* context)

{
    double* item_2c = nullptr;
    float* item_28 = nullptr;
    void* source_val = *(context + 0x14);
    int32_t item_24 = 0;
    uint32_t data_1 = SoundSys_SetFrequency_5();
    int32_t temp_val = 0;
    temp_val = *(source_val + 0x1c);
    int32_t data_2 = *(((data_1 * 0x180 + temp_val) << 2) + &g_a96ae0);

    if (data_2)
        data_2(source_val, &item_2c);

    Display_SetGammaRamp_12(context + 0x30);
    memcpy(context + 0x88, context + 0xa0, 0x18);

    if (item_28)
    {
        double item_20 =
            item_28[1] * *(context + 0x90) + item_28[2] * *(context + 0x98) + *item_28 * *(context + 0x88);
        double item_18_1 =
            item_28[4] * *(context + 0x90) + item_28[5] * *(context + 0x98) + item_28[3] * *(context + 0x88);
        double item_10_1 =
            item_28[7] * *(context + 0x90) + item_28[8] * *(context + 0x98) + item_28[6] * *(context + 0x88);
        memcpy(context + 0x88, &item_20, 0x18);
    }

    double* data_5 = item_2c;

    if (data_5)
    {
        *(context + 0x88) = *data_5 + *(context + 0x88);
        *(context + 0x90) = data_5[1] + *(context + 0x90);
        *(context + 0x98) = data_5[2] + *(context + 0x98);
    }

    int32_t entity_3 = item_24;

    if (entity_3)
    {
        int32_t data_6 = *(context + 0xd8);

        if (data_6 != 0xffffffff)
        {
            long double fpu_val_7_19 = *(entity_3 + (data_6 << 2) + 4);
            long double f2_1 = 0.0f;
            fpu_val_7_19 - f2_1;

            if (*(&((fpu_val_7_19 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_19, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_19 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                *(context + 0x30) = 0;
            else
            {
                SoundSys_LoadSoundDef_8(context + 0x30, context + 0xe8, fpu_val_7_19);
                entity_3 = item_24;
            }
        }

        int32_t data_10 = *(context + 0xdc);

        if (data_10 != 0xffffffff)
        {
            SoundSys_LoadSoundDef_8(context + 0x34, context + 0x114, *(entity_3 + (data_10 << 2) + 4));
            entity_3 = item_24;
        }

        int32_t data_12 = *(context + 0xe0);

        if (data_12 != 0xffffffff)
            *(context + 0x34) = *(entity_3 + (data_12 << 2) + 4) + *(context + 0x34);

        data_5 = *(context + 0xe4);

        if (data_5 != 0xffffffff)
        {
            char* entity_5 = *(entity_3 + (data_5 << 2) + 4);

            if (entity_5)
            {
                char* dest_2 = context + 0x160;
                char* source_2 = entity_5;

                while (true)
                {
                    char temp_4 = *source_2;
                    data_5 = temp_4;
                    char f5_1 = *dest_2;
                    bool c_1 = temp_4 < f5_1;

                    if (temp_4 == f5_1)
                    {
                        if (!data_5)
                        {
                            data_5 = nullptr;
                            break;
                        }

                        temp_4 = source_2[1];
                        data_5 = temp_4;
                        char f8_1 = dest_2[1];
                        c_1 = temp_4 < f8_1;

                        if (temp_4 == f8_1)
                        {
                            source_2 = &source_2[2];
                            dest_2 = &dest_2[2];

                            if (data_5)
                                continue;

                            data_5 = nullptr;
                            break;
                        }
                    }

                    data_5 = data_5 - data_5 + 1;
                    break;
                }

                if (data_5)
                {
                    char* dest_3 = entity_5;
                    int32_t i = 0xffffffff;

                    while (i)
                    {
                        bool flag_1_1 = 0 != *dest_3;
                        dest_3 = &dest_3[1];
                        i -= 1;

                        if (!flag_1_1)
                            break;
                    }

                    int32_t entity_6 = ~i;
                    int32_t source_4;
                    int32_t dest_6;
                    dest_6 = memcpy(context + 0x160, dest_3 - entity_6, entity_6 & 0xfffffffc);
                    memcpy(dest_6, source_4, entity_6 & 3);
                    *(context + 0x180) = Display_CheckCapabilities_12(context + 0x160);
                    *(context + 0x184) = Display_RestoreDevice_12(context + 0x160);
                    *(context + 0x28) = 0;
                }
            }
        }
    }

    long double fpu_val_7_22 = *(context + 0xb8);
    long double f0 = 0.0f;
    fpu_val_7_22 - f0;

    if (!(*(&((fpu_val_7_22 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_22, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_22 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_23 = *(context + 0xb8);
        long double f1_1 = 1.0f;
        fpu_val_7_23 - f1_1;

        if (!(*(&((fpu_val_7_23 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_23, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_23 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(context + 0xb8) = 0x3f800000;
    }
    else
        *(context + 0xb8) = 0;

    long double fpu_val_7_24 = *(context + 0xbc);
    long double f3 = 0.0f;
    fpu_val_7_24 - f3;

    if (!(*(&((fpu_val_7_24 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_24, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_24 == f3 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_25 = *(context + 0xbc);
        long double f4_1 = 1.0f;
        fpu_val_7_25 - f4_1;

        if (!(*(&((fpu_val_7_25 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_25, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_25 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(context + 0xbc) = 0x3f800000;
    }
    else
        *(context + 0xbc) = 0;

    long double fpu_val_7_27 = *(context + 0xbc) * *(context + 0xb8);
    memset(context + 0x68, 0, 0x18);
    *(context + 0x30) = fpu_val_7_27 * *(context + 0x30);
    long double fpu_val_7_30 = *(context + 0xc0) * *(context + 0x34);
    memcpy(context + 0x50, context + 0x88, 0x18);
    *(context + 0x34) = fpu_val_7_30;
    *(context + 0x40) = *(context + 0xc8);
    *(context + 0x48) = *(context + 0xcc);
    int32_t result;
    long double fp0;
    fp0 = SoundSys_StopSoundSample_8(context + 0x30);
    *(context + 0xd0) = fp0;
    return result;
}

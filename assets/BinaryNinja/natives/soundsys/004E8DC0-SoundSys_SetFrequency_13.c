// IGI native provenance: SoundSys_SetFrequency_13 - 0x004E8DC0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004E8DC0-SoundSys_SetFrequency_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_SetFrequency_13.h"
int32_t SoundSys_SetFrequency_13(void* context)

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
            item_28[2] * *(context + 0x98) + item_28[1] * *(context + 0x90) + *item_28 * *(context + 0x88);
        double item_18_1 =
            item_28[5] * *(context + 0x98) + item_28[3] * *(context + 0x88) + item_28[4] * *(context + 0x90);
        double item_10_1 =
            item_28[8] * *(context + 0x98) + item_28[6] * *(context + 0x88) + item_28[7] * *(context + 0x90);
        memcpy(context + 0x88, &item_20, 0x18);
    }

    double* data_5 = item_2c;

    if (data_5)
    {
        *(context + 0x88) = *(context + 0x88) + *data_5;
        *(context + 0x90) = data_5[1] + *(context + 0x90);
        *(context + 0x98) = data_5[2] + *(context + 0x98);
    }

    if (item_24)
    {
        int32_t data_6 = *(context + 0xb8);

        if (data_6 != 0xffffffff)
            *(context + 0x30) = *(item_24 + (data_6 << 2) + 4);

        int32_t data_7 = *(context + 0xbc);

        if (data_7 != 0xffffffff)
            *(context + 0x34) = *(item_24 + (data_7 << 2) + 4);

        data_5 = *(context + 0xc0);

        if (data_5 != 0xffffffff)
        {
            char* entity_4 = *(item_24 + (data_5 << 2) + 4);

            if (entity_4)
            {
                char* dest_2 = context + 0xff;
                char* source_2 = entity_4;

                while (true)
                {
                    char temp_2 = *source_2;
                    data_5 = temp_2;
                    char f4_1 = *dest_2;
                    bool c_1 = temp_2 < f4_1;

                    if (temp_2 == f4_1)
                    {
                        if (!data_5)
                        {
                            data_5 = nullptr;
                            break;
                        }

                        temp_2 = source_2[1];
                        data_5 = temp_2;
                        char f7_1 = dest_2[1];
                        c_1 = temp_2 < f7_1;

                        if (temp_2 == f7_1)
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
                    char* dest_3 = entity_4;
                    int32_t i = 0xffffffff;

                    while (i)
                    {
                        bool flag_1_1 = 0 != *dest_3;
                        dest_3 = &dest_3[1];
                        i -= 1;

                        if (!flag_1_1)
                            break;
                    }

                    int32_t entity_5 = ~i;
                    int32_t source_4;
                    int32_t dest_6;
                    dest_6 = memcpy(context + 0xff, dest_3 - entity_5, entity_5 & 0xfffffffc);
                    memcpy(dest_6, source_4, entity_5 & 3);
                    *(context + 0x128) = Display_CheckCapabilities_12(context + 0xff);
                    *(context + 0x12c) = Display_RestoreDevice_12(context + 0xff);
                    *(context + 0x28) = 0;
                }
            }
        }
    }

    long double fpu_val_7_19 = *(context + 0xc4);
    long double f0 = 0.0f;
    fpu_val_7_19 - f0;

    if (!(*(&((fpu_val_7_19 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_19, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_19 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_20 = *(context + 0xc4);
        long double f1_1 = 1.0f;
        fpu_val_7_20 - f1_1;

        if (!(*(&((fpu_val_7_20 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_20, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_20 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(context + 0xc4) = 0x3f800000;
    }
    else
        *(context + 0xc4) = 0;

    long double fpu_val_7_21 = *(context + 0xc8);
    long double f2 = 0.0f;
    fpu_val_7_21 - f2;

    if (!(*(&((fpu_val_7_21 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_21, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_21 == f2 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_22 = *(context + 0xc8);
        long double f3_1 = 1.0f;
        fpu_val_7_22 - f3_1;

        if (!(*(&((fpu_val_7_22 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_22, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_22 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(context + 0xc8) = 0x3f800000;
    }
    else
        *(context + 0xc8) = 0;

    long double fpu_val_7_25 = *(context + 0xc4) * *(context + 0xc8) * *(context + 0x30);
    memcpy(context + 0x50, context + 0x88, 0x18);
    *(context + 0x30) = fpu_val_7_25;
    *(context + 0x40) = *(context + 0xd0);
    *(context + 0x48) = *(context + 0xd4);
    long double fpu_val_7_29 = *(context + 0xcc) * *(context + 0x34);
    *(context + 0x68) = 0;
    *(context + 0x70) = 0;
    *(context + 0x34) = fpu_val_7_29;
    *(context + 0x78) = 0;
    *(context + 0x6c) = 0;
    *(context + 0x74) = 0;
    *(context + 0x7c) = 0;
    *(context + 0x80) = *(context + 0x120);
    int32_t result;
    long double fp0;
    fp0 = SoundSys_StopSoundSample_8(context + 0x30);
    *(context + 0xd8) = fp0;
    return result;
}

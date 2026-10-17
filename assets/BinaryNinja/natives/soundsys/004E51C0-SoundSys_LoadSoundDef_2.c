// Original IGI.EXE function: SoundSys_LoadSoundDef_2 (VA 0x004E51C0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_LoadSoundDef_2.h"
int32_t SoundSys_LoadSoundDef_2()

{
    int32_t result = g_a5e400;
    void* context_val = (&g_a5e374)[result];
    void* item_10 = context_val;
    *(context_val + 0xc) = 0;
    int32_t source_1 = g_a5e400 + 1;
    g_a5e400 = source_1;
    result = *(context_val + 0x14);

    if (result)
    {
        void* dest_1 = **&g_a5e3f0 + (result & 0xffff) * 0x18;
        (&g_a5e374)[source_1] = dest_1;
        result = SoundSys_LoadSoundDef_2();
        result = *(dest_1 + 0x16);

        while (result)
        {
            void* source_2 = **&g_a5e3f0 + (result & 0xffff) * 0x18;
            (&g_a5e374)[g_a5e400] = source_2;
            result = SoundSys_LoadSoundDef_2();
            result = *(source_2 + 0x16);
        }

        source_1 = g_a5e400;
    }

    result = *(context_val + 0x12);

    if (result)
    {
        int32_t i = 0;
        i = *(context_val + 0x10);
        result = (result & 0xffff) + i;

        if (i < result)
        {
            int32_t temp_3 = g_a5e3ec;
            int32_t entity_8;

            do
            {
                int32_t dest_2 = 0;
                int32_t entity_4 = *(g_a5e3f8 + 0x10);
                int32_t data_6 = 0;
                data_6 = *(entity_4 + (i << 3));
                void* entity_5 = entity_4 + (i << 3);
                int32_t item_c = temp_3 + data_6 * 0xc;
                int32_t data_9 = 0;
                data_9 = *(entity_5 + 2);
                int32_t item_8_1 = temp_3 + data_9 * 0xc;
                int32_t data_12 = 0;
                data_12 = *(entity_5 + 4);
                int32_t item_4_1 = temp_3 + data_12 * 0xc;

                if (source_1 > 0)
                {
                    int32_t* context_1 = &g_a5e374;

                    do
                    {
                        float* entity_7 = *context_1;
                        int32_t* temp_4 = &item_c;
                        int32_t j_1 = 3;
                        int32_t j;

                        do
                        {
                            float* data_14 = *temp_4;
                            long double fpu_val_7_2 = data_14[2] - entity_7[2];
                            long double fpu_val_6_2 = data_14[1] - entity_7[1];
                            long double fpu_val_5_2 = *data_14 - *entity_7;
                            long double fpu_val_7_3 = sqrtl(fpu_val_5_2 * fpu_val_5_2 + fpu_val_6_2 * fpu_val_6_2
                                + fpu_val_7_2 * fpu_val_7_2);
                            long double fpu_val_6_4 = entity_7[3];
                            fpu_val_6_4 - fpu_val_7_3;

                            if (!(*(&((fpu_val_6_4 < fpu_val_7_3 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_4, fpu_val_7_3) ? 1 : 0) << 0xa
                                    | (fpu_val_6_4 == fpu_val_7_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                                fpu_val_7_3 = entity_7[3];

                            entity_7[3] = fpu_val_7_3;
                            temp_4 = &temp_4[1];
                            j = j_1;
                            j_1 -= 1;
                        } while (j != 1);
                        source_1 = g_a5e400;
                        dest_2 += 1;
                        context_1 = &context_1[1];
                    } while (dest_2 < source_1);

                    temp_3 = g_a5e3ec;
                    context_val = item_10;
                }

                entity_8 = 0;
                result = 0;
                entity_8 = *(context_val + 0x12);
                result = *(context_val + 0x10);
                i += 1;
            } while (i < entity_8 + result);
        }
    }

    g_a5e400 = source_1 - 1;
    return result;
}

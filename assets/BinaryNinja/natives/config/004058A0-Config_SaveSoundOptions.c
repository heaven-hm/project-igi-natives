// Original IGI.EXE function: Config_SaveSoundOptions (VA 0x004058A0; static CFG gate PASS, CFG score 1.000).
#include "Config_SaveSoundOptions.h"
int32_t Config_SaveSoundOptions()

{
    int32_t item_4 = 0x1b;
    int32_t source_val = Config_SetResolution();
    int32_t* flagP = Config_SetGamma();
    int32_t data_2 = 0;
    int32_t* item_c = flagP;
    int32_t item_10 = 0;

    while (true)
    {
        int32_t dest_1 = 0;
        int32_t item_8;
        Config_Moveleft(data_2, &item_8, nullptr);
        int32_t context_1 = item_8;
        int32_t data_3 = 0;

        if (source_val > 0)
        {
            int32_t* entity_1 = flagP;

            do
            {
                if (dest_1)
                    goto label_405953;

                if (*entity_1 == context_1)
                    dest_1 = 1;

                data_3 += 1;
                entity_1 = &entity_1[3];
            } while (data_3 < source_val);
        }

        if (source_val <= 0 || !dest_1)
        {
            int32_t i = 0;
            int32_t* entity_2 = &flagP[source_val * 3];
            int32_t* data_5 = &g_536410;

            while (!i)
            {
                if (*data_5 == context_1)
                {
                    int32_t* dest_2 = entity_2;
                    source_val += 1;
                    entity_2 = &entity_2[3];
                    *dest_2 = *data_5;
                    dest_2[1] = data_5[1];
                    dest_2[2] = data_5[2];
                    i = 1;
                }

                data_5 = &data_5[3];

                if (data_5 >= 0x536554)
                    break;
            }
        }

    label_405953:
        data_2 = item_10 + 1;
        item_10 = data_2;

        if (data_2 >= item_4)
            break;

        flagP = item_c;
    }

    return Config_SetVolume(source_val);
}

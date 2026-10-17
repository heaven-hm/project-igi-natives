// Original IGI.EXE function: SoundDefGroup_OnEvent (VA 0x004EB670; static CFG gate PASS, CFG score 1.000).
#include "SoundDefGroup_OnEvent.h"
int32_t SoundDefGroup_OnEvent(void* context, int32_t* param_2)

{
    int32_t result = param_2[1];

    if (!result)
    {
        char* data_val = *param_2;
        int32_t context_val;
        int32_t item_10_1 = context_val;
        char* source_1 = context + 0x22;

        while (true)
        {
            char temp_1 = *data_val;
            char context_1 = *source_1;
            bool c_1 = temp_1 < context_1;

            if (temp_1 == context_1)
            {
                if (!temp_1)
                {
                    result = 0;
                    break;
                }

                temp_1 = data_val[1];
                context_1 = source_1[1];
                c_1 = temp_1 < context_1;

                if (temp_1 == context_1)
                {
                    data_val = &data_val[2];
                    source_1 = &source_1[2];

                    if (temp_1)
                        continue;

                    result = 0;
                    break;
                }
            }

            result = data_val - data_val + 1;
            break;
        }

        if (!result)
        {
            param_2[1] = context;
            return result;
        }

        int32_t* i = *(context + 8);

        if (*i && i)
        {
            int32_t entity_2 = g_afa7e0;

            do
            {
                int32_t* temp_2 = *i;
                void* data_5;

                if (!temp_2)
                    data_5 = nullptr;
                else
                {
                    int32_t data_2 = *temp_2;
                    int32_t data_3 = -(data_2);
                    data_5 = (data_3 - data_3) & temp_2;
                }

                *((entity_2 << 2) + &g_afa6e0) = data_5;
                g_afa7e0 = entity_2 + 1;
                uint32_t data_7 = SoundSys_StopSoundSample_5();
                int32_t entity_4 = 0;
                entity_4 = i[7];
                result = *(((data_7 * 0x180 + entity_4) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, param_2);

                entity_2 = g_afa7e0 - 1;
                g_afa7e0 = entity_2;
                i = *((entity_2 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}

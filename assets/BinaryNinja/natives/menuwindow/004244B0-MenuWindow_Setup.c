// Original IGI.EXE function: MenuWindow_Setup (VA 0x004244B0; static CFG gate PASS, CFG score 1.000).
#include "MenuWindow_Setup.h"
int32_t MenuWindow_Setup(void* context)

{
    void* dest_val = context;
    char item_18 = 0;
    char item_17 = 0;
    void* item_4 = dest_val;
    int32_t result = *(dest_val + 0x38);

    if (result)
    {
        int32_t* data_val = *(dest_val + 8);
        int32_t source_1 = *data_val;
        int32_t source_2 = -(source_1);
        int32_t context_1 = 0;
        int32_t* i = (source_2 - source_2) & data_val;
        void* entity_1 = nullptr;
        int32_t flagP1 = 0;
        context = nullptr;

        if (i)
        {
            do
            {
                int32_t data_1 = 0;
                int32_t entity_2 = 0;
                data_1 = g_53b921;
                char item_24 = 0;
                entity_2 = i[7];
                int32_t data_5 = *(((data_1 * 0x180 + entity_2) << 2) + &g_a96ae0);

                if (data_5)
                {
                    data_5(i, &item_24);

                    if (item_24)
                    {
                        int32_t item_20;
                        context_1 += item_20;
                        int32_t item_1c;
                        context += item_1c;
                        flagP1 += 1;
                    }
                }

                i = *i;

                if (!i)
                    break;

                if (!*i)
                    break;
            } while (i);

            entity_1 = context;
        }

        result = *(dest_val + 0x38) - 1;

        switch (result)
        {
            case 0:
            {
                result = *(dest_val + 0x34);
                int32_t result_4 = result;
                int32_t item_10_1 = *(dest_val + 0x24) + result;
                char item_17_1 = 1;
                break;
            }
            case 1:
            {
                char item_17_2 = 1;
                result = (*(dest_val + 0x2c) - entity_1) / (flagP1 + 1);
                int32_t result_5 = result;
                int32_t item_10_2 = *(dest_val + 0x24) + result;
                break;
            }
            case 2:
            {
                int32_t data_13 = *(dest_val + 0x34);
                int32_t item_8_1 = data_13;
                result = data_13 * flagP1;
                char item_17_3 = 1;
                void* item_10_3 = *(dest_val + 0x2c) - result + *(dest_val + 0x24) - entity_1;
                break;
            }
            case 3:
            {
                result = *(dest_val + 0x30);
                int32_t result_1 = result;
                int32_t item_14_1 = *(dest_val + 0x20) + result;
                item_18 = 1;
                break;
            }
            case 4:
            {
                result = (*(dest_val + 0x28) - context_1) / (flagP1 + 1);
                int32_t result_2 = result;
                int32_t item_14_2 = *(dest_val + 0x20) + result;
                item_18 = 1;
                break;
            }
            case 5:
            {
                int32_t data_22 = *(dest_val + 0x30);
                int32_t item_c_1 = data_22;
                result = data_22 * flagP1;
                int32_t item_14_3 = *(dest_val + 0x28) - result + *(dest_val + 0x20) - context_1;
                item_18 = 1;
                break;
            }
            case 6:
            {
                int32_t data_14 = *(dest_val + 0x34);
                int32_t item_10_4 = *(dest_val + 0x24) + data_14;
                int32_t entity_9 = flagP1 - 1;

                if (entity_9 < 1)
                    entity_9 = 1;

                char item_17_4 = 1;
                result = (*(dest_val + 0x2c) - data_14 * 2 - context) / entity_9;
                int32_t result_6 = result;
                break;
            }
            case 7:
            {
                int32_t data_23 = *(dest_val + 0x30);
                int32_t entity_16 = flagP1 - 1;
                int32_t item_14_4 = *(dest_val + 0x20) + data_23;

                if (entity_16 < 1)
                    entity_16 = 1;

                result = (*(dest_val + 0x28) - data_23 * 2 - context_1) / entity_16;
                int32_t result_3 = result;
                item_18 = 1;
                break;
            }
        }
    }

    int32_t* i_1 = *(dest_val + 8);
    int32_t entity_17;

    if (!*i_1 || !i_1)
        entity_17 = g_afa7e0;
    else
    {
        entity_17 = g_afa7e0;

        do
        {
            int32_t* source_5 = *i_1;
            void* data_32;

            if (!source_5)
                data_32 = nullptr;
            else
            {
                int32_t data_29 = *source_5;
                int32_t data_30 = -(data_29);
                data_32 = (data_30 - data_30) & source_5;
            }

            *((entity_17 << 2) + &g_afa6e0) = data_32;
            uint32_t data_34 = *g_53b920;
            int32_t entity_18 = entity_17 + 1;
            int32_t source_6 = 0;
            g_afa7e0 = entity_18;
            source_6 = i_1[7];
            result = *(((data_34 * 0x180 + source_6) << 2) + &g_a96ae0);

            if (result)
            {
                result = result(i_1, &item_18);
                entity_18 = g_afa7e0;
            }

            i_1 = *((entity_18 << 2) + &g_afa6dc);
            entity_17 = entity_18 - 1;
            g_afa7e0 = entity_17;
        } while (i_1);
    }

    int32_t* i_3 = *(dest_val + 8);

    if (*i_3)
    {
        int32_t* i_2 = i_3;

        if (i_2)
        {
            int32_t dest_1 = g_53b910;

            do
            {
                int32_t* source_7 = *i_2;
                void* data_41;

                if (!source_7)
                    data_41 = nullptr;
                else
                {
                    int32_t data_38 = *source_7;
                    int32_t data_39 = -(data_38);
                    data_41 = (data_39 - data_39) & source_7;
                }

                *((entity_17 << 2) + &g_afa6e0) = data_41;
                int32_t entity_19 = entity_17 + 1;
                int32_t data_42 = 0;
                g_afa7e0 = entity_19;
                data_42 = i_2[7];
                result = *(((data_42 + dest_1 * 0x180) << 2) + &g_a96ae0);

                if (result)
                {
                    result = result(i_2);
                    entity_19 = g_afa7e0;
                    dest_1 = g_53b910;
                }

                i_2 = *((entity_19 << 2) + &g_afa6dc);
                entity_17 = entity_19 - 1;
                g_afa7e0 = entity_17;
            } while (i_2);
        }
    }

    return result;
}

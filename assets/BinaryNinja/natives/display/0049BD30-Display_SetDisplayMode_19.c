// Original IGI.EXE function: Display_SetDisplayMode_19 (VA 0x0049BD30; static CFG gate FAIL, CFG score 0.667).
#include "Display_SetDisplayMode_19.h"
int32_t Display_SetDisplayMode_19()

{
    int32_t i = g_72350c;
    int32_t i_1 = 0;

    if (i > 0)
    {
        int32_t* flagP1 = &g_7ac0a0;

        do
        {
            int32_t* data_val = *flagP1;
            (*(*data_val + 8))(data_val);
            int32_t* data_1 = g_5ca110;
            *flagP1 = 0;
            (*(*data_1 + 0x14))(data_1, &flagP1[1], flagP1, 0);
            int32_t* context_1 = flagP1[6];
            int32_t* source_1 = *context_1;
            int32_t* item_c_1 = source_1;

            if (source_1)
            {
                while (true)
                {
                    int32_t* data_2 = *context_1[4];
                    int32_t item_4;

                    if (!(*(*data_2 + 0xc))(data_2, 0x20, &item_4, 0))
                    {
                        int32_t data_4 = flagP1[5];
                        int32_t dest_1 = 0;
                        dest_1 = context_1[3];
                        int32_t entity_4 = 0;
                        entity_4 = *(context_1 + 0xe);
                        int32_t entity_5 = entity_4 * data_4;
                        int32_t source_3;
                        int32_t dest_4;
                        dest_4 =
                            memcpy(dest_1 * data_4 + item_4, context_1[5], entity_5 & 0xfffffffc);
                        memcpy(dest_4, source_3, entity_5 & 3);
                        int32_t* data_7 = *context_1[4];
                        (*(*data_7 + 0x10))(data_7);
                        source_1 = item_c_1;
                    }

                    context_1 = source_1;
                    int32_t* source_4 = *source_1;
                    item_c_1 = source_4;

                    if (!source_4)
                        break;

                    source_1 = item_c_1;
                }
            }

            i = i_1 + 1;
            flagP1 = &flagP1[9];
            i_1 = i;
        } while (i < g_72350c);
    }

    return i;
}

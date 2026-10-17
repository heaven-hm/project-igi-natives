// Original IGI.EXE function: DynObj_InsertHashItem_4 (VA 0x004C1600; static CFG gate PASS, CFG score 0.875).
#include "DynObj_InsertHashItem_4.h"
void* DynObj_InsertHashItem_4(int32_t* context, int32_t* param_2)

{
    int16_t item_200;
    memset(&item_200, 0x20202020, 0x200);
    item_200 = 0xa0d;
    int32_t data_3 = context[1] + 2;
    char item_1fe = 0;
    char item_1fe_1 = 0x20;
    int32_t item_228 = 0x200;

    if (data_3 <= 0x200)
        item_228 = data_3;

    int32_t source_val = *(context[2] + *param_2 + 1);
    int32_t item_224 = source_val;
    Sys_CloseFileStream_4(*context, &g_547a4c, 1);
    int32_t flagP = 0;
    int32_t item_22c = 0;

    if (source_val > 0)
    {
        do
        {
            int32_t item_240_1 = *(context[2] + (flagP << 2) + *param_2 + 5);
            void item_220;
            Game_DataSymbolLoad(&item_220, "@%08X");

            if (flagP >= source_val - 1)
                item_22c = 0;
            else
            {
                void* dest_1 = &g_547a44;
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool flag_2_1 = 0 != *dest_1;
                    dest_1 += 1;
                    i -= 1;

                    if (!flag_2_1)
                        break;
                }

                int32_t entity_4 = ~i;
                void* dest_3 = &item_220;
                int32_t i_1 = 0xffffffff;

                while (i_1)
                {
                    bool flag_3_1 = 0 != *dest_3;
                    dest_3 += 1;
                    i_1 -= 1;

                    if (!flag_3_1)
                        break;
                }

                int32_t source_2;
                int32_t dest_5;
                dest_5 = memcpy(dest_3 - 1, dest_1 - entity_4, entity_4 & 0xfffffffc);
                memcpy(dest_5, source_2, entity_4 & 3);
                source_val = item_224;
            }

            void* dest_6 = &item_220;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool flag_5_1 = 0 != *dest_6;
                dest_6 += 1;
                i_2 -= 1;

                if (!flag_5_1)
                    break;
            }

            Sys_CloseFileStream_4(*context, &item_220, ~i_2 - 1);

            if (item_22c >= 4)
            {
                item_22c = 0xffffffff;
                Sys_CloseFileStream_4(*context, &item_200, item_228);
            }

            flagP += 1;
            item_22c += 1;
        } while (flagP < source_val);
    }

    Sys_CloseFileStream_4(*context, &g_547ee8, 3);
    context[2] += (source_val << 2) + 5;
    return (source_val << 2) + 5;
}

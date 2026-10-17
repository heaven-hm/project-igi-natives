// Original IGI.EXE function: Sys_DispatchOpcode_27 (VA 0x004BC790; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_27.h"
int32_t Sys_DispatchOpcode_27(int32_t* context, char* param_2)

{
    Sys_CloseFileStream_4(context, 0x547a5c, 1);

    if (*param_2)
    {
        char* dest_1 = param_2;
        char i;

        do
        {
            int32_t data_2 = *dest_1 - 9;
            char* item_10_1;
            int32_t item_c_1;

            if (data_2 > 0x53)
            {
                item_c_1 = 1;
                item_10_1 = dest_1;
            }
            else
            {
                int32_t entity_1 = 0;
                entity_1 = lookup_table_4bc820[data_2];

                switch (entity_1)
                {
                    case 0:
                    {
                        item_c_1 = 2;
                        item_10_1 = &g_547a58;
                        break;
                    }
                    case 1:
                    {
                        item_c_1 = 2;
                        item_10_1 = &g_547a54;
                        break;
                    }
                    case 2:
                    {
                        item_c_1 = 2;
                        item_10_1 = &g_547a50;
                        break;
                    }
                    case 3:
                    {
                        item_c_1 = 1;
                        item_10_1 = dest_1;
                        break;
                    }
                }
            }

            Sys_CloseFileStream_4(context, item_10_1, item_c_1);
            i = dest_1[1];
            dest_1 = &dest_1[1];
        } while (i);
    }

    return Sys_CloseFileStream_4(context, 0x547a5c, 1);
}

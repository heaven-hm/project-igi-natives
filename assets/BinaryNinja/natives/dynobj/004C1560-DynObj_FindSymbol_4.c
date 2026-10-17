// Original IGI.EXE function: DynObj_FindSymbol_4 (VA 0x004C1560; static CFG gate PASS, CFG score 1.000).
#include "DynObj_FindSymbol_4.h"
int32_t DynObj_FindSymbol_4(int32_t* context, char* param_2)

{
    Sys_CloseFileStream_4(context, 0x547a5c, 1);
    char* dest_val = param_2;

    if (*dest_val)
    {
        char i;

        do
        {
            int32_t data_2 = *dest_val - 9;
            char* item_10_1;
            int32_t item_c_1;

            if (data_2 > 0x19)
            {
                item_c_1 = 1;
                item_10_1 = dest_val;
            }
            else
            {
                int32_t entity_1 = 0;
                entity_1 = lookup_table_4c15e0[data_2];

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
                        item_c_1 = 1;
                        item_10_1 = dest_val;
                        break;
                    }
                }
            }

            Sys_CloseFileStream_4(context, item_10_1, item_c_1);
            i = dest_val[1];
            dest_val = &dest_val[1];
        } while (i);
    }

    return Sys_CloseFileStream_4(context, 0x547a5c, 1);
}

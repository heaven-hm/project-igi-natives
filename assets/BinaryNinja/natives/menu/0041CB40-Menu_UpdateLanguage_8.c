// Original IGI.EXE function: Menu_UpdateLanguage_8 (VA 0x0041CB40; static CFG gate PASS, CFG score 1.000).
#include "Menu_UpdateLanguage_8.h"
int32_t Menu_UpdateLanguage_8(int32_t* context, char* param_2 , int32_t param_3)

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    char* dest_val = param_2;
    int32_t result = 0;
    char* flagP = dest_val;

    if (!dest_val)
        return 0;

    char i = *dest_val;

    if (i)
    {
        int32_t context_val;
        int32_t item_10_1 = context_val;

        do
        {
            char* source_1 = dest_val;

            if (i)
            {
                while (i != 0x20)
                {
                    if (i == 9)
                        break;

                    if (i == 0xa)
                        break;

                    i = source_1[1];
                    source_1 = &source_1[1];

                    if (!i)
                        break;
                }
            }

            char context_1 = *source_1;
            *source_1 = 0;
            Sys_FreeMemory_18(context, flagP);
            *source_1 = context_1;

            if (Sys_CheckHeap_21(context) > param_3 && dest_val != flagP)
            {
                dest_val[0xffffffff] = 0;
                flagP = dest_val;
                result += 1;
            }

            int32_t data_6 = *source_1;

            if (data_6 <= 0x20)
            {
                int32_t temp_1 = 0;
                temp_1 = lookup_table_41cc1c[data_6];

                switch (temp_1)
                {
                    case 0:
                    {
                        dest_val = source_1;
                        result += 1;
                        break;
                    }
                    case 1:
                    {
                        dest_val = &source_1[1];
                        break;
                    }
                    case 2:
                    {
                        dest_val = &source_1[1];
                        *source_1 = 0;
                        result += 1;
                        flagP = dest_val;
                        break;
                    }
                }
            }

            i = *dest_val;
        } while (i);
    }

    return result;
}

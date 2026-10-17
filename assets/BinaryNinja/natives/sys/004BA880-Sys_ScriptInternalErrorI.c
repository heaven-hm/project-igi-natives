// Original IGI.EXE function: Sys_ScriptInternalErrorI (VA 0x004BA880; static CFG gate FAIL, CFG score 0.844).
#include "Sys_ScriptInternalErrorI.h"
char* Sys_ScriptInternalErrorI(int32_t context, int32_t* param_2, int32_t param_3, char* param_4)

{
    int32_t entity_val = 0;

    if (param_4)
    {
        int32_t dest_1 = *(param_4 + 8);
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_1_1 = 0 != *dest_1;
            dest_1 += 1;
            i -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t* dest_2 = param_2;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_2_1 = 0 != *dest_2;
            dest_2 += 1;
            i_1 -= 1;

            if (!flag_2_1)
                break;
        }

        entity_val = ~i - 1 + ~i_1 - 1 + 1;
    }
    else if (context == 2 || context == 5)
    {
        int32_t* dest_3 = param_2;
        int32_t i_2 = 0xffffffff;

        while (i_2)
        {
            bool flag_3_1 = 0 != *dest_3;
            dest_3 += 1;
            i_2 -= 1;

            if (!flag_3_1)
                break;
        }

        entity_val = ~i_2;
    }

    char* result = Mem_Alloc(entity_val + 0x28, 4);
    memset(result, 0, 0x28);
    *result = context;
    *(result + 0x24) = param_3 + 1;

    if (context - 1 > 7)
    {
        Error_Show("Script: Internal Error: Illegal expression type.");

        while (true)
            /* nop */

        return;
    }

    void* temp_3;

    switch (context)
    {
        case 1:
        {
            *(result + 8) = *param_2;
            return result;
            break;
        }
        case 2:
        {
            temp_3 = &result[0x28];
            *(result + 8) = temp_3;

            if (!param_4)
                goto label_4baa31;

            int32_t dest_5 = *(param_4 + 8);
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool flag_7_1 = 0 != *dest_5;
                dest_5 += 1;
                i_3 -= 1;

                if (!flag_7_1)
                    break;
            }

            int32_t entity_8 = ~i_3;
            int32_t source_2;
            int32_t dest_8;
            dest_8 = memcpy(temp_3, dest_5 - entity_8, entity_8 & 0xfffffffc);
            memcpy(dest_8, source_2, entity_8 & 3);
            int32_t* dest_9 = param_2;
            int32_t i_4 = 0xffffffff;

            while (i_4)
            {
                bool flag_8_1 = 0 != *dest_9;
                dest_9 += 1;
                i_4 -= 1;

                if (!flag_8_1)
                    break;
            }

            int32_t entity_12 = ~i_4;
            int32_t dest_11 = *(result + 8);
            int32_t i_5 = 0xffffffff;

            while (i_5)
            {
                bool flag_9_1 = 0 != *dest_11;
                dest_11 += 1;
                i_5 -= 1;

                if (!flag_9_1)
                    break;
            }

            int32_t source_4;
            int32_t dest_13;
            dest_13 = memcpy(dest_11 - 1, dest_9 - entity_12, entity_12 & 0xfffffffc);
            memcpy(dest_13, source_4, entity_12 & 3);
            char* data_9 = *(param_4 + 0x20);

            if (data_9)
            {
                if (*(data_9 + 0x18) == param_4)
                {
                    *(data_9 + 0x18) = result;
                    *(result + 0x20) = *(param_4 + 0x20);
                    Sys_PushStack_24(param_4);
                    return result;
                }

                if (*(data_9 + 0x1c) == param_4)
                {
                    *(data_9 + 0x1c) = result;
                    *(result + 0x20) = *(param_4 + 0x20);
                    Sys_PushStack_24(param_4);
                    return result;
                }

                if (*data_9 != 6)
                {
                    Error_Show("Internal error!!!");

                    while (true)
                        /* nop */
                }
                else
                {
                    *(data_9 + 8) = result;
                    *(result + 0x20) = *(param_4 + 0x20);
                }
            }

            Sys_PushStack_24(param_4);
            return result;
            break;
        }
        case 3:
        {
            *(result + 8) = *param_2;
            *(result + 0xc) = param_2[1];
            return result;
            break;
        }
        case 4:
        case 6:
        {
            *(result + 8) = param_2;
            return result;
            break;
        }
        case 5:
        {
            temp_3 = &result[0x28];
            *(result + 8) = 0;
            *(result + 0x10) = temp_3;
            *(result + 0xc) = 0;
        label_4baa31:
            int32_t* dest_14 = param_2;
            int32_t i_6 = 0xffffffff;

            while (i_6)
            {
                bool flag_6_1 = 0 != *dest_14;
                dest_14 += 1;
                i_6 -= 1;

                if (!flag_6_1)
                    break;
            }

            int32_t entity_19 = ~i_6;
            int32_t source_6;
            int32_t dest_17;
            dest_17 = memcpy(temp_3, dest_14 - entity_19, entity_19 & 0xfffffffc);
            memcpy(dest_17, source_6, entity_19 & 3);
            return result;
            break;
        }
        case 7:
        {
            result[1] = 0x1d;
            result[2] = Sys_ScriptInternalErrorU(0x1d);
            *(result + 8) = param_2;
            return result;
            break;
        }
        case 8:
        {
            char context_1 = *param_2;
            result[1] = context_1;
            result[2] = Sys_ScriptInternalErrorU(context_1);
            return result;
            break;
        }
    }
}

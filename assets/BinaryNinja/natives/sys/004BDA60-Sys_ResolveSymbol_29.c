// Original IGI.EXE function: Sys_ResolveSymbol_29 (VA 0x004BDA60; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_29.h"
void* Sys_ResolveSymbol_29(int32_t context)

{
    int32_t* source_val = context;
    Sys_ExecuteBytecode_29(source_val);
    float item_18;
    int32_t dest_val = Sys_CloseFileStream_28(source_val, &context, &item_18);
    char* item_10;

    if (dest_val)
    {
    label_4bdab2:
        int32_t* item_14;

        if (Sys_OpenFileStream_28(source_val, &item_14))
        {
            int32_t* data_3 = item_14;

            if (*data_3)
            {
                int32_t temp_8 = source_val[5];
                source_val[8] = 8;
                source_val[4] = temp_8;
                return Sys_DispatchOpcode_29(source_val);
            }

            int32_t entity_1 = data_3[1];

            if (entity_1 == 1)
            {
                int32_t entity_5;

                if (dest_val == entity_1)
                {
                    int32_t entity_2 = data_3[3];

                    if (entity_2 == 1)
                    {
                        *data_3[6] = context;
                        entity_5 = context;
                    }
                    else
                    {
                        int32_t* temp_val = data_3[6];

                        if (entity_2 == 2)
                        {
                            *temp_val = context;
                            entity_5 = context;
                        }
                        else
                        {
                            *temp_val = context;
                            entity_5 = context;
                        }
                    }

                    goto label_4bdb12;
                }

                if (dest_val == 2)
                {
                    *data_3[6] = item_18;
                    entity_5 = item_18;
                label_4bdb12:
                    Sys_PushStack_29(source_val, entity_5);
                    int32_t data_8 = source_val[5] + 1;
                    source_val[5] = data_8;
                    return data_8;
                }
            }
            else if (entity_1 == 2)
            {
                if (dest_val == 1)
                {
                    int32_t item_24_3 = entity_1;
                    *data_3[6] = context;
                    Sys_PopStack_29(source_val, context);
                    int32_t data_11 = source_val[5] + 1;
                    source_val[5] = data_11;
                    return data_11;
                }

                if (dest_val == 2)
                {
                    *data_3[6] = item_18;
                    Sys_PopStack_29(source_val, item_18);
                    int32_t data_14 = source_val[5] + 1;
                    source_val[5] = data_14;
                    return data_14;
                }
            }
            else if (entity_1 == 3 && dest_val == entity_1)
            {
                Camera_ApplyLineFilter_5(data_3[6], item_10, data_3[3] - 1);
                int32_t* data_15 = item_14;
                *(data_15[6] + data_15[3] - 1) = 0;
                Sys_ReadFileBlock_28(source_val, item_14[6], 3);
                int32_t data_18 = source_val[5] + 1;
                source_val[5] = data_18;
                return data_18;
            }
        }
    }
    else
    {
        int32_t item_c;
        int32_t data_1 = Sys_FreeMemory_28(source_val, &item_10, &item_c, 3);
        int32_t dest_2 = -(data_1);
        dest_val = (dest_2 - dest_2) & 3;

        if (dest_val)
            goto label_4bdab2;
    }
    void* data_21 = source_val[8];

    if (data_21)
        return data_21;

    int32_t data_20 = source_val[5];
    source_val[8] = 0xb;
    source_val[4] = data_20;
    return Sys_DispatchOpcode_29(source_val);
}

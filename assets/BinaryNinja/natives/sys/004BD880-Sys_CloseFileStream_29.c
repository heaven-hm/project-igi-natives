// Original IGI.EXE function: Sys_CloseFileStream_29 (VA 0x004BD880; static CFG gate PASS, CFG score 0.952).
#include "Sys_CloseFileStream_29.h"
void* Sys_CloseFileStream_29(int32_t* context)

{
    char* context_val = context;
    Sys_ExecuteBytecode_29(context_val);

    if (!Sys_OpenFileStream_28(context_val, &context))
        goto label_4bd99c;

    int32_t* entity_1 = context;
    void* result;

    if (*entity_1 != 1)
    {
        int32_t temp_6 = *(context_val + 0x14);
        *(context_val + 0x20) = 9;
        *(context_val + 0x10) = temp_6;
    label_4bd99c:
        result = *(context_val + 0x20);

        if (!result)
        {
            int32_t data_10 = *(context_val + 0x14);
            *(context_val + 0x20) = 0xa;
            *(context_val + 0x10) = data_10;
            return Sys_DispatchOpcode_29(context_val);
        }
    }
    else
    {
        int32_t flagP1 = *(context_val + 0x14);
        int32_t source_1 = *(context_val + 0x1c);
        void* data_1 = *context_val + flagP1;
        int32_t saved_esi_8 = *(context_val + 0x18);
        int32_t temp_2 = *(data_1 + 1);
        void* item_1c_1 = data_1 + 5;
        int32_t item_24_1 = 0;
        int32_t item_28_1 = 1;
        int32_t item_2c = temp_2;
        char* item_20_1 = context_val;
        int32_t temp_3 = entity_1[6];
        int32_t saved_esi_7 = saved_esi_8;
        int32_t item_18;
        int32_t data_3 = entity_1[4](&item_18, temp_3, &item_2c);
        result = *(context_val + 0x20);
        memcpy(&item_18, data_3, 0x18);

        if (!result)
        {
            *(context_val + 0x2c) = 0;
            *(context_val + 0x1c) = source_1;
            int32_t saved_esi_6 = saved_esi_7;
            *(context_val + 0x14) = flagP1 + (temp_2 << 2) + 5;
            int32_t* temp_5 = context;
            *(context_val + 0x18) = saved_esi_6;
            int32_t data_5 = temp_5[1];

            if (data_5 == 3)
            {
                int32_t item_8;
                return Sys_ReadFileBlock_28(context_val, item_8, data_5);
            }

            if (data_5 != 2)
                return Sys_PushStack_29(context_val, item_18);

            int32_t saved_esi_2 = saved_esi_6;
            double item_10;
            return Sys_PopStack_29(context_val, item_10);
        }
    }

    return result;
}

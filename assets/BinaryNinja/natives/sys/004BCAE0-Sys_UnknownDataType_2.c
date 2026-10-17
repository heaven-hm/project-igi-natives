// Original IGI.EXE function: Sys_UnknownDataType_2 (VA 0x004BCAE0; static CFG gate PASS, CFG score 1.000).
#include "Sys_UnknownDataType_2.h"
int32_t Sys_UnknownDataType_2(char* context, int32_t param_2, float param_3, int32_t param_4, int32_t param_5)

{
    float source_val = param_3;
    void* data_val = *(source_val + 0xc);
    int32_t result = 0;
    int32_t entity_val = *(data_val + 0x18);
    int32_t flagP = *(data_val + 0x14);
    int32_t dest_val = *(data_val + 0x1c);
    *(data_val + 0x14) = *(*(source_val + 0x10) + (param_4 << 2));
    Sys_ExecuteBytecode_28(*(source_val + 0xc));
    char* data_2 = *(source_val + 0xc);

    if (*(data_2 + 0x1c) < dest_val && !*(data_2 + 0x20))
    {
        if (param_5 == 1)
        {
            if (Sys_CloseFileStream_28(data_2, &param_4, &param_3))
            {
                *context = param_4;
                result = 1;
            }
        }
        else if (param_5 == 2)
        {
            if (Sys_CloseFileStream_28(data_2, &param_4, &param_3))
            {
                *context = param_3;
                result = 1;
            }
        }
        else
        {
            char* item_c;
            int32_t item_4;

            if (param_5 == 3)
            {
                if (Sys_FreeMemory_28(data_2, &item_c, &item_4, 3))
                {
                    Camera_ApplyLineFilter_5(context, item_c, param_2 - 1);
                    context[param_2 - 1] = 0;
                    result = 1;
                }
            }
            else
            {
                Error_Show("Unknown data type.");

                while (true)
                    /* nop */
            }
        }
    }

    *(*(source_val + 0xc) + 0x14) = flagP;
    *(*(source_val + 0xc) + 0x1c) = dest_val;
    *(*(source_val + 0xc) + 0x18) = entity_val;
    return result;
}

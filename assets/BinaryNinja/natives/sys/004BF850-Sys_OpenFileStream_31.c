// Original IGI.EXE function: Sys_OpenFileStream_31 (VA 0x004BF850; static CFG gate PASS, CFG score 0.952).
#include "Sys_OpenFileStream_31.h"
int32_t Sys_OpenFileStream_31(int32_t* context, int32_t** param_2)

{
    Sys_While(context);
    int32_t* data_val = Mem_Alloc(0x14, 4);
    memset(data_val, 0, 0x14);
    data_val[1] = 0;
    *data_val = 0;
    data_val[2] = 4;
    *param_2 = data_val;

    if (Sys_CloseFileStream_31(context, &context[2]) && *context[7] == 0x28)
    {
        int32_t item_10_1 = 0;

        if (Sys_PopStack_24(context, &data_val[3]) && Sys_CloseFileStream_31(context, &context[2]) && Sys_UnexpectedEndOfFile(context, &data_val[4]))
            return 1;
    }

    return 0;
}

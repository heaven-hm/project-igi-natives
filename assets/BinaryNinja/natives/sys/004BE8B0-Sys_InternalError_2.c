// Original IGI.EXE function: Sys_InternalError_2 (VA 0x004BE8B0; static CFG gate PASS, CFG score 1.000).
#include "Sys_InternalError_2.h"
int32_t Sys_InternalError_2(int32_t* context)

{
    char* data_1 = *context + context[5];

    if (*data_1 == 4)
    {
        Sys_PushStack_29(context, *(data_1 + 1));
        int32_t result = context[5] + 3;
        context[5] = result;
        return result;
    }

    Error_Show("Internal error.");

    while (true)
        /* nop */
}

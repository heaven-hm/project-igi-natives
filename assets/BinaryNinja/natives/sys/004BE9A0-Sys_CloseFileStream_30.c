// Original IGI.EXE function: Sys_CloseFileStream_30 (VA 0x004BE9A0; static CFG gate PASS, CFG score 1.000).
#include "Sys_CloseFileStream_30.h"
int32_t Sys_CloseFileStream_30(int32_t* context)

{
    Sys_PopStack_29(context, *(*context + context[5] + 1));
    int32_t result = context[5] + 5;
    context[5] = result;
    return result;
}

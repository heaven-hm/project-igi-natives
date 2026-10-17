// Original IGI.EXE function: Sys_OpenFileStream_18 (VA 0x004B6EC0; static CFG gate PASS, CFG score 0.917).
#include "Sys_OpenFileStream_18.h"
int32_t** Sys_OpenFileStream_18(void* context, int32_t param_2, int32_t param_3, char* param_4)

{
    int32_t** result = Mem_Alloc(0x28, 4);
    memset(result, 0, 0x28);
    *result = Sys_DispatchOpcode_20(0x100, 1, context);
    result[5] = 0x43000000;
    result[6] = 0x43000000;
    result[7] = 0x43000000;
    result[8] = 0;
    result[9] = 0;
    result[4] = 0x3f800000;
    result[1] = param_2;
    result[2] = param_3;
    Sys_FreeMemory_18(result, param_4);
    return result;
}

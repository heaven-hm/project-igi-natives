// Original IGI.EXE function: Sys_OpenFileStream_18 (VA 0x004B6EC0; static CFG gate PASS, CFG score 0.917).
#include "Sys_OpenFileStream_18.h"
int32_t** Sys_OpenFileStream_18(void* a1, int32_t a2, int32_t a3, char* a4)

{
    int32_t** result = Mem_Alloc(0x28, 4);
    __builtin_memset(result, 0, 0x28);
    *result = Sys_DispatchOpcode_20(0x100, 1, a1);
    result[5] = 0x43000000;
    result[6] = 0x43000000;
    result[7] = 0x43000000;
    result[8] = 0;
    result[9] = 0;
    result[4] = 0x3f800000;
    result[1] = a2;
    result[2] = a3;
    Sys_FreeMemory_18(result, a4);
    return result;
}

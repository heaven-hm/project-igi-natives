// Original IGI.EXE function: Sys_AllocateMemory_26 (VA 0x004BADC0; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_26.h"
int32_t* Sys_AllocateMemory_26(void* context, int32_t param_2)

{
    int32_t* result = Mem_Alloc(0x10, 4);
    result[2] = param_2;
    result[1] = 0;
    *result = 0;
    Camera_SetFieldOfView_33(context + 0x44, result);
    return result;
}

// Original IGI.EXE function: Sys_AllocateMemory_20 (VA 0x004B7540; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_20.h"
void Sys_AllocateMemory_20(int32_t* context, int32_t* param_2, void* param_3)

{
    if (!param_3)
        return;

    if (context)
        *context = *(param_3 + 4);

    if (param_2)
        *param_2 = *(param_3 + 8);
}

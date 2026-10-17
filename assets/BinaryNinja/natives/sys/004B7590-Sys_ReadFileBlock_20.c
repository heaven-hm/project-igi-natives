// Original IGI.EXE function: Sys_ReadFileBlock_20 (VA 0x004B7590; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_20.h"
int32_t* Sys_ReadFileBlock_20(int32_t* context, int32_t param_2)

{
    for (int32_t* i = context; i; i = Sys_PopStack_19(i))
    {
        if (*i == param_2)
            return i;
    }

    return nullptr;
}

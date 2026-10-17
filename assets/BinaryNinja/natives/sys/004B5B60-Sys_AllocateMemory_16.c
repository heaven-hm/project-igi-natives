// Original IGI.EXE function: Sys_AllocateMemory_16 (VA 0x004B5B60; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_16.h"
int32_t Sys_AllocateMemory_16(void* context)

{
    if (!Is_ResourceLoaded(context, nullptr))
        return Sys_DispatchOpcode_7(context);

    return 1;
}

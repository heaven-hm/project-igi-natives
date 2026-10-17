// Original IGI.EXE function: Sys_ExecuteBytecode_16 (VA 0x004B5EE0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ExecuteBytecode_16.h"
int32_t* Sys_ExecuteBytecode_16()

{
    int32_t* result;

    while (true)
    {
        result = g_943e38;

        if (!*result)
            break;

        Sys_FreeMemory_16(result);
    }

    return result;
}

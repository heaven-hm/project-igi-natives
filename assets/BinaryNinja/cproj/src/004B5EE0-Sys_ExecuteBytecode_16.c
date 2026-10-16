#include "gi_platform.h"
#include "004B5EE0-Sys_ExecuteBytecode_16.h"
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

// Original IGI.EXE function: Light_SetLightColor (VA 0x00521040; static CFG gate PASS, CFG score 1.000).
#include "Light_SetLightColor.h"
void* Light_SetLightColor()

{
    void* data_2 = g_a839d0;

    if (data_2)
    {
        Sys_ExecuteBytecode_2(data_2);
        g_a839d0 = 0;
    }

    void* data_val = g_a839f0;

    if (data_val)
    {
        Sys_ExecuteBytecode_2(data_val);
        g_a839f0 = 0;
    }

    void* data_1 = g_a83c54;

    if (data_1)
    {
        Sys_ExecuteBytecode_2(data_1);
        g_a83c54 = 0;
    }

    void* result = g_a839cc;

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        g_a839cc = 0;
    }

    g_a83d24 = 0;
    g_a83d28 = 0;
    return result;
}

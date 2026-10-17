// Original IGI.EXE function: Light_SetLightColor (VA 0x00521040; static CFG gate PASS, CFG score 1.000).
#include "Light_SetLightColor.h"
void* Light_SetLightColor()

{
    void* valA2 = g_a839d0;

    if (valA2)
    {
        Sys_ExecuteBytecode_2(valA2);
        g_a839d0 = 0;
    }

    void* valA = g_a839f0;

    if (valA)
    {
        Sys_ExecuteBytecode_2(valA);
        g_a839f0 = 0;
    }

    void* valA1 = g_a83c54;

    if (valA1)
    {
        Sys_ExecuteBytecode_2(valA1);
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

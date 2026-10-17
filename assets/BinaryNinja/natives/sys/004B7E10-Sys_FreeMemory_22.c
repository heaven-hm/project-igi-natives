// Original IGI.EXE function: Sys_FreeMemory_22 (VA 0x004B7E10; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_22.h"
int32_t Sys_FreeMemory_22(char* a1)

{
    int32_t result = g_a96598;
    g_a965a8 = 1;

    if (!result)
        return result;

    void v_400;
    void arg_8;
    String_VFormat(&v_400, a1, &arg_8);
    int32_t valA = g_a43e70;

    if (valA)
        return valA(&v_400, g_a43e68);

    Error_Show(&v_400);

    while (true)
        /* nop */
}

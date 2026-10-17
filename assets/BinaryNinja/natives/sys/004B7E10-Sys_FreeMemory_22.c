// Original IGI.EXE function: Sys_FreeMemory_22 (VA 0x004B7E10; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_22.h"
int32_t Sys_FreeMemory_22(char* context)

{
    int32_t result = g_a96598;
    g_a965a8 = 1;

    if (!result)
        return result;

    void item_400;
    void arg_8;
    String_VFormat(&item_400, context, &arg_8);
    int32_t data_val = g_a43e70;

    if (data_val)
        return data_val(&item_400, g_a43e68);

    Error_Show(&item_400);

    while (true)
        /* nop */
}

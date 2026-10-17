// Original IGI.EXE function: Sys_CheckHeap_26 (VA 0x004BBE90; static CFG gate PASS, CFG score 1.000).
#include "Sys_CheckHeap_26.h"
int32_t Sys_CheckHeap_26(char* context)

{
    void item_400;
    void arg_8;
    String_VFormat(&item_400, context, &arg_8);
    int32_t data_val = g_a442c4;
    g_a442c8 += 1;

    if (data_val)
        return data_val(&item_400, g_a442b4);

    Error_Show(&item_400);

    while (true)
        /* nop */
}

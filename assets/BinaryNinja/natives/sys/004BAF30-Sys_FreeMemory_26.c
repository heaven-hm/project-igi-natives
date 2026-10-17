// Original IGI.EXE function: Sys_FreeMemory_26 (VA 0x004BAF30; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_26.h"
int32_t Sys_FreeMemory_26(char* context )

{
    void item_400;
    void arg_c;
    String_VFormat(&item_400, context, &arg_c);
    int32_t data_val = g_a43ed8;
    g_a43ed0 += 1;

    if (data_val)
        return data_val(&item_400, g_a43ec0);

    void* item_404_2 = &item_400;
    Error_Show("%s");

    while (true)
        /* nop */
}

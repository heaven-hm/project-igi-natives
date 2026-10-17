// Original IGI.EXE function: Sys_ScriptStackOverflow (VA 0x004B89C0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ScriptStackOverflow.h"
int32_t Sys_ScriptStackOverflow()

{
    int32_t data_1 = g_a9659c;

    if (data_1 < 0x100)
    {
        g_a96598 = *((data_1 << 2) + &g_a965c0);
        g_a9659c = data_1 + 1;
        return data_1 + 1;
    }

    Error_Show("Script: Stack overflow.");

    while (true)
        /* nop */
}

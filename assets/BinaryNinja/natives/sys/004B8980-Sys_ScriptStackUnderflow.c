// Original IGI.EXE function: Sys_ScriptStackUnderflow (VA 0x004B8980; static CFG gate PASS, CFG score 1.000).
#include "Sys_ScriptStackUnderflow.h"
int32_t Sys_ScriptStackUnderflow(int32_t context)

{
    int32_t data_2 = g_a9659c;

    if (data_2)
    {
        int32_t entity_val = g_a96598;
        g_a9659c = data_2 - 1;
        *(((data_2 - 1) << 2) + &g_a965c0) = entity_val;
        return Sys_ExecuteBytecode_23(context);
    }

    Error_Show("Script: Stack underflow.");

    while (true)
        /* nop */
}

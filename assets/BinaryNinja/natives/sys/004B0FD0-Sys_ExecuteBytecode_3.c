// Original IGI.EXE function: Sys_ExecuteBytecode_3 (VA 0x004B0FD0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ExecuteBytecode_3.h"
int32_t Sys_ExecuteBytecode_3(int32_t context)

{
    int32_t entity_val = g_a94a64;
    int32_t data_val = g_942304 - 1;
    g_942304 = data_val;
    *((data_val << 2) + &g_942308) = entity_val;
    return Sys_FreeMemory_3(context);
}

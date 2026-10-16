#include "Sys_ExecuteBytecode_3.h"
int32_t Sys_ExecuteBytecode_3(int32_t a1)

{
    int32_t objC = g_a94a64;
    int32_t valA = g_942304 - 1;
    g_942304 = valA;
    *((valA << 2) + &g_942308) = objC;
    return Sys_FreeMemory_3(a1);
}

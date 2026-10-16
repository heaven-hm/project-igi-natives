#include "gi_platform.h"
#include "004B0FD0-Sys_ExecuteBytecode_3.h"
int32_t Sys_ExecuteBytecode_3(int32_t a1)

{
    int32_t objC = g_a94a64;
    int32_t valA = g_942304 - 1;
    g_942304 = valA;
    (*(int32_t*)(uintptr_t)((valA << 2) + &g_942308)) = objC;
    return Sys_FreeMemory_3(a1);
}

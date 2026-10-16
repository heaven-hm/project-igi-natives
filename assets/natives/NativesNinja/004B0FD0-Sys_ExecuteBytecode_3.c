#include "004B0FD0-Sys_ExecuteBytecode_3.h"
/* 0x004b0fd0 Sys_ExecuteBytecode_3 full linked: callers=3 callees=1 */
int32_t sub_4b0fd0(int32_t a1)

{
    int32_t ecx = g_a94a64;
    int32_t eax = g_942304 - 1;
    g_942304 = eax;
    *((eax << 2) + &g_942308) = ecx;
    return sub_4b0f30(a1);
}

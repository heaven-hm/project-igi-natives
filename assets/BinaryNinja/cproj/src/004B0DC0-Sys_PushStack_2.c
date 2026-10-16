#include "gi_platform.h"
#include "004B0DC0-Sys_PushStack_2.h"
int32_t Sys_PushStack_2()

{
    __builtin_memset(&g_a950a0, 0, 0x1040);
    __builtin_memset(GI_PE_DATA_PTR(0xa94e80u), 0, 0x208);
    __builtin_memset(&g_a94a80, 0, 0x400);
    g_942304 = 8;
    g_a94a64 = 0xffffffff;
    return 0;
}

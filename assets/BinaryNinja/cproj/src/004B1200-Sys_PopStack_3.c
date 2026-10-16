#include "gi_platform.h"
#include "004B1200-Sys_PopStack_3.h"
int32_t Sys_PopStack_3()

{
    Sys_AllocateMemory_4();
    g_94396c = 1;
    __builtin_memset(&g_9436b0, 0, 0x2bc);
    g_943a18 = 0;
    int32_t result = Physics_Local();
    g_943988 = 0;
    g_943970 = &g_943974;
    g_943978 = &g_943970;
    g_943974 = 0;
    return result;
}

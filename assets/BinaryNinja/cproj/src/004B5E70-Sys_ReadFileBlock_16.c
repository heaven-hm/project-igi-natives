#include "gi_platform.h"
#include "004B5E70-Sys_ReadFileBlock_16.h"
int32_t Sys_ReadFileBlock_16()

{
    g_943e38 = &g_943e3c;
    g_943e40 = &g_943e38;
    g_943e3c = 0;
    int32_t result = Sys_FreeMemory_2(&g_943e20, 0x244, 0x2710, 0);
    g_943b90 = 0;
    return result;
}

#include "004B5E70-Sys_ReadFileBlock_16.h"
/* 0x004b5e70 Sys_ReadFileBlock_16 full linked: callers=1 callees=1 */
int32_t sub_4b5e70()

{
    g_943e38 = &g_943e3c;
    g_943e40 = &g_943e38;
    g_943e3c = 0;
    int32_t result = sub_4b0b00(&g_943e20, 0x244, 0x2710, 0);
    g_943b90 = 0;
    return result;
}

#include "004B1200-Sys_PopStack_3.h"
/* 0x004b1200 Sys_PopStack_3 full linked: callers=1 callees=3 */
int32_t sub_4b1200()

{
    sub_4b12d0();
    g_94396c = 1;
    __builtin_memset(&g_9436b0, 0, 0x2bc);
    g_943a18 = 0;
    int32_t result = sub_5098b0();
    g_943988 = 0;
    g_943970 = &g_943974;
    g_943978 = &g_943970;
    g_943974 = 0;
    return result;
}

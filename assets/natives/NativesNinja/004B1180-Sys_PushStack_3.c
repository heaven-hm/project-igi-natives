#include "004B1180-Sys_PushStack_3.h"
/* 0x004b1180 Sys_PushStack_3 full linked: callers=1 callees=0 */
int32_t sub_4b1180()

{
    int32_t result = g_94396c;
    *(result * 0x8c + &g_943704) = result;
    g_94396c = result + 1;
    return result;
}

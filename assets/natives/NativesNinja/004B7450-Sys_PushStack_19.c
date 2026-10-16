#include "004B7450-Sys_PushStack_19.h"
/* 0x004b7450 Sys_PushStack_19 full linked: callers=14 callees=0 */
int32_t sub_4b7450(int32_t a1, int32_t a2)

{
    *(a1 + (a2 << 2) + 0x14) = 0;
    return a2;
}

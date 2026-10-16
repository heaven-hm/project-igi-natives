#include "004B6D40-Sys_PushStack_17.h"
/* 0x004b6d40 Sys_PushStack_17 full linked: callers=1 callees=0 */
int32_t sub_4b6d40(void* a1)

{
    int32_t eax = 0;
    eax = *(a1 + 0x14);
    return *(*(a1 + 8) + eax * 0x24 + 4) >> 0x10 & 1;
}

#include "004BE810-Sys_AllocateMemory_30.h"
/* 0x004be810 Sys_AllocateMemory_30 full linked: callers=0 callees=1 */
int32_t sub_4be810(void* a1)

{
    sub_4bda00(a1, 1);
    int32_t result = *(a1 + 0x14) + 1;
    *(a1 + 0x14) = result;
    return result;
}

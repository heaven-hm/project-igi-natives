#include "004B6D00-Sys_ExecuteBytecode_17.h"
/* 0x004b6d00 Sys_ExecuteBytecode_17 full linked: callers=30 callees=0 */
int32_t sub_4b6d00(void* a1)

{
    int32_t eax = 0;
    eax = *(a1 + 0x14);
    return *(*(a1 + 8) + eax * 0x24 + 0xe);
}

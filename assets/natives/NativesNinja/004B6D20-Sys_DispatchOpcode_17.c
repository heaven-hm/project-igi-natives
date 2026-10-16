#include "004B6D20-Sys_DispatchOpcode_17.h"
/* 0x004b6d20 Sys_DispatchOpcode_17 full linked: callers=3 callees=0 */
int32_t sub_4b6d20(void* a1)

{
    int32_t eax = 0;
    eax = *(a1 + 0x14);
    return *(*(a1 + 8) + eax * 0x24 + 0x10);
}

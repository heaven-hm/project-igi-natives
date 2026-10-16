#include "004BE830-Sys_FreeMemory_30.h"
/* 0x004be830 Sys_FreeMemory_30 full linked: callers=0 callees=1 */
int32_t sub_4be830(void* a1)

{
    sub_4bda00(a1, 0);
    int32_t result = *(a1 + 0x14) + 1;
    *(a1 + 0x14) = result;
    return result;
}

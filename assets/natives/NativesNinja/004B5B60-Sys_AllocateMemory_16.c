#include "004B5B60-Sys_AllocateMemory_16.h"
/* 0x004b5b60 Sys_AllocateMemory_16 full linked: callers=15 callees=2 */
int32_t sub_4b5b60(void* a1)

{
    if (!Is_ResourceLoaded(a1, nullptr))
        return sub_4b1fc0(a1);

    return 1;
}

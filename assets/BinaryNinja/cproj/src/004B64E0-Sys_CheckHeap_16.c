#include "gi_platform.h"
#include "004B64E0-Sys_CheckHeap_16.h"
int32_t Sys_CheckHeap_16(void* a1)

{
    return Is_ResourceLoaded(a1, nullptr);
}

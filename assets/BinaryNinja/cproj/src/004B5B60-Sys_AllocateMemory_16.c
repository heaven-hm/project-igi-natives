#include "gi_platform.h"
#include "004B5B60-Sys_AllocateMemory_16.h"
int32_t Sys_AllocateMemory_16(void* a1)

{
    if (!Is_ResourceLoaded(a1, nullptr))
        return Sys_DispatchOpcode_7(a1);

    return 1;
}

#include "gi_platform.h"
#include "004B64B0-Sys_ResolveSymbol_16.h"
int32_t Sys_ResolveSymbol_16(int32_t* a1)

{
    int32_t result = Is_ResourceLoaded(a1, &a1);

    if (result)
        result = Sys_FreeMemory_16(a1);

    return result;
}

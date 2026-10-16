#include "004B64B0-Sys_ResolveSymbol_16.h"
/* 0x004b64b0 Sys_ResolveSymbol_16 full linked: callers=1 callees=2 */
int32_t sub_4b64b0(int32_t* a1)

{
    int32_t result = Is_ResourceLoaded(a1, &a1);

    if (result)
        result = sub_4b5c90(a1);

    return result;
}

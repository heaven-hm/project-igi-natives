#include "gi_platform.h"
#include "004FA950-Script_ParseEnumString_27.h"
uint32_t Script_ParseEnumString_27(void* a1, int32_t a2)

{
    Sys_ResolveSymbol_4((*(int32_t*)(uintptr_t)(a1 + 4)));
    char v_104;
    Resource_Unpack((*(int32_t*)(uintptr_t)(a1 + 4)), &v_104, 2);
    int32_t v_103;
    uint32_t result_1 = v_103;
    Sys_ResolveSymbol_4((*(int32_t*)(uintptr_t)(a1 + 4)));
    Resource_Unpack((*(int32_t*)(uintptr_t)(a1 + 4)), (&v_103 + 1), result_1);
    uint32_t result = result_1;
    int32_t srcS1;
    int32_t dstD2;
    dstD2 = memcpy(a2, (&v_103 + 1), result_1 & 0xfffffffc);
    int32_t count = result & 3;
    result = 1;
    memcpy(dstD2, srcS1, count);
    return result;
}

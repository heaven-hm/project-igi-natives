#include "gi_platform.h"
#include "004FA730-Script_ParseEnumString_26.h"
int32_t Script_ParseEnumString_26(void* a1, int32_t a2)

{
    int32_t dstD = a2;
    int32_t i = 0xffffffff;
    char v_104 = 9;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    char v_103 = ~i;
    char v_102;
    int32_t srcS1;
    int32_t dstD1;
    dstD1 = memcpy(&v_102, a2, ~i & 0xfffffffc);
    memcpy(dstD1, srcS1, ~i & 3);
    Sys_ResolveSymbol_4((*(int32_t*)(uintptr_t)(a1 + 4)));
    int32_t result = Sys_CloseFileStream_4((*(int32_t*)(uintptr_t)(a1 + 4)), &v_104, ~i + 2);
    result = 1;
    return result;
}

#include "gi_platform.h"
#include "004F9620-Script_ParseEnumReal32_23.h"
int32_t Script_ParseEnumReal32_23(void* a1, int32_t a2)

{
    int32_t flagP = (*(int32_t*)(uintptr_t)(a1 + 0x58));
    void* srcS = (*(int32_t*)(uintptr_t)(a1 + 0x6c));
    int32_t flagP1 = flagP + ((a2 - flagP) / 0x64 + 1) * 0x64;
    int32_t valA4 = Script_UndefinedGraphnodeda(a1);
    (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = Mem_Alloc(valA4 * flagP1, 4);
    Script_ParseEnumString_23(a1, flagP1);

    if (srcS)
    {
        int32_t objC3 = (*(int32_t*)(uintptr_t)(a1 + 0x58)) * valA4;
        int32_t srcS1;
        int32_t dstD2;
        dstD2 = memcpy((*(int32_t*)(uintptr_t)(a1 + 0x6c)), srcS, objC3 & 0xfffffffc);
        memcpy(dstD2, srcS1, objC3 & 3);
        Sys_ExecuteBytecode_2(srcS);
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x58)) = flagP1;
    uint32_t valA8 = Script_EvaluateCondition_22();
    int32_t valA9 = 0;
    valA9 = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    int32_t result = *(((valA8 * 0x180 + valA9) << 2) + &g_a96ae0);

    if (!result)
        return result;

    return result(a1, 0);
}

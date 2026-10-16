#include "gi_platform.h"
#include "004E54E0-DynCubeObj_Action.h"
int32_t DynCubeObj_Action(int32_t* a1)

{
    int32_t* srcS = g_b019f4;
    int32_t objC = (*(int32_t*)(uintptr_t)(*a1 + srcS));
    int32_t valA2 = g_b019e8 - 1;
    g_b019e8 = valA2;

    if (objC != valA2)
    {
        int32_t tmpD1 = g_b019e4;
        int32_t valA5 = *(tmpD1 + (valA2 << 2)) * g_b019f0 + g_b019e0;
        int32_t dstD2 = *(tmpD1 + (objC << 2));
        int32_t srcS1 = (*(int32_t*)(uintptr_t)(srcS + valA5));
        *(tmpD1 + (objC << 2)) = *(tmpD1 + (srcS1 << 2));
        *(g_b019e4 + (srcS1 << 2)) = dstD2;
        *(g_b019f4 + valA5) = objC;
    }

    return Sys_ExecuteBytecode_2(a1);
}

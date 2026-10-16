#include "gi_platform.h"
#include "00496CE0-Display_CheckCapabilities_11.h"
int32_t Display_CheckCapabilities_11(char* a1, void* a2, int32_t a3)

{
    int32_t dstD = 0;
    int16_t ctxB = (*(int32_t*)(uintptr_t)(*(a2 + 0xc) + 0x18));
    int32_t objC = ctxB;
    int32_t valA3;
    int32_t tmpD;
    tmpD = HIGHD(objC * a3);
    valA3 = LOWD(objC * a3);
    int32_t result = (valA3 - tmpD) >> 1;

    if (((*(int32_t*)(uintptr_t)(a2 + 0x24)) * objC) & 1)
        result += 1;
    else if (a3 & 1 && ctxB & 1)
    {
        dstD = 1;
        result += 1;
    }

    if (result <= 0)
        return result;

    Resource_Unpack((*(int32_t*)(uintptr_t)(a2 + 0x18)), 0x5ca674, result);
    Sys_ResolveSymbol_4((*(int32_t*)(uintptr_t)(a2 + 0x18)));

    if (dstD)
    {
        Sys_ExecuteBytecode_4((*(int32_t*)(uintptr_t)(a2 + 0x18)), 0xffffffff, 1);
        Sys_ResolveSymbol_4((*(int32_t*)(uintptr_t)(a2 + 0x18)));
    }

    return Display_SwapBuffers_10(0x5ca674, a1, a3, a2 + 0x40);
}

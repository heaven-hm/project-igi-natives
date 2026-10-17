// Original IGI.EXE function: Display_CheckCapabilities_11 (VA 0x00496CE0; static CFG gate PASS, CFG score 1.000).
#include "Display_CheckCapabilities_11.h"
int32_t Display_CheckCapabilities_11(char* a1, void* a2, int32_t a3)

{
    int32_t dstD = 0;
    int16_t ctxB = *(*(a2 + 0xc) + 0x18);
    int32_t objC = ctxB;
    int32_t valA3;
    int32_t tmpD;
    tmpD = HIGHD(objC * a3);
    valA3 = LOWD(objC * a3);
    int32_t result = (valA3 - tmpD) >> 1;

    if ((*(a2 + 0x24) * objC) & 1)
        result += 1;
    else if (a3 & 1 && ctxB & 1)
    {
        dstD = 1;
        result += 1;
    }

    if (result <= 0)
        return result;

    Resource_Unpack(*(a2 + 0x18), 0x5ca674, result);
    Sys_ResolveSymbol_4(*(a2 + 0x18));

    if (dstD)
    {
        Sys_ExecuteBytecode_4(*(a2 + 0x18), 0xffffffff, 1);
        Sys_ResolveSymbol_4(*(a2 + 0x18));
    }

    return Display_SwapBuffers_10(0x5ca674, a1, a3, a2 + 0x40);
}

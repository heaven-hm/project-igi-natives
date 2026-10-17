// Original IGI.EXE function: Sys_PopStack_18 (VA 0x004B7050; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_18.h"
int32_t Sys_PopStack_18(void* a1, int32_t a2)

{
    int32_t flagP = a2;
    int32_t dstD = flagP;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    void* dstD1 = a1;
    int32_t valA = Sys_DispatchOpcode_17(dstD1);
    char* i_1 = nullptr;
    a2 = 0;

    if (~i - 1 <= 0)
        return 0;

    int32_t result;

    do
    {
        a1 = i_1[flagP];
        char valA3 = Sys_ResolveSymbol_20(*(dstD1 + 0xc), a1, 0);
        int32_t valA1;

        if (!valA3)
            valA1 = valA;
        else
            valA1 = *(*(dstD1 + 8) + valA3 * 0x24 - 0x14);

        result = a2 + valA1;
        i_1 = &i_1[1];
        a2 = result;
    } while (i_1 < ~i - 1);

    return result;
}

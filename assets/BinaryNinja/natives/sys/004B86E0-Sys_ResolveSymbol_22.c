// Original IGI.EXE function: Sys_ResolveSymbol_22 (VA 0x004B86E0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_22.h"
char* Sys_ResolveSymbol_22(int32_t a1)

{
    void v_850;
    void v_830;
    void v_800;
    Script_BufInit(&v_830, &v_850, &v_800, 0x800);
    int32_t i = 0xffffffff;
    int32_t dstD = a1;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    Sys_ResolveSymbol_30(&v_850, a1, ~i - 1);
    int32_t v_878 = 0;
    char* result;

    if (!Sys_PopStack_24(&v_830, &result))
    {
        Sys_PopStack_30(&v_850);
        return 0;
    }

    Sys_PopStack_30(&v_850);
    return result;
}

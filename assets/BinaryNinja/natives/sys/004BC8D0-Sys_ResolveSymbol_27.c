// Original IGI.EXE function: Sys_ResolveSymbol_27 (VA 0x004BC8D0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_27.h"
int32_t Sys_ResolveSymbol_27(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t v_108 = a3;
    int32_t v_10c = a2;
    void v_100;
    Game_DataSymbolLoad(&v_100, "%f");
    void* dstD = &v_100;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    return Sys_CloseFileStream_4(a1, &v_100, ~i - 1);
}

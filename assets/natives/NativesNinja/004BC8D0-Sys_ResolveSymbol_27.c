#include "004BC8D0-Sys_ResolveSymbol_27.h"
/* 0x004bc8d0 Sys_ResolveSymbol_27 full linked: callers=1 callees=2 */
int32_t sub_4bc8d0(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t var_108 = a3;
    int32_t var_10c = a2;
    void var_100;
    Game_DataSymbolLoad(&var_100, "%f");
    void* edi = &var_100;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    return sub_4b1700(a1, &var_100, ~i - 1);
}

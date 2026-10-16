#include "004BC880-Sys_PopStack_27.h"
/* 0x004bc880 Sys_PopStack_27 full linked: callers=1 callees=2 */
int32_t sub_4bc880(int32_t* a1, int32_t a2)

{
    int32_t var_108 = a2;
    void var_100;
    Game_DataSymbolLoad(&var_100, "%d");
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

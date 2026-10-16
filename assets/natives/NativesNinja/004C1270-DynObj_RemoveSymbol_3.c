#include "004C1270-DynObj_RemoveSymbol_3.h"
/* 0x004c1270 DynObj_RemoveSymbol_3 full linked: callers=0 callees=2 */
int32_t sub_4c1270(float a1, int32_t* a2)

{
    int32_t* esi = a1;
    double var_30 = *(*a2 + esi[2] + 1);
    void var_20;
    Game_DataSymbolLoad(&var_20, "%f\r\n");
    void* edi = &var_20;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    sub_4b1700(*esi, &var_20, ~i - 1);
    int32_t result = esi[2] + 5;
    esi[2] = result;
    return result;
}

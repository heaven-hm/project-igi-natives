#include "004CFB30-DynObj_FindSymbol_15.h"
/* 0x004cfb30 DynObj_FindSymbol_15 full linked: callers=1 callees=6 */
int32_t sub_4cfb30(int32_t* a1)

{
    if (a1[4])
    {
        sub_4b0d10(a1[5]);
        a1[5] = 0;
    }

    int32_t edx = a1[2];
    int32_t var_8 = a1[3];
    int32_t var_4 = edx;

    if (*((sub_4cea90() << 2) + &g_a94e84))
        (*((sub_4cea90() << 2) + &g_a94e84))(&var_8);

    Resource_Flush(a1[2]);
    sub_4af960(a1);
    return sub_4b0d10(a1);
}

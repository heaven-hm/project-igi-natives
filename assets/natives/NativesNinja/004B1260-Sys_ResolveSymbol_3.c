#include "004B1260-Sys_ResolveSymbol_3.h"
/* 0x004b1260 Sys_ResolveSymbol_3 full linked: callers=1 callees=2 */
int32_t sub_4b1260()

{
    int32_t* i_1 = g_943970;

    for (int32_t* i = *i_1; i; i = *i)
    {
        sub_4bada0(i_1);
        i_1 = i;
    }

    return sub_5098d0();
}

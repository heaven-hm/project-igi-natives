#include "004BAD40-Sys_ResolveSymbol_25.h"
/* 0x004bad40 Sys_ResolveSymbol_25 full linked: callers=1 callees=3 */
int32_t sub_4bad40()

{
    int32_t* eax = g_a43e88;

    if (eax)
    {
        sub_4c03c0(eax);
        g_a43e88 = 0;
    }

    int32_t* i_1 = g_a43ea0;

    for (int32_t* i = *i_1; i; i = *i)
    {
        sub_4bada0(i_1);
        i_1 = i;
    }

    int32_t result = g_a43e8c;

    if (!result)
        return result;

    int32_t __saved_esi_2 = result;
    return Warning_Show("%d script symbol references not deallocated.");
}

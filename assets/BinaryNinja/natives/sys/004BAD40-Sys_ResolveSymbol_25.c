#include "Sys_ResolveSymbol_25.h"
int32_t Sys_ResolveSymbol_25()

{
    int32_t* valA = g_a43e88;

    if (valA)
    {
        DynObj_RegisterSymbol_2(valA);
        g_a43e88 = 0;
    }

    int32_t* i_1 = g_a43ea0;

    for (int32_t* i = *i_1; i; i = *i)
    {
        Sys_CheckHeap_25(i_1);
        i_1 = i;
    }

    int32_t result = g_a43e8c;

    if (!result)
        return result;

    int32_t __saved_esi_2 = result;
    return Warning_Show("%d script symbol references not deallocated.");
}

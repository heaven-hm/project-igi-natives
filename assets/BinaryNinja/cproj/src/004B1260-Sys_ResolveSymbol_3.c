#include "gi_platform.h"
#include "004B1260-Sys_ResolveSymbol_3.h"
int32_t Sys_ResolveSymbol_3()

{
    int32_t* i_1 = g_943970;

    for (int32_t* i = *i_1; i; i = *i)
    {
        Sys_CheckHeap_25(i_1);
        i_1 = i;
    }

    return Physics_Local_2();
}

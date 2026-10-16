#include "004B5AF0-Sys_ResolveSymbol_15.h"
/* 0x004b5af0 Sys_ResolveSymbol_15 full linked: callers=2 callees=1 */
int32_t sub_4b5af0(char* a1, char* a2)

{
    char* edi = a2;
    char i = *edi;

    if (!i)
    {
        *a1 = 0;
        return i;
    }

    char* esi = a1;

    do
    {
        int32_t i_1 = i;
        int32_t ecx;
        i = sub_4ad73d(ecx);
        *esi = i;
        i = edi[1];
        esi = &esi[1];
        edi = &edi[1];
    } while (i);

    *esi = i;
    return i;
}

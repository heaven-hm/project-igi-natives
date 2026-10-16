#include "004BAB30-Sys_UndefinedSymbolS.h"
/* 0x004bab30 Sys_UndefinedSymbolS full linked: callers=1 callees=5 */
int32_t sub_4bab30(char* a1)

{
    char* esi = a1;

    if (sub_4bab80(esi, &a1))
    {
        Symbol_Remove(g_a43e88, esi);
        sub_4baa90(a1);
        return sub_4b0d10(a1);
    }

    Error_Show("Undefined symbol: '%s'");

    while (true)
        /* nop */
}

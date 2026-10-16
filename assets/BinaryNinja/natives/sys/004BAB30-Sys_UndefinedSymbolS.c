#include "Sys_UndefinedSymbolS.h"
int32_t Sys_UndefinedSymbolS(char* a1)

{
    char* srcS = a1;

    if (Sys_ReadFileBlock_25(srcS, &a1))
    {
        Symbol_Remove(g_a43e88, srcS);
        Sys_FreeMemory_25(a1);
        return Sys_ExecuteBytecode_2(a1);
    }

    Error_Show("Undefined symbol: '%s'");

    while (true)
        /* nop */
}

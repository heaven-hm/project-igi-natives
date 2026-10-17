// Original IGI.EXE function: Sys_UndefinedSymbolS (VA 0x004BAB30; static CFG gate PASS, CFG score 1.000).
#include "Sys_UndefinedSymbolS.h"
int32_t Sys_UndefinedSymbolS(char* context)

{
    char* source_val = context;

    if (Sys_ReadFileBlock_25(source_val, &context))
    {
        Symbol_Remove(g_a43e88, source_val);
        Sys_FreeMemory_25(context);
        return Sys_ExecuteBytecode_2(context);
    }

    Error_Show("Undefined symbol: '%s'");

    while (true)
        /* nop */
}

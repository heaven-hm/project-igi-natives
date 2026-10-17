// IGI native provenance: Sys_UndefinedSymbolS - 0x004BAB30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BAB30-Sys_UndefinedSymbolS.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

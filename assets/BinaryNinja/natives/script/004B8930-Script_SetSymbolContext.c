// IGI native provenance: Script_SetSymbolContext - 0x004B8930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B8930-Script_SetSymbolContext.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_SetSymbolContext.h"
int32_t Script_SetSymbolContext(char* context, int32_t param_2)

// Sig: void Script_SetSymbolContext(byte *symbol_name,int** symbol_buf)
// Note: Name from igi.exe error string inside function:
// "Script_SetSymbolContext(): Symbol not found: %s". Sets the symbol context
// for subsequent script operations.
{
    char* source_val = context;
    int32_t result = Sys_ReadFileBlock_25(source_val, &context);

    if (result)
    {
        *(context + 0x18) = param_2;
        return result;
    }

    char* item_8_1 = source_val;
    Error_Show("Script_SetSymbolContext(): Symbol not found: %s");

    while (true)
        /* nop */
}

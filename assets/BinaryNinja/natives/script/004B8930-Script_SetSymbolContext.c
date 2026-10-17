// Original IGI.EXE function: Script_SetSymbolContext (VA 0x004B8930; static CFG gate PASS, CFG score 1.000).
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

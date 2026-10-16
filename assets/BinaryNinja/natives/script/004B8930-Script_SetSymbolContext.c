#include "Script_SetSymbolContext.h"
int32_t Script_SetSymbolContext(char* a1, int32_t a2)

// Sig: void Script_SetSymbolContext(byte *symbol_name,int** symbol_buf)
// Note: Name from igi.exe error string inside function:
// "Script_SetSymbolContext(): Symbol not found: %s". Sets the symbol context
// for subsequent script operations.
{
    char* srcS = a1;
    int32_t result = Sys_ReadFileBlock_25(srcS, &a1);

    if (result)
    {
        *(a1 + 0x18) = a2;
        return result;
    }

    char* v_8_1 = srcS;
    Error_Show("Script_SetSymbolContext(): Symbol not found: %s");

    while (true)
        /* nop */
}

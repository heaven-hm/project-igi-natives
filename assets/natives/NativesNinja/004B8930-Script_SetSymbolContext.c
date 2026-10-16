#include "004B8930-Script_SetSymbolContext.h"
/* 0x004b8930 Script_SetSymbolContext full linked: callers=19 callees=2 */
int32_t Script_SetSymbolContext(char* a1, int32_t a2)

// Sig: void Script_SetSymbolContext(byte *symbol_name,int** symbol_buf)
// Note: Name from igi.exe error string inside function:
// "Script_SetSymbolContext(): Symbol not found: %s". Sets the symbol context
// for subsequent script operations.
{
    char* esi = a1;
    int32_t result = sub_4bab80(esi, &a1);

    if (result)
    {
        *(a1 + 0x18) = a2;
        return result;
    }

    char* var_8_1 = esi;
    Error_Show("Script_SetSymbolContext(): Symbol not found: %s");

    while (true)
        /* nop */
}

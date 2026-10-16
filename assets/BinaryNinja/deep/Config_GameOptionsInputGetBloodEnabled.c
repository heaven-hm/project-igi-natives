/* LOGIC NOTE (Config_GameOptionsInputGetBloodEnabled @ 0x00404340)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Conf
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_GameOptionsInputGetBloodEnabled.h"

int32_t Config_GameOptionsInputGetBloodEnabled(int32_t arg1)

// Sig: int Config_GameOptionsInputGetBloodEnabled()
// Note: RETURNS the blood-enabled flag from the game-options config context
// (1/0). Takes no args.
{
    int32_t v_18 = *(Config_GetActivePlayerProfileRecord() + 8);
    char* v_8 = &data_567c74;
    double v_10 = *(Config_GetActivePlayerProfileRecord() + 8);
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

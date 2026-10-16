/* LOGIC NOTE (Config_GameOptionsInputGetMouseSensitivity @ 0x00404290)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Conf
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_GameOptionsInputGetMouseSensitivity.h"

int32_t Config_GameOptionsInputGetMouseSensitivity(int32_t arg1)

// Sig: int Config_GameOptionsInputGetMouseSensitivity()
// Note: RETURNS the stored mouse-sensitivity integer from the game-options
// config context. Takes no args.
{
    int32_t v_18 = *(Config_GetActivePlayerProfileRecord() + 0x53c);
    char* v_8 = &data_567c74;
    double v_10 = *(Config_GetActivePlayerProfileRecord() + 0x53c);
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

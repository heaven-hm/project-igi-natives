/* LOGIC NOTE (Config_GameOptionsInputSetMouseSensitivity @ 0x00404230)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Conf
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_GameOptionsInputSetMouseSensitivity.h"

int32_t Config_GameOptionsInputSetMouseSensitivity(long double arg1 @ fp0, int32_t arg2, float arg3 @ 0xc)

// Sig: void Config_GameOptionsInputSetMouseSensitivity(int value)
// Note: Sets mouse-sensitivity in the config game-options write-out context.
// Param: value = sensitivity as stored by the options screen (integer scale).
{
    Profile_ValueSet(arg3, 0f);
    *(Config_GetActivePlayerProfileRecord() + 0x53c) = arg1;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    __builtin_memcpy(arg2, &v_18, 0x18);
    return arg2;
}

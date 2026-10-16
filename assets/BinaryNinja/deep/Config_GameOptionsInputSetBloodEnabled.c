/* LOGIC NOTE (Config_GameOptionsInputSetBloodEnabled @ 0x004042E0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Conf
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_GameOptionsInputSetBloodEnabled.h"

int32_t Config_GameOptionsInputSetBloodEnabled(int80_t arg1 @ fp0, int32_t arg2, float arg3 @ 0xc)

// Sig: void Config_GameOptionsInputSetBloodEnabled(int blood)
// Note: Sets blood-enabled in the config game-options write-out context. Param:
// blood = 1 on, 0 off.
{
    float v_30 = 0f;
    Profile_ValueSet(arg3, v_30);
    *(Config_GetActivePlayerProfileRecord() + 8) = arg1;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    __builtin_memcpy(arg2, &v_18, 0x18);
    return arg2;
}

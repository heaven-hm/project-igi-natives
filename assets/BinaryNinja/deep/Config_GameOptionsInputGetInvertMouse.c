/* LOGIC NOTE (Config_GameOptionsInputGetInvertMouse @ 0x004041D0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Conf
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_GameOptionsInputGetInvertMouse.h"

int32_t Config_GameOptionsInputGetInvertMouse(int32_t arg1)

// Sig: int Config_GameOptionsInputGetInvertMouse()
// Note: RETURNS the invert-mouse setting when the engine writes/reads a config
// game-options block (1 = inverted, 0 = normal). Takes no args. Pairs with
// Config_GameOptionsInputSetInvertMouse.
{
    int32_t ctx = 0;
    ctx = !*(Config_GetActivePlayerProfileRecord() + 0x538);
    int32_t v_18 = ctx;
    int32_t tmp_1 = 0;
    tmp_1 = !*(Config_GetActivePlayerProfileRecord() + 0x538);
    char* v_8 = &data_567c74;
    double v_10 = tmp_1;
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

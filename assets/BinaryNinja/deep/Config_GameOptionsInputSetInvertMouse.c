/* LOGIC NOTE (Config_GameOptionsInputSetInvertMouse @ 0x00404160)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Conf
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_GameOptionsInputSetInvertMouse.h"

int32_t Config_GameOptionsInputSetInvertMouse(long double arg1 @ fp0, int32_t arg2, float arg3 @ 0xc)

// Sig: void Config_GameOptionsInputSetInvertMouse(int invert)
// Note: Sets invert-mouse in the GAME-OPTIONS block while a config file is
// parsed (the GO_* writer side; runtime getter/setter pair lives on the
// profile). Param: invert = 1 inverted, 0 normal. Use only inside config .qsc
// write-out contexts.
{
    Profile_ValueSet(arg3, 0f);
    long double f0 = 0.0;
    arg1 - f0;
    char result_2;

    result_2 = !(*(&((arg1 < f0 ? 1 : 0) << 8 | (FCMP_UO(arg1, f0) ? 1 : 0) << 0xa
        | (arg1 == f0 ? 1 : 0) << 0xe | 0x800) + 1) & 0x40) ? 0 : 1;

    *(Config_GetActivePlayerProfileRecord() + 0x538) = result_2;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    __builtin_memcpy(arg2, &v_18, 0x18);
    return arg2;
}

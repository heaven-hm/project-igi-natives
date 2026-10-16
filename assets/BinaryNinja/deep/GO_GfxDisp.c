/* LOGIC NOTE (GO_GfxDisp @ 0x00403950)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , sub_
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "GO_GfxDisp.h"

int32_t GO_GfxDisp(int32_t arg1, float arg2 @ 0xc)

// Sig: int GO_GfxDisp(int displayMode)
// Note: Sets display-mode selection for the current profile. Param: displayMode
// = mode index from the retail display list (see Display_GetActiveMode/display
// table). Use in config scripts. igi.exe registers it with argc=3 at its site;
// the extra args go unused by the setter itself.
{
    int32_t result = Script_GetArg(arg2, 0);
    int32_t tmp = data_bc2380;
    int32_t v_2c = 1;
    float v_30 = arg2;
    *(tmp * 0x564 + &data_bc1e30) = result;
    *(data_bc2380 * 0x564 + &data_bc1e34) = Script_GetArg(v_30, v_2c);
    int32_t result_2 = Script_GetArg(arg2, 2);
    int32_t tmp_3 = data_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    *(tmp_3 * 0x564 + &data_bc1e38) = result_2;
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

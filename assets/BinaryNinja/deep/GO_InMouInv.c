/* LOGIC NOTE (GO_InMouInv @ 0x00403870)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , sub_
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "GO_InMouInv.h"

int32_t GO_InMouInv(int32_t arg1, float arg2 @ 0xc)

// Sig: int GO_InMouInv(int invert)
// Note: Toggles inverted mouse-look for the current profile. Param: invert = 1
// invert Y axis, 0 normal. Use in config scripts. Returns 1.
{
    int32_t result_1 = Script_GetArg(arg2, 0);
    int32_t tmp = data_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    *(tmp * 0x564 + &data_bc235c) = result_1;
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

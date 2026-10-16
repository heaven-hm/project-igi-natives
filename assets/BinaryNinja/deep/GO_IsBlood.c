/* LOGIC NOTE (GO_IsBlood @ 0x00403DF0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , sub_
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "GO_IsBlood.h"

int32_t GO_IsBlood(int32_t arg1, float arg2 @ 0xc)

// Sig: int GO_IsBlood(int blood)
// Note: Toggles blood effects for the current profile. Param: blood = 1 on, 0
// off. Use in config scripts. Returns 1.
{
    char result_1 = Script_GetArg(arg2, 0);
    int32_t tmp = data_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    *(tmp * 0x564 + &data_bc1e2c) = result_1;
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

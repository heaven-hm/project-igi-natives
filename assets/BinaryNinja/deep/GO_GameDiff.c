/* LOGIC NOTE (GO_GameDiff @ 0x00403AC0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , sub_
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "GO_GameDiff.h"

int32_t GO_GameDiff(int32_t arg1, float arg2 @ 0xc)

// Sig: int GO_GameDiff(int difficulty)
// Note: Sets game difficulty for the current profile. Param: difficulty = 0
// easy, 1 medium, 2 hard (retail order). Use in config scripts. Returns 1.
{
    int32_t result_1 = Script_GetArg(arg2, 0);
    int32_t tmp = data_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    *(tmp * 0x564 + &data_bc1e24) = result_1;
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

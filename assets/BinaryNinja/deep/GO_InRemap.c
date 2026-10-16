/* LOGIC NOTE (GO_InRemap @ 0x004037C0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , sub_
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "GO_InRemap.h"

int32_t GO_InRemap(int32_t arg1, float arg2 @ 0xc)

// Sig: int GO_InRemap(int key1, int key2, int action)
// Note: Adds one input binding (key remap) to the current profile. Params: key1
// = primary key code, key2 = secondary key code, action = in-game action id
// being bound. Use in input/config scripts, repeat once per binding. Returns 1.
{
    int32_t result = data_bc2380;
    int32_t ctx_4 = result * 0x159;
    int32_t result_2 = result * 0x73 + *((ctx_4 << 2) + &data_bc2358) - 0x73;
    int32_t result_4 = Script_GetArg(arg2, 0);
    int32_t v_30 = 1;
    *(result_2 * 0xc + &data_bc25bc) = result_4;
    *(result_2 * 0xc + 0xbc25c0) = Script_GetArg(arg2, v_30);
    *(result_2 * 0xc + 0xbc25c4) = Script_GetArg(arg2, 2) & 0x3fffffff;
    *((ctx_4 << 2) + &data_bc2358) += 1;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

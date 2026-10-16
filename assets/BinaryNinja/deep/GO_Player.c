/* LOGIC NOTE (GO_Player @ 0x004036B0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Leve
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "GO_Player.h"

int32_t GO_Player(int32_t arg1, float arg2 @ 0xc)

// Sig: int GO_Player(char* name)
// Note: Adds a player profile named 'name' to the config while a .cfg/GO script
// block is being read; subsequent GO_* settings apply to this profile. Param:
// name = profile display name (string). Use inside config/profile scripts, must
// come before that profile's GO_* settings. Returns 1.
{
    int32_t ctx_1 = data_bc2380 + 1;
    data_bc2380 = ctx_1;
    *(ctx_1 * 0x564 + &data_bc2358) = 0;
    char* v_24 = 0x20;
    (&data_bc2384)[data_bc2380 * 0x159] = 1;
    int32_t result_8 = data_bc2380 * 0x45;
    int32_t v_2c = 0;
    float v_30 = arg2;
    Sys_ResolveSymbol_23(v_30, v_2c, &(&data_bc2364)[result_8 * 5], v_24);
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

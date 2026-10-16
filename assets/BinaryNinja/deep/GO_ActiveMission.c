/* LOGIC NOTE (GO_ActiveMission @ 0x00403750)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , sub_
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "GO_ActiveMission.h"

int32_t GO_ActiveMission(int32_t arg1, float arg2 @ 0xc)

// Sig: int GO_ActiveMission(int mission)
// Note: Sets the active (last-played) mission number for the current player
// profile. Param: mission = mission index 1..14. Use in profile/config scripts
// after GO_Player. Returns 1.
{
    int32_t result_1 = Script_GetArg(arg2, 0);
    int32_t tmp = data_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    (&data_bc2384)[tmp * 0x159] = result_1;
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}

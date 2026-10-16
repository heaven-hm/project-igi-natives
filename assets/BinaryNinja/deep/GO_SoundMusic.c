/* LOGIC NOTE (GO_SoundMusic @ 0x00403EF0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Prof
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "GO_SoundMusic.h"

int32_t GO_SoundMusic(long double arg1 @ fp0, int32_t arg2, float arg3 @ 0xc)

// Sig: int GO_SoundMusic(float volume)
// Note: Sets music volume for the current profile. Param: volume = float
// 0.0-1.0. Use in config scripts. Returns 1.
{
    char result = Script_GetArg(arg3, 0);
    int32_t tmp = data_bc2380;
    float v_2c = 1.40129846e-45f;
    float v_30 = arg3;
    *(tmp * 0x564 + &data_bc2055) = result;
    Profile_ValueSet(v_30, v_2c);
    int32_t ctx_5 = data_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    *(ctx_5 * 0x564 + &data_bc204c) = arg1;
    __builtin_memcpy(arg2, &v_18, 0x18);
    return arg2;
}

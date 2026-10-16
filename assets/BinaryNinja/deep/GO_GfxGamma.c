/* LOGIC NOTE (GO_GfxGamma @ 0x00404080)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Prof
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "GO_GfxGamma.h"

int32_t GO_GfxGamma(long double arg1 @ fp0, int32_t arg2, float arg3 @ 0xc)

// Sig: int GO_GfxGamma(float gamma)
// Note: Sets gamma for the current profile. Param: gamma = float, retail
// default 1.0 (range ~0.5-3.0 clamped elsewhere). Use in config scripts.
// Returns 1.
{
    Profile_ValueSet(arg3, 0f);
    int32_t ctx = data_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    *(ctx * 0x564 + &data_bc2044) = arg1;
    __builtin_memcpy(arg2, &v_18, 0x18);
    return arg2;
}

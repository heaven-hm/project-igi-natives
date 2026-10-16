#include "00404080-GO_GfxGamma.h"
/* 0x00404080 GO_GfxGamma full linked: callers=0 callees=2 */
int32_t GO_GfxGamma(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: int GO_GfxGamma(float gamma)
// Note: Sets gamma for the current profile. Param: gamma = float, retail
// default 1.0 (range ~0.5-3.0 clamped elsewhere). Use in config scripts.
// Returns 1.
{
    Profile_ValueSet(a3, 0f);
    int32_t ecx = g_bc2380;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    *(ecx * 0x564 + &g_bc2044) = a1;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

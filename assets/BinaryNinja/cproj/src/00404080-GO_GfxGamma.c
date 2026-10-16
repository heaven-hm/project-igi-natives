#include "gi_platform.h"
#include "00404080-GO_GfxGamma.h"
int32_t GO_GfxGamma(long double a1 , int32_t a2, float a3 )

// Sig: int GO_GfxGamma(float gamma)
// Note: Sets gamma for the current profile. Param: gamma = float, retail
// default 1.0 (range ~0.5-3.0 clamped elsewhere). Use in config scripts.
// Returns 1.
{
    Profile_ValueSet(a3, 0.0f);
    int32_t objC = g_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    *(objC * 0x564 + &g_bc2044) = a1;
    memcpy(a2, &v_18, 0x18);
    return a2;
}

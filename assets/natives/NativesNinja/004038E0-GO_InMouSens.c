#include "004038E0-GO_InMouSens.h"
/* 0x004038e0 GO_InMouSens full linked: callers=0 callees=2 */
int32_t GO_InMouSens(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: float GO_InMouSens(float sensitivity)
// Note: Sets mouse sensitivity for the current profile. Param: sensitivity =
// float multiplier as saved by the options screen. Use in config scripts.
// Returns 1.
{
    Profile_ValueSet(a3, 0f);
    int32_t ecx = g_bc2380;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    (&g_bc2360)[ecx * 0x159] = a1;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

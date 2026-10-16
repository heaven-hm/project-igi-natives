#include "gi_platform.h"
#include "004038E0-GO_InMouSens.h"
int32_t GO_InMouSens(long double a1 , int32_t a2, float a3 )

// Sig: float GO_InMouSens(float sensitivity)
// Note: Sets mouse sensitivity for the current profile. Param: sensitivity =
// float multiplier as saved by the options screen. Use in config scripts.
// Returns 1.
{
    Profile_ValueSet(a3, 0.0f);
    int32_t objC = g_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    (&g_bc2360)[objC * 0x159] = a1;
    memcpy(a2, &v_18, 0x18);
    return a2;
}

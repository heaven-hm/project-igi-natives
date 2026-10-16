#include "gi_platform.h"
#include "00488E90-LevelFlow_IsCountryUSA.h"
int32_t LevelFlow_IsCountryUSA(int32_t a1)

// Sig: int LevelFlow_IsCountryUSA()
// Note: RETURNS 1 if the running build is a USA country build, 0 otherwise
// (affects censorship/content paths like blood). Takes no args. Check before
// enabling content that country builds gate.
{
    int32_t v_18 = FX_SmokeEmit_26();
    char* v_8 = &g_567c74;
    double v_10 = FX_SmokeEmit_26();
    memcpy(a1, &v_18, 0x18);
    return a1;
}

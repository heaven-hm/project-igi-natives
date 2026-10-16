#include "00488E90-LevelFlow_IsCountryUSA.h"
/* 0x00488e90 LevelFlow_IsCountryUSA full linked: callers=0 callees=3 */
int32_t LevelFlow_IsCountryUSA(int32_t a1)

// Sig: int LevelFlow_IsCountryUSA()
// Note: RETURNS 1 if the running build is a USA country build, 0 otherwise
// (affects censorship/content paths like blood). Takes no args. Check before
// enabling content that country builds gate.
{
    int32_t var_18 = sub_48f2d0();
    char* var_8 = &g_567c74;
    double var_10 = sub_48f2d0();
    memcpy(a1, &var_18, 0x18);
    return a1;
}

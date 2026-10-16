#include "0044DF40-AIFunction_SetSecondaryViewGamma.h"
/* 0x0044df40 AIFunction_SetSecondaryViewGamma full linked: callers=0 callees=2 */
int32_t AIFunction_SetSecondaryViewGamma(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void AIFunction_SetSecondaryViewGamma(int gamma)
// Note: Sets secondary-view gamma shaping factor. Param: gamma = engine factor.
{
    Profile_ValueSet(a3, 0f);
    g_5bda58->pad[0xc8] = a1 * 0.0174532924f;
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

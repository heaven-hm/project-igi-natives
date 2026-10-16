#include "0044DD90-AIFunction_SetViewGamma.h"
/* 0x0044dd90 AIFunction_SetViewGamma full linked: callers=0 callees=2 */
int32_t AIFunction_SetViewGamma(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void AIFunction_SetViewGamma(int gamma)
// Note: Sets view GAMMA - secondary vision shaping factor for detection. Param:
// gamma = engine factor. Use in AI init alongside SetViewAlpha.
{
    Profile_ValueSet(a3, 0f);
    g_5bda58->pad[0xa8] = a1 * 0.0174532924f;
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

#include "0044DD30-AIFunction_SetViewAlpha.h"
/* 0x0044dd30 AIFunction_SetViewAlpha full linked: callers=0 callees=2 */
int32_t AIFunction_SetViewAlpha(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void AIFunction_SetViewAlpha(int alpha)
// Note: Sets view ALPHA - the detection speed/gain of normal vision. Param:
// alpha = engine detection factor. Higher = spots player faster. Use in
// AIEVENT_CREATE.
{
    Profile_ValueSet(a3, 0f);
    g_5bda58->pad[0xa0] = a1 * 0.0174532924f;
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

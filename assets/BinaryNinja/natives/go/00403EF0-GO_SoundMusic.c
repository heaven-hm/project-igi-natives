#include "GO_SoundMusic.h"
int32_t GO_SoundMusic(long double a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: int GO_SoundMusic(float volume)
// Note: Sets music volume for the current profile. Param: volume = float
// 0.0-1.0. Use in config scripts. Returns 1.
{
    char valA = Script_GetArg(a3, 0);
    int32_t tmpD = g_bc2380;
    float v_2c = 1.40129846e-45f;
    float v_30 = a3;
    *(tmpD * 0x564 + &g_bc2055) = valA;
    Profile_ValueSet(v_30, v_2c);
    int32_t objC5 = g_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    *(objC5 * 0x564 + &g_bc204c) = a1;
    memcpy(a2, &v_18, 0x18);
    return a2;
}

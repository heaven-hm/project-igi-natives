#include "00403EF0-GO_SoundMusic.h"
/* 0x00403ef0 GO_SoundMusic full linked: callers=0 callees=3 */
int32_t GO_SoundMusic(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: int GO_SoundMusic(float volume)
// Note: Sets music volume for the current profile. Param: volume = float
// 0.0-1.0. Use in config scripts. Returns 1.
{
    char eax = sub_4b8a20(a3, 0);
    int32_t edx = g_bc2380;
    float var_2c = 1.40129846e-45f;
    float var_30 = a3;
    *(edx * 0x564 + &g_bc2055) = eax;
    Profile_ValueSet(var_30, var_2c);
    int32_t ecx_5 = g_bc2380;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    *(ecx_5 * 0x564 + &g_bc204c) = a1;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

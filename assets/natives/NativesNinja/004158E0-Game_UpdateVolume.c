#include "004158E0-Game_UpdateVolume.h"
/* 0x004158e0 Game_UpdateVolume full linked: callers=0 callees=6 */
int32_t Game_UpdateVolume(int32_t a1)

// Sig: void Game_UpdateVolume(void)
// Note: Applies current profile music/sfx volumes to the live audio engines.
// Takes no args.
{
    int32_t ecx;
    long double st0;
    st0 = Config_SaveGameOptions_2();
    int32_t var_24 = ecx;
    float var_24_1 = st0;
    int32_t ecx_1;
    long double st0_1;
    st0_1 = Config_SaveGameOptions_2();
    int32_t var_28 = ecx_1;
    Music_SetVolume(st0_1, var_24_1);
    Music_SetSfxVolume(Config_RegisterOptions_2());
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

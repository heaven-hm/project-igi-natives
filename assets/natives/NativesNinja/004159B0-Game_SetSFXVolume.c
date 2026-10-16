#include "004159B0-Game_SetSFXVolume.h"
/* 0x004159b0 Game_SetSFXVolume full linked: callers=0 callees=3 */
int32_t Game_SetSFXVolume(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void Game_SetSFXVolume(float volume)
// Note: Live-sets sound-effects volume through the profile real-value setter
// (fcn.004B8A50), same 1.0f construction pattern. Param: volume = float
// 0.0-1.0. Called by ingamemenu.qvm options sliders.
{
    Profile_ValueSet(a3, 0f);
    Music_SetSfxVolume(a1);
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

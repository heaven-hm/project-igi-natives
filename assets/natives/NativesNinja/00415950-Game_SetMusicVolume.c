#include "00415950-Game_SetMusicVolume.h"
/* 0x00415950 Game_SetMusicVolume full linked: callers=0 callees=3 */
int32_t Game_SetMusicVolume(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void Game_SetMusicVolume(float volume)
// Note: Live-sets music volume through the profile real-value setter
// (fcn.004B8A50): retail body constructs 1.0f (0x3FF00000) and stores via fstp.
// Param: volume = float 0.0-1.0. Called by ingamemenu.qvm options sliders.
{
    Profile_ValueSet(a3, 0f);
    a3 = a1;
    float var_30 = a3;
    Music_SetVolume(var_30, a3);
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}

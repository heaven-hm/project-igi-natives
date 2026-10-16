#include "Game_SetMusicVolume.h"
int32_t Game_SetMusicVolume(long double a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: void Game_SetMusicVolume(float volume)
// Note: Live-sets music volume through the profile real-value setter
// Param: volume = float 0.0-1.0. Called by ingamemenu.qvm options sliders.
{
    Profile_ValueSet(a3, 0f);
    a3 = a1;
    float v_30 = a3;
    Music_SetVolume(v_30, a3);
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}

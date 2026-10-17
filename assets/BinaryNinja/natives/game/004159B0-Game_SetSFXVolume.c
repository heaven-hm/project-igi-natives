// Original IGI.EXE function: Game_SetSFXVolume (VA 0x004159B0; static CFG gate PASS, CFG score 0.889).
#include "Game_SetSFXVolume.h"
int32_t Game_SetSFXVolume(long double context , int32_t param_2, float param_3 )

// Sig: void Game_SetSFXVolume(float volume)
// Note: Live-sets sound-effects volume through the profile real-value setter
// (fcn.004B8A50), same 1.0f construction pattern. Param: volume = float
// 0.0-1.0. Called by ingamemenu.qvm options sliders.
{
    Profile_ValueSet(param_3, 0.0f);
    Music_SetSfxVolume(context);
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}

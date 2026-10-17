// Original IGI.EXE function: Game_SetMusicVolume (VA 0x00415950; static CFG gate PASS, CFG score 0.889).
#include "Game_SetMusicVolume.h"
int32_t Game_SetMusicVolume(long double context , int32_t param_2, float param_3 )

// Sig: void Game_SetMusicVolume(float volume)
// Note: Live-sets music volume through the profile real-value setter
// Param: volume = float 0.0-1.0. Called by ingamemenu.qvm options sliders.
{
    Profile_ValueSet(param_3, 0.0f);
    param_3 = context;
    float item_30 = param_3;
    Music_SetVolume(item_30, param_3);
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}

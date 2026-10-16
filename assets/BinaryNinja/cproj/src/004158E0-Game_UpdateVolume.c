#include "gi_platform.h"
#include "004158E0-Game_UpdateVolume.h"
int32_t Game_UpdateVolume(int32_t a1)

// Sig: void Game_UpdateVolume(void)
// Note: Applies current profile music/sfx volumes to the live audio engines.
// Takes no args.
{
    int32_t objC;
    long double fp0;
    fp0 = Config_SaveGameOptions_2();
    int32_t v_24 = objC;
    float v_24_1 = fp0;
    int32_t objC1;
    long double fp0_1;
    fp0_1 = Config_SaveGameOptions_2();
    int32_t v_28 = objC1;
    Music_SetVolume(fp0_1, v_24_1);
    Music_SetSfxVolume(Config_RegisterOptions_2());
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

// Original IGI.EXE function: Game_UpdateVolume (VA 0x004158E0; static CFG gate PASS, CFG score 0.944).
#include "Game_UpdateVolume.h"
int32_t Game_UpdateVolume(int32_t context)

// Sig: void Game_UpdateVolume(void)
// Note: Applies current profile music/sfx volumes to the live audio engines.
// Takes no args.
{
    int32_t entity_val;
    long double fp0;
    fp0 = Config_SaveGameOptions_2();
    int32_t item_24 = entity_val;
    float item_24_1 = fp0;
    int32_t entity_1;
    long double fp0_1;
    fp0_1 = Config_SaveGameOptions_2();
    int32_t item_28 = entity_1;
    Music_SetVolume(fp0_1, item_24_1);
    Music_SetSfxVolume(Config_RegisterOptions_2());
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

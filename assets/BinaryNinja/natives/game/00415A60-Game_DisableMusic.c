// Original IGI.EXE function: Game_DisableMusic (VA 0x00415A60; static CFG gate FAIL, CFG score 0.667).
#include "Game_DisableMusic.h"
int32_t Game_DisableMusic(int32_t context)

// Sig: void Game_DisableMusic(void)
// Note: Stops the music engine. Takes no args.
{
    g_57bac0 = 0;
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

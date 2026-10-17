// Original IGI.EXE function: Game_EnableMusic (VA 0x00415A10; static CFG gate FAIL, CFG score 0.667).
#include "Game_EnableMusic.h"
int32_t Game_EnableMusic(int32_t context)

// Sig: void Game_EnableMusic(void)
// Note: Starts/resumes the music engine. Takes no args.
{
    g_57bac0 = 1;
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

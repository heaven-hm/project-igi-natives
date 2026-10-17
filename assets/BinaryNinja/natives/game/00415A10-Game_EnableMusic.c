// Original IGI.EXE function: Game_EnableMusic (VA 0x00415A10; static CFG gate FAIL, CFG score 0.667).
#include "Game_EnableMusic.h"
int32_t Game_EnableMusic(int32_t a1)

// Sig: void Game_EnableMusic(void)
// Note: Starts/resumes the music engine. Takes no args.
{
    g_57bac0 = 1;
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

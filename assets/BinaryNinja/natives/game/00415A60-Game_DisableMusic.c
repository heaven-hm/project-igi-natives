#include "Game_DisableMusic.h"
int32_t Game_DisableMusic(int32_t a1)

// Sig: void Game_DisableMusic(void)
// Note: Stops the music engine. Takes no args.
{
    g_57bac0 = 0;
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

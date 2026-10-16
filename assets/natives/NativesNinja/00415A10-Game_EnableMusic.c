#include "00415A10-Game_EnableMusic.h"
/* 0x00415a10 Game_EnableMusic full linked: callers=0 callees=1 */
int32_t Game_EnableMusic(int32_t a1)

// Sig: void Game_EnableMusic(void)
// Note: Starts/resumes the music engine. Takes no args.
{
    g_57bac0 = 1;
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

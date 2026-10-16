#include "004157D0-Game_DisablePlayerInput.h"
/* 0x004157d0 Game_DisablePlayerInput full linked: callers=0 callees=3 */
int32_t Game_DisablePlayerInput(int32_t a1)

// Sig: void Game_DisablePlayerInput(void)
// Note: Disables ALL player input (keyboard+mouse) - used by cutscenes/menus.
// Re-enable with Game_EnablePlayerInput.
{
    for (int32_t i = 0; i < 4; i += 1)
    {
        void* eax_1 = Level_InitTextures_5(i);

        if (eax_1)
            sub_4635b0(eax_1);
    }

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

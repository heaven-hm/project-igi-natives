// Original IGI.EXE function: Game_DisablePlayerInput (VA 0x004157D0; static CFG gate PASS, CFG score 0.889).
#include "Game_DisablePlayerInput.h"
int32_t Game_DisablePlayerInput(int32_t context)

// Sig: void Game_DisablePlayerInput(void)
// Note: Disables ALL player input (keyboard+mouse) - used by cutscenes/menus.
// Re-enable with Game_EnablePlayerInput.
{
    for (int32_t i = 0; i < 4; i += 1)
    {
        void* data_1 = Level_InitTextures_5(i);

        if (data_1)
            AI_FireWeapon_20(data_1);
    }

    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}

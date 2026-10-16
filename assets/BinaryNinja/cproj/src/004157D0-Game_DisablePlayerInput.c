#include "gi_platform.h"
#include "004157D0-Game_DisablePlayerInput.h"
int32_t Game_DisablePlayerInput(int32_t a1)

// Sig: void Game_DisablePlayerInput(void)
// Note: Disables ALL player input (keyboard+mouse) - used by cutscenes/menus.
// Re-enable with Game_EnablePlayerInput.
{
    for (int32_t i = 0; i < 4; i += 1)
    {
        void* valA1 = Level_InitTextures_5(i);

        if (valA1)
            AI_FireWeapon_20(valA1);
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

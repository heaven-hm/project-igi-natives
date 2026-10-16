#include "00415830-Game_EnablePlayerInput.h"
/* 0x00415830 Game_EnablePlayerInput full linked: callers=0 callees=3 */
int32_t Game_EnablePlayerInput(int32_t a1)

// Sig: void Game_EnablePlayerInput(void)
// Note: Re-enables player input after Game_DisablePlayerInput. Takes no args.
{
    for (int32_t i = 0; i < 4; i += 1)
    {
        void* eax_1 = Level_InitTextures_5(i);

        if (eax_1)
            sub_4635e0(eax_1);
    }

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}

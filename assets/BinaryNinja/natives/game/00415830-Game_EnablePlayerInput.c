// Original IGI.EXE function: Game_EnablePlayerInput (VA 0x00415830; static CFG gate PASS, CFG score 0.889).
#include "Game_EnablePlayerInput.h"
int32_t Game_EnablePlayerInput(int32_t a1)

// Sig: void Game_EnablePlayerInput(void)
// Note: Re-enables player input after Game_DisablePlayerInput. Takes no args.
{
    for (int32_t i = 0; i < 4; i += 1)
    {
        void* valA1 = Level_InitTextures_5(i);

        if (valA1)
            AI_MoveToNode_20(valA1);
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}

// IGI native provenance: Game_DisableMusic - 0x00415A60 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00415A60-Game_DisableMusic.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

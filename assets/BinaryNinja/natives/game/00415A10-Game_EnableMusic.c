// IGI native provenance: Game_EnableMusic - 0x00415A10 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00415A10-Game_EnableMusic.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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

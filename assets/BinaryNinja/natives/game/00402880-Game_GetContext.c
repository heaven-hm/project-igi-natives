// IGI native provenance: Game_GetContext - 0x00402880 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00402880-Game_GetContext.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Game_GetContext.h"
struct frames_ctx* Game_GetContext()

// Sig: void* Game_GetContext(void)
// Note: Returns the global IGI game-context pointer at DAT_00567C8C. Retail
// callers use it to dispatch context callbacks and initialize the main game
// state.
{
    return g_frames_ctx;
}

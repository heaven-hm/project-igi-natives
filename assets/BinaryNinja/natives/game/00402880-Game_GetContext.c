// Original IGI.EXE function: Game_GetContext (VA 0x00402880; static CFG gate PASS, CFG score 1.000).
#include "Game_GetContext.h"
struct frames_ctx* Game_GetContext()

// Sig: void* Game_GetContext(void)
// Note: Returns the global IGI game-context pointer at DAT_00567C8C. Retail
// callers use it to dispatch context callbacks and initialize the main game
// state.
{
    return g_frames_ctx;
}

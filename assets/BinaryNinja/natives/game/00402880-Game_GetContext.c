#include "Game_GetContext.h"
struct frames_ctx* Game_GetContext()

// Sig: void* Game_GetContext(void)
// Note: Returns the global IGI game-context pointer at DAT_00567C8C. Retail
// callers use it to dispatch context callbacks and initialize the main game
// state.
{
    return g_frames_ctx;
}

#include "00402880-Game_GetContext.h"
/* 0x00402880 Game_GetContext full linked: callers=3 callees=0 */
struct frames_ctx* Game_GetContext()

// Sig: void* Game_GetContext(void)
// Note: Returns the global IGI game-context pointer at DAT_00567C8C. Retail
// callers use it to dispatch context callbacks and initialize the main game
// state.
{
    return g_frames_ctx;
}

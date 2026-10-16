#include "gi_platform.h"
#include "004028F0-Game_TimingEnd.h"
int32_t Game_TimingEnd()

// Sig: void Game_TimingEnd(void)
// Note: Ends a nested timing interval: decrements the depth counter and, at
// zero, adds elapsed timer ticks to game-context field +0x50 and clears the
// interval start timestamp.
{
    int32_t valA2 = g_567c80;
    int32_t result = valA2 - 1;
    g_567c80 = result;

    if (valA2 == 1)
    {
        uint32_t* srcS1 = &g_frames_ctx->unk50;
        result = Timer_Now() - g_567c78;
        ADJ(srcS1)->unk50 += result;
        g_567c78 = 0;
    }

    return result;
}

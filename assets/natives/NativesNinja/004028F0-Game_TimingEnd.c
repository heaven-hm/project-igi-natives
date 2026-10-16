#include "004028F0-Game_TimingEnd.h"
/* 0x004028f0 Game_TimingEnd full linked: callers=5 callees=1 */
int32_t Game_TimingEnd()

// Sig: void Game_TimingEnd(void)
// Note: Ends a nested timing interval: decrements the depth counter and, at
// zero, adds elapsed timer ticks to game-context field +0x50 and clears the
// interval start timestamp.
{
    int32_t eax_2 = g_567c80;
    int32_t result = eax_2 - 1;
    g_567c80 = result;

    if (eax_2 == 1)
    {
        uint32_t* esi_1 = &g_frames_ctx->unk50;
        result = Timer_Now() - g_567c78;
        ADJ(esi_1)->unk50 += result;
        g_567c78 = 0;
    }

    return result;
}

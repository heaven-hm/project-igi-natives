// Original IGI.EXE function: Game_TimingEnd (VA 0x004028F0; static CFG gate PASS, CFG score 1.000).
#include "Game_TimingEnd.h"
int32_t Game_TimingEnd()

// Sig: void Game_TimingEnd(void)
// Note: Ends a nested timing interval: decrements the depth counter and, at
// zero, adds elapsed timer ticks to game-context field +0x50 and clears the
// interval start timestamp.
{
    int32_t data_2 = g_567c80;
    int32_t result = data_2 - 1;
    g_567c80 = result;

    if (data_2 == 1)
    {
        uint32_t* source_1 = &g_frames_ctx->unk50;
        result = Timer_Now() - g_567c78;
        ADJ(source_1)->unk50 += result;
        g_567c78 = 0;
    }

    return result;
}

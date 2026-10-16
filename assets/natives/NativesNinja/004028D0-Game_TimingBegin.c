#include "004028D0-Game_TimingBegin.h"
/* 0x004028d0 Game_TimingBegin full linked: callers=5 callees=1 */
int32_t Game_TimingBegin()

// Sig: void Game_TimingBegin(void)
// Note: Begins a nested timing interval: starts the retail timer when the
// timing depth is zero, then increments the depth counter. Level_Start and
// Game_Restart bracket their load work with this helper and Game_TimingEnd.
{
    int32_t result = g_567c80;

    if (!result)
    {
        result = Timer_Now();
        g_567c78 = result;
    }

    g_567c80 += 1;
    return result;
}

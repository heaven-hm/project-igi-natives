// IGI native provenance: Game_TimingBegin - 0x004028D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004028D0-Game_TimingBegin.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Game_TimingBegin.h"
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

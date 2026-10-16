/* LOGIC NOTE (Game_TimingBegin @ 0x004028D0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : Timer_
   called by : Flow_LoadParameters, Game_Restart, Level_Start, sub_402240
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Game_TimingBegin.h"

int32_t Game_TimingBegin()

// Sig: void Game_TimingBegin(void)
// Note: Begins a nested timing interval: starts the retail timer when the
// timing depth is zero, then increments the depth counter. Level_Start and
// Game_Restart bracket their load work with this helper and Game_TimingEnd.
{
    int32_t result = data_567c80;

    if (!result)
    {
        result = Timer_Now();
        data_567c78 = result;
    }

    data_567c80 += 1;
    return result;
}

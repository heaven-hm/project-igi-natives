/* LOGIC NOTE (Game_TimingEnd @ 0x004028F0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : Timer_
   called by : Flow_LoadParameters, Game_Restart, Level_Start, sub_402240
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Game_TimingEnd.h"

int32_t Game_TimingEnd()

// Sig: void Game_TimingEnd(void)
// Note: Ends a nested timing interval: decrements the depth counter and, at
// zero, adds elapsed timer ticks to game-context field +0x50 and clears the
// interval start timestamp.
{
    int32_t result_2 = data_567c80;
    int32_t result = result_2 - 1;
    data_567c80 = result;

    if (result_2 == 1)
    {
        uint32_t* src_1 = &g_frames_ctx->unk50;
        result = Timer_Now() - data_567c78;
        ADJ(src_1)->unk50 += result;
        data_567c78 = 0;
    }

    return result;
}

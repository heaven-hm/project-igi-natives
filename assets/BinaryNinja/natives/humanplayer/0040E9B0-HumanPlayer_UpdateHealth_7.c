// Original IGI.EXE function: HumanPlayer_UpdateHealth_7 (VA 0x0040E9B0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateHealth_7.h"
void* HumanPlayer_UpdateHealth_7(void* a1)

{
    *(a1 + 0x14) = HumanPlayer_HandleInput_7;
    return a1;
}

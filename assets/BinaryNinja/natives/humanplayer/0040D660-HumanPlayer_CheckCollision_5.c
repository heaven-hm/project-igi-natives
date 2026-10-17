// Original IGI.EXE function: HumanPlayer_CheckCollision_5 (VA 0x0040D660; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_CheckCollision_5.h"
void** HumanPlayer_CheckCollision_5(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    void** result = HumanPlayer_CheckCollision_9(a2, 0f);
    *(a2 + 0xd84) = 0;
    *(a2 + 0xd88) = 0xbf800000;
    *(a1 + 0x14) = Ladder_ClimbTick;
    return result;
}

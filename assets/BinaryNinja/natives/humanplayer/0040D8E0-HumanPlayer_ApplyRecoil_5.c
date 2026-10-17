// Original IGI.EXE function: HumanPlayer_ApplyRecoil_5 (VA 0x0040D8E0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_ApplyRecoil_5.h"
void** HumanPlayer_ApplyRecoil_5(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    void** result = HumanPlayer_CheckCollision_9(a2, 0f);
    *(a1 + 0x14) = Ladder_GetOnTop;
    return result;
}

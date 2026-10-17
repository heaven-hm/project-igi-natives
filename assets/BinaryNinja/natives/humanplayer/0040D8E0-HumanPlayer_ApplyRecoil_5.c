// Original IGI.EXE function: HumanPlayer_ApplyRecoil_5 (VA 0x0040D8E0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_ApplyRecoil_5.h"
void** HumanPlayer_ApplyRecoil_5(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    void** result = HumanPlayer_CheckCollision_9(param_2, 0.0f);
    *(context + 0x14) = Ladder_GetOnTop;
    return result;
}

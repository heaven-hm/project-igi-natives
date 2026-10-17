// Original IGI.EXE function: HumanPlayer_UpdateHealth_6 (VA 0x0040DD60; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateHealth_6.h"
void** HumanPlayer_UpdateHealth_6(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    void** result = HumanPlayer_CheckCollision_9(param_2, 0.0f);
    *(param_2 + 0xd98) = 0xbf800000;
    *(context + 0x14) = sub_40dda0;
    return result;
}

// Original IGI.EXE function: HumanPlayer_PlaySound (VA 0x00408770; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlaySound.h"
int32_t HumanPlayer_PlaySound(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.200000003f);
    int32_t result = HumanPlayer_ApplyRecoil_9(param_2, 1);
    *(context + 0x14) = sub_4087b0;
    return result;
}

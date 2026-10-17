// Original IGI.EXE function: HumanPlayer_PlaySound (VA 0x00408770; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlaySound.h"
int32_t HumanPlayer_PlaySound(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    Human_StateAnimation(a2, *(a1 + 0x10), 0.200000003f);
    int32_t result = HumanPlayer_ApplyRecoil_9(a2, 1);
    *(a1 + 0x14) = sub_4087b0;
    return result;
}

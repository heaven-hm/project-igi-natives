// Original IGI.EXE function: HumanPlayer_TakeDamage_3 (VA 0x0040AB20; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_TakeDamage_3.h"
int32_t HumanPlayer_TakeDamage_3(void* a1, void* a2)

{
    *(a2 + 0x33d) = 1;
    Human_StateAnimation(a2, *(a1 + 0x10), 0.200000003f);
    int32_t result = HumanPlayer_ApplyRecoil_9(a2, 4);
    *(a1 + 0x14) = sub_40ab60;
    return result;
}

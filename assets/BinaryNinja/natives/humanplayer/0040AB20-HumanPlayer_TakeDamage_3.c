// Original IGI.EXE function: HumanPlayer_TakeDamage_3 (VA 0x0040AB20; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_TakeDamage_3.h"
int32_t HumanPlayer_TakeDamage_3(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 1;
    Human_StateAnimation(param_2, *(context + 0x10), 0.200000003f);
    int32_t result = HumanPlayer_ApplyRecoil_9(param_2, 4);
    *(context + 0x14) = sub_40ab60;
    return result;
}

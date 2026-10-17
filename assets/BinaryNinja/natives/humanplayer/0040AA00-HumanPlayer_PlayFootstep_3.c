// Original IGI.EXE function: HumanPlayer_PlayFootstep_3 (VA 0x0040AA00; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlayFootstep_3.h"
int32_t HumanPlayer_PlayFootstep_3(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.200000003f);
    *(context + 0x14) = sub_40aa30;
    return result;
}

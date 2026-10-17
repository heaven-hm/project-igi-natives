// Original IGI.EXE function: AI_CheckHearing_10 (VA 0x00458600; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_10.h"
int32_t AI_CheckHearing_10(void* context, void* param_2)

{
    *(param_2 + 0x696) = 0;
    *(param_2 + 0xd19) = 1;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = AI_FireWeapon_10;
    return result;
}

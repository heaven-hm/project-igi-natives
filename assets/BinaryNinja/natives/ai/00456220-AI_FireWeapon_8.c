// Original IGI.EXE function: AI_FireWeapon_8 (VA 0x00456220; static CFG gate PASS, CFG score 1.000).
#include "AI_FireWeapon_8.h"
int32_t AI_FireWeapon_8(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 1;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_456250;
    return result;
}

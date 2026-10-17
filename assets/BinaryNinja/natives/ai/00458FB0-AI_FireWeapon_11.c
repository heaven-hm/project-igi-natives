// Original IGI.EXE function: AI_FireWeapon_11 (VA 0x00458FB0; static CFG gate PASS, CFG score 1.000).
#include "AI_FireWeapon_11.h"
int32_t AI_FireWeapon_11(void* context, void* param_2)

{
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = AI_CheckVisibility_15;
    return result;
}

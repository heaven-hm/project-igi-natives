// Original IGI.EXE function: AI_FireWeapon_23 (VA 0x00465800; static CFG gate FAIL, CFG score 0.667).
#include "AI_FireWeapon_23.h"
int32_t AI_FireWeapon_23(int32_t context, int32_t param_2)

{
    memcpy(context, param_2 + 0xe0, 0x18);
    return param_2;
}

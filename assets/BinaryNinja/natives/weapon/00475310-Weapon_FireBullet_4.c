// Original IGI.EXE function: Weapon_FireBullet_4 (VA 0x00475310; static CFG gate FAIL, CFG score 0.667).
#include "Weapon_FireBullet_4.h"
int32_t Weapon_FireBullet_4(int32_t context, int32_t param_2, int32_t param_3)

{
    memcpy(param_3, context + 0x188, 0x28);
    memcpy(param_2, context + 0x170, 0x18);
    return context;
}

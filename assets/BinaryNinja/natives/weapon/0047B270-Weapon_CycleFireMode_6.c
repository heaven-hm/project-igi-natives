// Original IGI.EXE function: Weapon_CycleFireMode_6 (VA 0x0047B270; static CFG gate FAIL, CFG score 0.667).
#include "Weapon_CycleFireMode_6.h"
int32_t Weapon_CycleFireMode_6(int32_t context, int32_t param_2)

{
    memcpy(context + 0x78, param_2, 0x18);
    return context;
}

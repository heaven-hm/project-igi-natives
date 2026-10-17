// Original IGI.EXE function: Weapon_CycleFireMode_6 (VA 0x0047B270; static CFG gate FAIL, CFG score 0.667).
#include "Weapon_CycleFireMode_6.h"
int32_t Weapon_CycleFireMode_6(int32_t a1, int32_t a2)

{
    memcpy(a1 + 0x78, a2, 0x18);
    return a1;
}

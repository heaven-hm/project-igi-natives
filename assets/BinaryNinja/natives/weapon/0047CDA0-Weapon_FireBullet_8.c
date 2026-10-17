// Original IGI.EXE function: Weapon_FireBullet_8 (VA 0x0047CDA0; static CFG gate PASS, CFG score 1.000).
#include "Weapon_FireBullet_8.h"
int32_t Weapon_FireBullet_8(int32_t context)

{
    Qhash_Init(1);
    int32_t result = Sys_CheckHeap_22(context);
    Qhash_Reset();
    return result;
}

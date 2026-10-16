#include "Weapon_FireBullet_8.h"
int32_t Weapon_FireBullet_8(int32_t a1)

{
    Qhash_Init(1);
    int32_t result = Sys_CheckHeap_22(a1);
    Qhash_Reset();
    return result;
}

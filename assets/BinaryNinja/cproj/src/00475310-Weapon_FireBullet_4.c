#include "gi_platform.h"
#include "00475310-Weapon_FireBullet_4.h"
int32_t Weapon_FireBullet_4(int32_t a1, int32_t a2, int32_t a3)

{
    memcpy(a3, a1 + 0x188, 0x28);
    memcpy(a2, a1 + 0x170, 0x18);
    return a1;
}

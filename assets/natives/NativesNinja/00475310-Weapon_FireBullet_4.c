#include "00475310-Weapon_FireBullet_4.h"
/* 0x00475310 Weapon_FireBullet_4 full linked: callers=3 callees=2 */
int32_t sub_475310(int32_t a1, int32_t a2, int32_t a3)

{
    memcpy(a3, a1 + 0x188, 0x28);
    memcpy(a2, a1 + 0x170, 0x18);
    return a1;
}

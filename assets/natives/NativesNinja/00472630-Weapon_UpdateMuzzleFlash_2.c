#include "00472630-Weapon_UpdateMuzzleFlash_2.h"
/* 0x00472630 Weapon_UpdateMuzzleFlash_2 full linked: callers=1 callees=1 */
int32_t sub_472630(int32_t a1, int32_t a2)

{
    memcpy(a1 + 0x60, a2, 0x18);
    return a1;
}

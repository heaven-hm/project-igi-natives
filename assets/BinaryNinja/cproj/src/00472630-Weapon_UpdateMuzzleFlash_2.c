#include "gi_platform.h"
#include "00472630-Weapon_UpdateMuzzleFlash_2.h"
int32_t Weapon_UpdateMuzzleFlash_2(int32_t a1, int32_t a2)

{
    memcpy(a1 + 0x60, a2, 0x18);
    return a1;
}

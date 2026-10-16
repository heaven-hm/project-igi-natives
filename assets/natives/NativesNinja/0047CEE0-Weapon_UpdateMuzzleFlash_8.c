#include "0047CEE0-Weapon_UpdateMuzzleFlash_8.h"
/* 0x0047cee0 Weapon_UpdateMuzzleFlash_8 full linked: callers=12 callees=0 */
int32_t* sub_47cee0(int32_t* a1, int32_t a2)

{
    int32_t esi = *a1;
    int32_t ecx = 0;

    if (esi <= 0)
        return nullptr;

    int32_t* result = &a1[1];

    do
    {
        if (*result == a2)
            return result;

        ecx += 1;
        result = &result[3];
    } while (ecx < esi);

    return 0;
}

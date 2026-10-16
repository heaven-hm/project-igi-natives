#include "gi_platform.h"
#include "0047CEE0-Weapon_UpdateMuzzleFlash_8.h"
int32_t* Weapon_UpdateMuzzleFlash_8(int32_t* a1, int32_t a2)

{
    int32_t srcS = *a1;
    int32_t objC = 0;

    if (srcS <= 0)
        return nullptr;

    int32_t* result = &a1[1];

    do
    {
        if (*result == a2)
            return result;

        objC += 1;
        result = &result[3];
    } while (objC < srcS);

    return 0;
}

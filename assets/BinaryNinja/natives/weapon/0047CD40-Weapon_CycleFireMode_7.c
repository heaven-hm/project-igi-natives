#include "Weapon_CycleFireMode_7.h"
int32_t* Weapon_CycleFireMode_7(int32_t a1)

{
    int32_t valA = Weapon_UpdateZoom_7();
    int32_t srcS = 0;

    if (valA > 0)
    {
        do
        {
            int32_t* result = Weapon_EjectMagazine_7(srcS);

            if (*result == a1)
                return result;

            srcS += 1;
        } while (srcS < valA);
    }

    return nullptr;
}

#include "Weapon_CheckAmmo_7.h"
void* Weapon_CheckAmmo_7(int32_t a1)

{
    int32_t valA = Weapon_UpdateZoom_7();
    int32_t srcS = 0;

    if (valA > 0)
    {
        do
        {
            void* result = Weapon_EjectMagazine_7(srcS);

            if (*(result + 4) == a1)
                return result;

            srcS += 1;
        } while (srcS < valA);
    }

    return nullptr;
}

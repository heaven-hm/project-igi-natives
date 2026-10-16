#include "0047CD70-Weapon_CheckAmmo_7.h"
/* 0x0047cd70 Weapon_CheckAmmo_7 full linked: callers=1 callees=2 */
void* sub_47cd70(int32_t a1)

{
    int32_t eax = sub_47cd30();
    int32_t esi = 0;

    if (eax > 0)
    {
        do
        {
            void* result = sub_47cd10(esi);

            if (*(result + 4) == a1)
                return result;

            esi += 1;
        } while (esi < eax);
    }

    return nullptr;
}

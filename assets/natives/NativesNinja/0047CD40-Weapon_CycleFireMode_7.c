#include "0047CD40-Weapon_CycleFireMode_7.h"
/* 0x0047cd40 Weapon_CycleFireMode_7 full linked: callers=2 callees=2 */
int32_t* sub_47cd40(int32_t a1)

{
    int32_t eax = sub_47cd30();
    int32_t esi = 0;

    if (eax > 0)
    {
        do
        {
            int32_t* result = sub_47cd10(esi);

            if (*result == a1)
                return result;

            esi += 1;
        } while (esi < eax);
    }

    return nullptr;
}

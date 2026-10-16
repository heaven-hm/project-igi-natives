#include "00413BD0-HumanPlayer_CheckCollision_10.h"
/* 0x00413bd0 HumanPlayer_CheckCollision_10 full linked: callers=7 callees=2 */
int32_t* HumanPlayer_CheckCollision_10(int32_t a1)

{
    int32_t eax = Weapons_CountGet();
    int32_t esi = 0;

    if (eax > 0)
    {
        do
        {
            int32_t* result = HumanPlayer_TakeDamage_10(esi);

            if (*result == a1)
                return result;

            esi += 1;
        } while (esi < eax);
    }

    return nullptr;
}

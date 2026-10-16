#include "gi_platform.h"
#include "00413BD0-HumanPlayer_CheckCollision_10.h"
int32_t* HumanPlayer_CheckCollision_10(int32_t a1)

{
    int32_t valA = Weapons_CountGet();
    int32_t srcS = 0;

    if (valA > 0)
    {
        do
        {
            int32_t* result = HumanPlayer_TakeDamage_10(srcS);

            if (*result == a1)
                return result;

            srcS += 1;
        } while (srcS < valA);
    }

    return nullptr;
}

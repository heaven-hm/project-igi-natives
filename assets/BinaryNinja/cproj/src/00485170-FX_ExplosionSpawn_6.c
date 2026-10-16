#include "gi_platform.h"
#include "00485170-FX_ExplosionSpawn_6.h"
void* FX_ExplosionSpawn_6(int32_t a1)

{
    int32_t tmpD1 = g_5c89fc;
    int32_t valA = 0;

    if (tmpD1 > 0)
    {
        int32_t* objC1 = &g_5c1590;

        do
        {
            if (*objC1 == a1)
                return valA * 0x4a8 + &g_5c1590;

            valA += 1;
            objC1 = &objC1[0x12a];
        } while (valA < tmpD1);
    }

    return 0;
}

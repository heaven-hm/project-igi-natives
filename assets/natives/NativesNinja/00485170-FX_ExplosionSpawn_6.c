#include "00485170-FX_ExplosionSpawn_6.h"
/* 0x00485170 FX_ExplosionSpawn_6 full linked: callers=7 callees=0 */
void* sub_485170(int32_t a1)

{
    int32_t edx_1 = g_5c89fc;
    int32_t eax = 0;

    if (edx_1 > 0)
    {
        int32_t* ecx_1 = &g_5c1590;

        do
        {
            if (*ecx_1 == a1)
                return eax * 0x4a8 + &g_5c1590;

            eax += 1;
            ecx_1 = &ecx_1[0x12a];
        } while (eax < edx_1);
    }

    return 0;
}

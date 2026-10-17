// Original IGI.EXE function: Binocular_Action (VA 0x00470BC0; static CFG gate PASS, CFG score 1.000).
#include "Binocular_Action.h"
int32_t* Binocular_Action(void* a1, int32_t a2)

{
    int32_t* result = *(a1 + 0x1b0);

    if (result)
    {
        Weapon_UpdateMuzzleFlash_2(**(a1 + 0x1c0), a1 + 0x150);
        result = Weapon_UpdateBarrel_2(**(a1 + 0x1c0), a1 + 0x168);
        int32_t* i = *(a1 + 8);

        if (*i && i)
        {
            int32_t objC3 = g_afa7e0;

            do
            {
                int32_t* tmpD3 = *i;
                void* valA5;

                if (!tmpD3)
                    valA5 = nullptr;
                else
                {
                    int32_t valA2 = *tmpD3;
                    int32_t valA3 = -(valA2);
                    valA5 = (valA3 - valA3) & tmpD3;
                }

                *((objC3 << 2) + &g_afa6e0) = valA5;
                g_afa7e0 = objC3 + 1;
                uint32_t valA7 = FX_DebrisSpawn_8();
                int32_t objC5 = 0;
                objC5 = i[7];
                result = *(((valA7 * 0x180 + objC5) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, a2);

                objC3 = g_afa7e0 - 1;
                g_afa7e0 = objC3;
                i = *((objC3 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}

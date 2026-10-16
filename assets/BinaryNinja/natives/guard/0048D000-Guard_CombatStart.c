#include "Guard_CombatStart.h"
int32_t* Guard_CombatStart(void* a1, void* a2)

{
    void* dstD = *(a2 + 0x28);
    *(a2 + 0x18) = Guard_CombatStand;
    *(a2 + 0x20) = FX_SmokeEmit_19;
    int32_t objC = *(a1 + 0x3d44);
    *(a1 + 0x3dd0) = 0xffffffff;
    *(a1 + 0x3dd4) = objC;
    *(a1 + 0x3dd8) = 0xffffffff;
    int32_t** result_1 = **(dstD + 8);
    int32_t* result = *result_1;

    if (result)
    {
        while (true)
        {
            int32_t* objC1 = result_1[0xb];

            if (objC1)
            {
                void* objC2 = *objC1;

                if (objC2)
                {
                    result = AI_FireWeapon_2(a1, objC2);
                    *(a1 + 0x3aa8) = result;
                    break;
                }
            }

            result_1 = result;
            result = *result;

            if (!result)
            {
                *(dstD + 8) = 0;
                *(dstD + 0x20) = 0;
                return result;
            }
        }
    }

    *(dstD + 8) = 0;
    *(dstD + 0x20) = 0;
    return result;
}

#include "AI_CombatRPGStand.h"

int32_t* AI_CombatRPGStand(void* pThis, void* param)

{
    void* ebx = *(param + 0x28);

    if (!AI_MoveToNode_19(*(pThis + 0x14)))
        *(param + 0x18) = RPG_CombatStand;
    else
        *(param + 0x18) = RPG_CombatKneel;

    *(param + 0x20) = FX_SmokeEmit_19;
    *(pThis + 0x3dd4) = *(pThis + 0x3d44);
    *(pThis + 0x3dd0) = 0xffffffff;
    *(pThis + 0x3dd8) = 0xffffffff;
    int32_t** result_1 = **(ebx + 8);
    int32_t* result = *result_1;

    if (result)
    {
        while (true)
        {
            int32_t* ecx_1 = result_1[0xb];

            if (ecx_1)
            {
                void* ecx_2 = *ecx_1;

                if (ecx_2)
                {
                    result = AI_FireWeapon_2(pThis, ecx_2);
                    *(pThis + 0x3aa8) = result;
                    break;
                }
            }

            result_1 = result;
            result = *result;

            if (!result)
            {
                *(ebx + 8) = 0;
                return result;
            }
        }
    }

    *(ebx + 8) = 0;
    return result;
}

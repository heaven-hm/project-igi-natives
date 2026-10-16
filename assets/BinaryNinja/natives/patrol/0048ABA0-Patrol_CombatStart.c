#include "Patrol_CombatStart.h"
int32_t* Patrol_CombatStart(void* a1, void* a2)

{
    int32_t* ctxB1 = *(a2 + 0x28) + 8;

    if (!AI_MoveToNode_19(*(a1 + 0x14)))
    {
        if (!Locomotion_GetState(a1, 2))
            *(a2 + 0x18) = Combat_MobileC;
        else
            *(a2 + 0x18) = 0x48c510;
    }
    else
        *(a2 + 0x18) = Combat_MobileA;

    *(a2 + 0x20) = FX_SmokeEmit_19;
    int32_t objC = *(a1 + 0x3d44);
    *(a1 + 0x3dd0) = 0xffffffff;
    *(a1 + 0x3dd4) = objC;
    *(a1 + 0x3dd8) = 0xffffffff;
    *(a1 + 0x3e64) = 0;
    *(a1 + 0x3de8) = 0xffffffff;
    int32_t* result_1 = **ctxB1;
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
                ctxB1[6] = 0;
                ctxB1[5] = 0;
                *ctxB1 = 0;
                return result;
            }
        }
    }

    ctxB1[6] = 0;
    ctxB1[5] = 0;
    *ctxB1 = 0;
    return result;
}

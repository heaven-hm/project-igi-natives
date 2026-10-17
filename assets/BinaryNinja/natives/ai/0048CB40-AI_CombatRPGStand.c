// IGI native provenance: AI_CombatRPGStand - 0x0048CB40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048CB40-AI_CombatRPGStand.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatRPGStand.h"

int32_t* AI_CombatRPGStand(void* pThis, void* param)

{
    void* base_ptr = *(param + 0x28);

    if (!AI_MoveToNode_19(*(pThis + 0x14)))
        *(param + 0x18) = RPG_CombatStand;
    else
        *(param + 0x18) = RPG_CombatKneel;

    *(param + 0x20) = FX_SmokeEmit_19;
    *(pThis + 0x3dd4) = *(pThis + 0x3d44);
    *(pThis + 0x3dd0) = 0xffffffff;
    *(pThis + 0x3dd8) = 0xffffffff;
    int32_t** result_1 = **(base_ptr + 8);
    int32_t* result = *result_1;

    if (result)
    {
        while (true)
        {
            int32_t* counter_val_1 = result_1[0xb];

            if (counter_val_1)
            {
                void* counter_val_2 = *counter_val_1;

                if (counter_val_2)
                {
                    result = AI_FireWeapon_2(pThis, counter_val_2);
                    *(pThis + 0x3aa8) = result;
                    break;
                }
            }

            result_1 = result;
            result = *result;

            if (!result)
            {
                *(base_ptr + 8) = 0;
                return result;
            }
        }
    }

    *(base_ptr + 8) = 0;
    return result;
}

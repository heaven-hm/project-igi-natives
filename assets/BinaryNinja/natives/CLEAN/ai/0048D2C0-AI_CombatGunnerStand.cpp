// IGI native provenance: AI_CombatGunnerStand - 0x0048D2C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048D2C0-AI_CombatGunnerStand.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatGunnerStand.h"

int32_t* AI_CombatGunnerStand(void* pThis, void* param)

{
    void* dest_ptr = *(param + 0x28);
    *(param + 0x18) = Gunner_Combat;
    *(param + 0x20) = FX_SmokeEmit_19;
    *(pThis + 0x3dd4) = *(pThis + 0x3d44);
    *(pThis + 0x3dd0) = 0xffffffff;
    *(pThis + 0x3dd8) = 0xffffffff;
    int32_t* i_1 = **(dest_ptr + 8);
    int32_t* i;

    for (i = *i_1; i; i = *i)
    {
        int32_t* counter_val_1 = i_1[0xb];

        if (counter_val_1)
        {
            void* counter_val_2 = *counter_val_1;

            if (counter_val_2)
            {
                i = AI_FireWeapon_2(pThis, counter_val_2);
                *(pThis + 0x3aa8) = i;
                break;
            }
        }

        i_1 = i;
    }

    *(dest_ptr + 0x1c) = 0x1e;
    *(dest_ptr + 8) = 0;
    *(dest_ptr + 0x20) = 0;
    return i;
}

// Original IGI.EXE function: AI_CombatGunnerStand (VA 0x0048D2C0; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatGunnerStand.h"

int32_t* AI_CombatGunnerStand(void* pThis, void* param)

{
    void* edi = *(param + 0x28);
    *(param + 0x18) = Gunner_Combat;
    *(param + 0x20) = FX_SmokeEmit_19;
    *(pThis + 0x3dd4) = *(pThis + 0x3d44);
    *(pThis + 0x3dd0) = 0xffffffff;
    *(pThis + 0x3dd8) = 0xffffffff;
    int32_t* i_1 = **(edi + 8);
    int32_t* i;

    for (i = *i_1; i; i = *i)
    {
        int32_t* ecx_1 = i_1[0xb];

        if (ecx_1)
        {
            void* ecx_2 = *ecx_1;

            if (ecx_2)
            {
                i = AI_FireWeapon_2(pThis, ecx_2);
                *(pThis + 0x3aa8) = i;
                break;
            }
        }

        i_1 = i;
    }

    *(edi + 0x1c) = 0x1e;
    *(edi + 8) = 0;
    *(edi + 0x20) = 0;
    return i;
}

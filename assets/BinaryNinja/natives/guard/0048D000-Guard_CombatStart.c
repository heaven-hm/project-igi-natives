// Original IGI.EXE function: Guard_CombatStart (VA 0x0048D000; static CFG gate PASS, CFG score 1.000).
#include "Guard_CombatStart.h"
int32_t* Guard_CombatStart(void* context, void* param_2)

{
    void* dest_val = *(param_2 + 0x28);
    *(param_2 + 0x18) = Guard_CombatStand;
    *(param_2 + 0x20) = FX_SmokeEmit_19;
    int32_t entity_val = *(context + 0x3d44);
    *(context + 0x3dd0) = 0xffffffff;
    *(context + 0x3dd4) = entity_val;
    *(context + 0x3dd8) = 0xffffffff;
    int32_t** result_1 = **(dest_val + 8);
    int32_t* result = *result_1;

    if (result)
    {
        while (true)
        {
            int32_t* entity_1 = result_1[0xb];

            if (entity_1)
            {
                void* entity_2 = *entity_1;

                if (entity_2)
                {
                    result = AI_FireWeapon_2(context, entity_2);
                    *(context + 0x3aa8) = result;
                    break;
                }
            }

            result_1 = result;
            result = *result;

            if (!result)
            {
                *(dest_val + 8) = 0;
                *(dest_val + 0x20) = 0;
                return result;
            }
        }
    }

    *(dest_val + 8) = 0;
    *(dest_val + 0x20) = 0;
    return result;
}

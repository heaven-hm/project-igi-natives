// IGI native provenance: Guard_CombatStand - 0x0048D080 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048D080-Guard_CombatStand.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Guard_CombatStand.h"
int32_t* Guard_CombatStand(int32_t context, int32_t* param_2)

{
    char* item_34 = "Guard Combat - Stand";
    void* dest_1 = param_2[0xa] + 8;
    int32_t item_38 = 0xffffffff;
    int32_t item_3c = context;
    int32_t* data_val = *(dest_1 + 0x18);
    *(dest_1 + 0x18) = 0;
    FX_SmokeEmit_17(context, param_2[0xa] + 8);
    void* context_val = *(context + 0x3de4);

    if (!context_val)
        return AI_CombatTarget_2(context, param_2);

    int32_t data_2 = param_2[9];
    int32_t data_3;

    if (!data_2)
    {
        data_3 = Locomotion_GetState(context, 0);

        if (data_3)
        {
            if (!*(context_val + 0x29))
            {
                Combat_SetAimMode(*(context + 0x3aa8), context, 0xffffffff);
                *(dest_1 + 0x18) = data_val + 1;

                if (data_val + 1 > *(context + 0x3d50))
                    return AI_CombatTarget_2(context, param_2);

                if (!*(context_val + 0x28))
                {
                    char* item_34_4 = "Turning to target";
                    int32_t item_38_6 = 0xffffffff;
                    int32_t item_3c_2 = context;
                    void item_18;
                    AI_UpdatePatrol_3(&item_18, context);
                    return AI_UpdateOrders_3(context, &item_18, 0.0349065848f, 0);
                }
            }

            int32_t data_10 = FX_ExplosionSpawn_19(context);

            if (!data_10)
            {
                FX_FireBallUpdate_18(context, param_2, data_10, Combat_Reload);
                void* data_11 = *(context + 0x3aa8);
                *(context + 0x3dd4) = 0;
                return Combat_SetAimMode(data_11, context, 1);
            }

            long double fpu_val_7_2 = Sys_AllocateMemory_14(Level_SetMission_5()) * *(context + 0x3d7c);
            bool flag_0_1 = *(context + 0x3ddc) != 5;
            *(context + 0x3dd4) = fpu_val_7_2 + *(context + 0x3d78);

            if (!flag_0_1)
            {
                AI_UpdateOrders_3(context, *(context + 0x3aa8) + 0x110, 0.0349065848f, 1);
                AI_WriteChannel(context, 9, 1.0f);
            }
            else if (*(context_val + 0x29))
            {
                if (AI_UpdateOrders_2(*(context + 0x3aa8), 0) >= 4)
                    return Combat_SetAimMode(*(context + 0x3aa8), context, 2);

                Combat_SetAimMode(*(context + 0x3aa8), context, 0);
                AI_UpdatePatrol_3(context + 0x3e88, context);
                uint32_t data_19 = Combat_BeginBurst(context, *(param_2[0xa] + 0x28));
                *(param_2[0xa] + 0x28) = 0;
                param_2[9] = StandFire;
                return data_19;
            }

            return Combat_SetAimMode(*(context + 0x3aa8), context, 0xffffffff);
        }
    }
    else
    {
        data_3 = data_2(context, param_2);

        if (data_3)
            param_2[9] = 0;
    }

    return data_3;
}

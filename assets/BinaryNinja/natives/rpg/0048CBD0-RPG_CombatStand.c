// Original IGI.EXE function: RPG_CombatStand (VA 0x0048CBD0; static CFG gate PASS, CFG score 1.000).
#include "RPG_CombatStand.h"
int32_t* RPG_CombatStand(void* context, int32_t* param_2)

{
    int32_t* flagP = param_2;
    void* source_val = context;
    char* item_30 = "RPG Combat - Stand";
    void* dest_1 = flagP[0xa] + 8;
    int32_t item_34 = 0xffffffff;
    void* item_38 = source_val;
    int32_t data_val = *(dest_1 + 0x18);
    *(dest_1 + 0x18) = 0;
    FX_SmokeEmit_17(source_val, dest_1);
    void* context_val = *(source_val + 0x3de4);

    if (!context_val)
        return AI_CombatTarget_2(source_val, flagP);

    int32_t data_2 = flagP[9];
    uint32_t data_3;

    if (!data_2)
    {
        context = *(context_val + 0x29);
        param_2 = FX_ExplosionSpawn_19(source_val);
        data_3 = Locomotion_GetState(source_val, 0);

        if (data_3)
        {
            if (!*(context_val + 0x29))
            {
                *(dest_1 + 0x18) = data_val + 1;

                if (data_val + 1 > *(source_val + 0x3d50))
                    return AI_CombatTarget_2(source_val, flagP);

                if (!*(context_val + 0x28))
                {
                    char* item_30_5 = "Turning to target";
                    int32_t item_34_4 = 0xffffffff;
                    void* item_38_2 = source_val;
                    void item_18;
                    AI_UpdatePatrol_3(&item_18, source_val);
                    return AI_UpdateOrders_3(source_val, &item_18, 0.0349065848f, 0);
                }
            }

            bool flag_0_1 = *(source_val + 0x3ddc) != 5;
            *(source_val + 0x3dd4) = *(source_val + 0x3d48);

            if (!flag_0_1)
            {
                AI_UpdateOrders_3(source_val, *(source_val + 0x3aa8) + 0x110, 0.0349065848f, 1);
                return AI_WriteChannel(source_val, 9, 1.0f);
            }

            if (!param_2 && *(source_val + 0x3dd0) != 1)
            {
                void* data_16 = FX_FireBallUpdate_18(source_val, flagP, RPG_CombatKneel, FX_DebrisSpawn_19);
                *(source_val + 0x3dd0) = 1;
                *(source_val + 0x3dd4) = 0;
                return data_16;
            }

            data_3 = *(source_val + 0x3dd0);

            if (!data_3)
            {
                long double fp0_1;
                fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
                long double f0_1 = 0.400000006f;
                fp0_1 - f0_1;
                data_3 = (fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                    | (fp0_1 == f0_1 ? 1 : 0) << 0xe;

                if (*(&data_3 + 1) & 1)
                {
                    flagP[6] = RPG_CombatKneel;
                    *(source_val + 0x3dd0) = 2;
                    return data_3;
                }
            }

            data_3 = context;

            if (data_3)
            {
                AI_UpdatePatrol_3(source_val + 0x3e88, source_val);
                data_3 = Combat_BeginBurst(source_val, *(flagP[0xa] + 0x28));
                *(flagP[0xa] + 0x28) = 0;
                flagP[9] = StandFire;
                *(source_val + 0x3dd0) = 0;
            }
        }
    }
    else
    {
        data_3 = data_2(source_val, flagP);

        if (data_3)
            flagP[9] = 0;
    }

    return data_3;
}

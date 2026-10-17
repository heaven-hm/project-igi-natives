// Original IGI.EXE function: Named_Combat (VA 0x0048ACC0; static CFG gate PASS, CFG score 1.000).
#include "Named_Combat.h"
int32_t* Named_Combat(int32_t context, int32_t* param_2)

{
    char* item_10 = "Female Combat - Stand";
    int32_t item_14 = 0xffffffff;
    int32_t item_18 = context;
    void* flagP1 = param_2[0xa] + 8;
    FX_SmokeEmit_17(context, flagP1);

    if (*(context + 0x3de4))
    {
        int32_t data_2 = param_2[9];
        int32_t data_3;

        if (data_2)
        {
            data_3 = data_2(context, param_2);

            if (!data_3)
                return data_3;

            param_2[9] = 0;
            return data_3;
        }

        if (!Locomotion_GetState(context, 0))
        {
            void* data_5 = Locomotion_GetState(context, 3);

            if (data_5)
                data_5 = AI_WriteChannel(context, 3, -1.0f);

            char* item_10_3 = "Waiting for stand state";
            int32_t item_14_5 = 0xffffffff;
            int32_t item_18_2 = context;
            return data_5;
        }

        data_3 = FX_FragmentSimulate_18(context, flagP1) + 1;

        if (data_3 > 8)
            return data_3;

        switch (data_3)
        {
            case 0:
            {
                char* item_10_6 = "Waiting for patrol command";
                int32_t item_14_8 = 0xffffffff;
                int32_t item_18_10 = context;
                return data_3;
                break;
            }
            case 1:
            {
                return FX_FireBallUpdate_18(context, param_2, 0, Combat_Reload);
                break;
            }
            case 2:
            {
                return FX_FireBallUpdate_18(context, param_2, 0, FX_StandThrowingGrenade);
                break;
            }
            case 3:
            {
                AI_UpdatePatrol_3(context + 0x3e88, context);
                Combat_BeginBurst(context, *(flagP1 + 0x20));
                *(flagP1 + 0x20) = 0;
                return FX_FireBallUpdate_18(context, param_2, 0, StandFire);
                break;
            }
            case 4:
            {
                return FX_FireBallUpdate_18(context, param_2, 0, CloseCombat);
                break;
            }
            case 5:
            {
                return FX_FireBallUpdate_18(context, param_2, sub_48c750, 0);
                break;
            }
            case 6:
            {
                return FX_FireBallUpdate_18(context, param_2, CombatFollow_Install, 0);
                break;
            }
            case 7:
            {
                return FX_FireBallUpdate_18(context, param_2, sub_48caa0, 0);
                break;
            }
        }
    }

    return AI_CombatTarget_2(context, param_2);
}

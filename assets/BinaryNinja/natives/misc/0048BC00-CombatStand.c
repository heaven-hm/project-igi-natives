// Original IGI.EXE function: CombatStand (VA 0x0048BC00; static CFG gate PASS, CFG score 1.000).
#include "CombatStand.h"
int32_t* CombatStand(int32_t* context, int32_t* param_2)

{
    char* item_10 = "Combat - Stand";
    int32_t item_14 = 0xffffffff;
    int32_t* item_18 = context;
    void* flagP1 = param_2[0xa] + 8;
    FX_SmokeEmit_17(context, flagP1);

    if (context[0xf79])
    {
        int32_t data_2 = FX_FireBallUpdate_19(context, flagP1);

        if (!data_2)
            return FX_FireBallUpdate_18(context, param_2, 0x48c510, 0);

        if (data_2 == 1)
        {
            void* data_20 = FX_FireBallUpdate_18(context, param_2, 0, FX_StandRollLeft);
            context[0xf1f] = 0x3f800000;
            context[0xf7d] = 1;
            return data_20;
        }

        if (data_2 == 2)
        {
            void* data_19 = FX_FireBallUpdate_18(context, param_2, 0, FX_StandRollRight);
            context[0xf20] = 0x3f800000;
            context[0xf7d] = 0xffffffff;
            return data_19;
        }

        int32_t data_6 = param_2[9];
        void* data_7;

        if (data_6)
        {
            data_7 = data_6(context, param_2);

            if (!data_7)
                return data_7;

            param_2[9] = 0;
            return data_7;
        }

        if (!Locomotion_GetState(context, 0))
        {
            void* data_9 = Locomotion_GetState(context, 3);

            if (data_9)
                data_9 = AI_WriteChannel(context, 3, -1.0f);

            char* item_10_4 = "Waiting for stand state";
            int32_t item_14_6 = 0xffffffff;
            int32_t* item_18_2 = context;
            return data_9;
        }

        data_7 = FX_FragmentSimulate_19(context, flagP1) + 1;

        if (data_7 > 8)
            return data_7;

        switch (data_7)
        {
            case nullptr:
            {
                char* item_10_7 = "Waiting for patrol command";
                int32_t item_14_9 = 0xffffffff;
                int32_t* item_18_10 = context;
                return data_7;
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
                AI_UpdatePatrol_3(&context[0xfa2], context);
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

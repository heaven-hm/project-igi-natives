// Original IGI.EXE function: CombatKneel (VA 0x0048C280; static CFG gate PASS, CFG score 1.000).
#include "CombatKneel.h"
int32_t* CombatKneel(int32_t* context, int32_t* param_2)

{
    char* item_10 = "Combat - Kneel";
    int32_t item_14 = 0xffffffff;
    int32_t* item_18 = context;
    void* flagP1 = param_2[0xa] + 8;
    FX_SmokeEmit_17(context, flagP1);

    if (context[0xf79])
    {
        AI_WriteChannel(context, 1, 1.0f);
        int32_t data_2 = FX_FireBallUpdate_19(context, flagP1);

        if (!data_2)
            return FX_FireBallUpdate_18(context, param_2, 0x48c510, 0);

        if (data_2 == 1)
        {
            void* data_20 = FX_FireBallUpdate_18(context, param_2, 0, FX_KneelRollLeft);
            context[0xf1f] = 0x3f800000;
            context[0xf7d] = 1;
            return data_20;
        }

        if (data_2 == 2)
        {
            void* data_19 = FX_FireBallUpdate_18(context, param_2, 0, FX_KneelRollRight);
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

        if (!Locomotion_GetState(context, 1))
        {
            char* item_18_2 = "Waiting for kneel state";
            int32_t item_1c_2 = 0xffffffff;
            int32_t* item_20_2 = context;
            return Locomotion_GetState(context, 3);
        }

        long double fpu_val_7_1 = 0.0;
        long double f3_1 = *(context + 0x3db8);
        fpu_val_7_1 - f3_1;

        if (!(*(&((fpu_val_7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            AI_WriteChannel(context, 1, 0.0f);
            return FX_FireBallUpdate_18(context, param_2, Combat_MobileC, 0);
        }

        data_7 = FX_FragmentSimulate_19(context, flagP1) + 1;

        if (data_7 > 8)
            return data_7;

        switch (data_7)
        {
            case nullptr:
            {
                char* item_10_6 = "Waiting for patrol command";
                int32_t item_14_8 = 0xffffffff;
                int32_t* item_18_10 = context;
                return data_7;
                break;
            }
            case 1:
            {
                return FX_FireBallUpdate_18(context, param_2, 0, FX_DebrisSpawn_19);
                break;
            }
            case 2:
            {
                char* item_10_5 = "Kneel throw grenade";
                int32_t item_14_7 = 0xffffffff;
                int32_t* item_18_6 = context;
                return data_7;
                break;
            }
            case 3:
            {
                AI_UpdatePatrol_3(&context[0xfa2], context);
                Combat_BeginBurst(context, *(flagP1 + 0x20));
                *(flagP1 + 0x20) = 0;
                return FX_FireBallUpdate_18(context, param_2, 0, FX_KneelFire);
                break;
            }
            case 4:
            {
                AI_WriteChannel(context, 1, 0.0f);
                return FX_FireBallUpdate_18(context, param_2, Combat_MobileC, 0);
                break;
            }
            case 5:
            {
                AI_WriteChannel(context, 1, 0.0f);
                FX_FireBallUpdate_18(context, param_2, Combat_MobileC, 0);
                return FX_FireBallUpdate_18(context, param_2, sub_48c750, 0);
                break;
            }
            case 6:
            {
                AI_WriteChannel(context, 1, 0.0f);
                FX_FireBallUpdate_18(context, param_2, Combat_MobileC, 0);
                return FX_FireBallUpdate_18(context, param_2, CombatFollow_Install, 0);
                break;
            }
            case 7:
            {
                AI_WriteChannel(context, 1, 0.0f);
                FX_FireBallUpdate_18(context, param_2, Combat_MobileC, 0);
                return FX_FireBallUpdate_18(context, param_2, sub_48caa0, 0);
                break;
            }
        }
    }

    return AI_CombatTarget_2(context, param_2);
}

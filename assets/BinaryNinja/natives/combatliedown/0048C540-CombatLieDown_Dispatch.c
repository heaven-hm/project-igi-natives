// Original IGI.EXE function: CombatLieDown_Dispatch (VA 0x0048C540; static CFG gate PASS, CFG score 1.000).
#include "CombatLieDown_Dispatch.h"
int32_t* CombatLieDown_Dispatch(int32_t* context, int32_t* param_2)

{
    char* item_10 = "Combat - Liedown";
    int32_t item_14 = 0xffffffff;
    int32_t* item_18 = context;
    void* flagP1 = param_2[0xa] + 8;
    FX_SmokeEmit_17(context, flagP1);

    if (context[0xf79])
    {
        AI_WriteChannel(context, 2, 1.0f);
        int32_t data_2 = param_2[9];
        int32_t result;

        if (data_2)
        {
            result = data_2(context, param_2);

            if (!result)
                return result;

            param_2[9] = 0;
            return result;
        }

        if (!Locomotion_GetState(context, 2))
        {
            char* item_18_2 = "Waiting for liedown state";
            int32_t item_1c_1 = 0xffffffff;
            int32_t* item_20_1 = context;
            return Locomotion_GetState(context, 3);
        }

        long double fpu_val_7_1 = 0.0;
        long double f0_1 = *(context + 0x3db8);
        fpu_val_7_1 - f0_1;

        if (!(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            AI_WriteChannel(context, 2, 0.0f);
            return FX_FireBallUpdate_18(context, param_2, Combat_MobileC, 0);
        }

        result = FX_FragmentSimulate_19(context, flagP1) + 1;

        if (result > 8)
            return result;

        switch (result)
        {
            case 0:
            {
                char* item_10_6 = "Waiting for patrol command";
                int32_t item_14_8 = 0xffffffff;
                int32_t* item_18_10 = context;
                return result;
                break;
            }
            case 1:
            {
                return FX_FireBallUpdate_18(context, param_2, 0, FX_TrailUpdate_19);
                break;
            }
            case 2:
            {
                char* item_10_5 = "liedown throw grenade";
                int32_t item_14_7 = 0xffffffff;
                int32_t* item_18_6 = context;
                return result;
                break;
            }
            case 3:
            {
                AI_UpdatePatrol_3(&context[0xfa2], context);
                Combat_BeginBurst(context, *(flagP1 + 0x20));
                *(flagP1 + 0x20) = 0;
                return FX_FireBallUpdate_18(context, param_2, 0, FX_LiedownFire);
                break;
            }
            case 4:
            {
                AI_WriteChannel(context, 2, 0.0f);
                return FX_FireBallUpdate_18(context, param_2, Combat_MobileC, 0);
                break;
            }
            case 5:
            {
                AI_WriteChannel(context, 2, 0.0f);
                FX_FireBallUpdate_18(context, param_2, Combat_MobileC, 0);
                return FX_FireBallUpdate_18(context, param_2, sub_48c750, 0);
                break;
            }
            case 6:
            {
                AI_WriteChannel(context, 2, 0.0f);
                FX_FireBallUpdate_18(context, param_2, Combat_MobileC, 0);
                return FX_FireBallUpdate_18(context, param_2, CombatFollow_Install, 0);
                break;
            }
            case 7:
            {
                AI_WriteChannel(context, 2, 0.0f);
                FX_FireBallUpdate_18(context, param_2, Combat_MobileC, 0);
                return FX_FireBallUpdate_18(context, param_2, sub_48caa0, 0);
                break;
            }
        }
    }

    return AI_CombatTarget_2(context, param_2);
}

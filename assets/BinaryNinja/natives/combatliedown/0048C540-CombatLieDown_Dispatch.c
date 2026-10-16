#include "CombatLieDown_Dispatch.h"
int32_t* CombatLieDown_Dispatch(int32_t* a1, int32_t* a2)

{
    char* v_10 = "Combat - Liedown";
    int32_t v_14 = 0xffffffff;
    int32_t* v_18 = a1;
    void* flagP1 = a2[0xa] + 8;
    FX_SmokeEmit_17(a1, flagP1);

    if (a1[0xf79])
    {
        AI_WriteChannel(a1, 2, 1f);
        int32_t valA2 = a2[9];
        int32_t result;

        if (valA2)
        {
            result = valA2(a1, a2);

            if (!result)
                return result;

            a2[9] = 0;
            return result;
        }

        if (!Locomotion_GetState(a1, 2))
        {
            char* v_18_2 = "Waiting for liedown state";
            int32_t v_1c_1 = 0xffffffff;
            int32_t* v_20_1 = a1;
            return Locomotion_GetState(a1, 3);
        }

        long double x87_r7_1 = 0.0;
        long double f0_1 = *(a1 + 0x3db8);
        x87_r7_1 - f0_1;

        if (!(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            AI_WriteChannel(a1, 2, 0f);
            return FX_FireBallUpdate_18(a1, a2, Combat_MobileC, 0);
        }

        result = FX_FragmentSimulate_19(a1, flagP1) + 1;

        if (result > 8)
            return result;

        switch (result)
        {
            case 0:
            {
                char* v_10_6 = "Waiting for patrol command";
                int32_t v_14_8 = 0xffffffff;
                int32_t* v_18_10 = a1;
                return result;
                break;
            }
            case 1:
            {
                return FX_FireBallUpdate_18(a1, a2, 0, FX_TrailUpdate_19);
                break;
            }
            case 2:
            {
                char* v_10_5 = "liedown throw grenade";
                int32_t v_14_7 = 0xffffffff;
                int32_t* v_18_6 = a1;
                return result;
                break;
            }
            case 3:
            {
                AI_UpdatePatrol_3(&a1[0xfa2], a1);
                Combat_BeginBurst(a1, *(flagP1 + 0x20));
                *(flagP1 + 0x20) = 0;
                return FX_FireBallUpdate_18(a1, a2, 0, FX_LiedownFire);
                break;
            }
            case 4:
            {
                AI_WriteChannel(a1, 2, 0f);
                return FX_FireBallUpdate_18(a1, a2, Combat_MobileC, 0);
                break;
            }
            case 5:
            {
                AI_WriteChannel(a1, 2, 0f);
                FX_FireBallUpdate_18(a1, a2, Combat_MobileC, 0);
                return FX_FireBallUpdate_18(a1, a2, sub_48c750, 0);
                break;
            }
            case 6:
            {
                AI_WriteChannel(a1, 2, 0f);
                FX_FireBallUpdate_18(a1, a2, Combat_MobileC, 0);
                return FX_FireBallUpdate_18(a1, a2, CombatFollow_Install, 0);
                break;
            }
            case 7:
            {
                AI_WriteChannel(a1, 2, 0f);
                FX_FireBallUpdate_18(a1, a2, Combat_MobileC, 0);
                return FX_FireBallUpdate_18(a1, a2, sub_48caa0, 0);
                break;
            }
        }
    }

    return AI_CombatTarget_2(a1, a2);
}

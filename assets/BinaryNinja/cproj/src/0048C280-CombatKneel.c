#include "gi_platform.h"
#include "0048C280-CombatKneel.h"
int32_t* CombatKneel(int32_t* a1, int32_t* a2)

{
    char* v_10 = "Combat - Kneel";
    int32_t v_14 = 0xffffffff;
    int32_t* v_18 = a1;
    void* flagP1 = a2[0xa] + 8;
    FX_SmokeEmit_17(a1, flagP1);

    if (a1[0xf79])
    {
        AI_WriteChannel(a1, 1, 1.0f);
        int32_t valA2 = FX_FireBallUpdate_19(a1, flagP1);

        if (!valA2)
            return FX_FireBallUpdate_18(a1, a2, 0x48c510, 0);

        if (valA2 == 1)
        {
            void* valA20 = FX_FireBallUpdate_18(a1, a2, 0, FX_KneelRollLeft);
            a1[0xf1f] = 0x3f800000;
            a1[0xf7d] = 1;
            return valA20;
        }

        if (valA2 == 2)
        {
            void* valA19 = FX_FireBallUpdate_18(a1, a2, 0, FX_KneelRollRight);
            a1[0xf20] = 0x3f800000;
            a1[0xf7d] = 0xffffffff;
            return valA19;
        }

        int32_t valA6 = a2[9];
        void* valA7;

        if (valA6)
        {
            valA7 = valA6(a1, a2);

            if (!valA7)
                return valA7;

            a2[9] = 0;
            return valA7;
        }

        if (!Locomotion_GetState(a1, 1))
        {
            char* v_18_2 = "Waiting for kneel state";
            int32_t v_1c_2 = 0xffffffff;
            int32_t* v_20_2 = a1;
            return Locomotion_GetState(a1, 3);
        }

        long double x87_r7_1 = 0.0;
        long double f3_1 = (*(int32_t*)(uintptr_t)(a1 + 0x3db8));
        x87_r7_1 - f3_1;

        if (!(*(&((x87_r7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            AI_WriteChannel(a1, 1, 0.0f);
            return FX_FireBallUpdate_18(a1, a2, Combat_MobileC, 0);
        }

        valA7 = FX_FragmentSimulate_19(a1, flagP1) + 1;

        if (valA7 > 8)
            return valA7;

        switch (valA7)
        {
            case nullptr:
            {
                char* v_10_6 = "Waiting for patrol command";
                int32_t v_14_8 = 0xffffffff;
                int32_t* v_18_10 = a1;
                return valA7;
                break;
            }
            case 1:
            {
                return FX_FireBallUpdate_18(a1, a2, 0, FX_DebrisSpawn_19);
                break;
            }
            case 2:
            {
                char* v_10_5 = "Kneel throw grenade";
                int32_t v_14_7 = 0xffffffff;
                int32_t* v_18_6 = a1;
                return valA7;
                break;
            }
            case 3:
            {
                AI_UpdatePatrol_3(&a1[0xfa2], a1);
                Combat_BeginBurst(a1, *(flagP1 + 0x20));
                *(flagP1 + 0x20) = 0;
                return FX_FireBallUpdate_18(a1, a2, 0, FX_KneelFire);
                break;
            }
            case 4:
            {
                AI_WriteChannel(a1, 1, 0.0f);
                return FX_FireBallUpdate_18(a1, a2, Combat_MobileC, 0);
                break;
            }
            case 5:
            {
                AI_WriteChannel(a1, 1, 0.0f);
                FX_FireBallUpdate_18(a1, a2, Combat_MobileC, 0);
                return FX_FireBallUpdate_18(a1, a2, sub_48c750, 0);
                break;
            }
            case 6:
            {
                AI_WriteChannel(a1, 1, 0.0f);
                FX_FireBallUpdate_18(a1, a2, Combat_MobileC, 0);
                return FX_FireBallUpdate_18(a1, a2, CombatFollow_Install, 0);
                break;
            }
            case 7:
            {
                AI_WriteChannel(a1, 1, 0.0f);
                FX_FireBallUpdate_18(a1, a2, Combat_MobileC, 0);
                return FX_FireBallUpdate_18(a1, a2, sub_48caa0, 0);
                break;
            }
        }
    }

    return AI_CombatTarget_2(a1, a2);
}

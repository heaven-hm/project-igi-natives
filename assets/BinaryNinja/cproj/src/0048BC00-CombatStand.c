#include "gi_platform.h"
#include "0048BC00-CombatStand.h"
int32_t* CombatStand(int32_t* a1, int32_t* a2)

{
    char* v_10 = "Combat - Stand";
    int32_t v_14 = 0xffffffff;
    int32_t* v_18 = a1;
    void* flagP1 = a2[0xa] + 8;
    FX_SmokeEmit_17(a1, flagP1);

    if (a1[0xf79])
    {
        int32_t valA2 = FX_FireBallUpdate_19(a1, flagP1);

        if (!valA2)
            return FX_FireBallUpdate_18(a1, a2, 0x48c510, 0);

        if (valA2 == 1)
        {
            void* valA20 = FX_FireBallUpdate_18(a1, a2, 0, FX_StandRollLeft);
            a1[0xf1f] = 0x3f800000;
            a1[0xf7d] = 1;
            return valA20;
        }

        if (valA2 == 2)
        {
            void* valA19 = FX_FireBallUpdate_18(a1, a2, 0, FX_StandRollRight);
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

        if (!Locomotion_GetState(a1, 0))
        {
            void* valA9 = Locomotion_GetState(a1, 3);

            if (valA9)
                valA9 = AI_WriteChannel(a1, 3, -1.0f);

            char* v_10_4 = "Waiting for stand state";
            int32_t v_14_6 = 0xffffffff;
            int32_t* v_18_2 = a1;
            return valA9;
        }

        valA7 = FX_FragmentSimulate_19(a1, flagP1) + 1;

        if (valA7 > 8)
            return valA7;

        switch (valA7)
        {
            case nullptr:
            {
                char* v_10_7 = "Waiting for patrol command";
                int32_t v_14_9 = 0xffffffff;
                int32_t* v_18_10 = a1;
                return valA7;
                break;
            }
            case 1:
            {
                return FX_FireBallUpdate_18(a1, a2, 0, Combat_Reload);
                break;
            }
            case 2:
            {
                return FX_FireBallUpdate_18(a1, a2, 0, FX_StandThrowingGrenade);
                break;
            }
            case 3:
            {
                AI_UpdatePatrol_3(&a1[0xfa2], a1);
                Combat_BeginBurst(a1, *(flagP1 + 0x20));
                *(flagP1 + 0x20) = 0;
                return FX_FireBallUpdate_18(a1, a2, 0, StandFire);
                break;
            }
            case 4:
            {
                return FX_FireBallUpdate_18(a1, a2, 0, CloseCombat);
                break;
            }
            case 5:
            {
                return FX_FireBallUpdate_18(a1, a2, sub_48c750, 0);
                break;
            }
            case 6:
            {
                return FX_FireBallUpdate_18(a1, a2, CombatFollow_Install, 0);
                break;
            }
            case 7:
            {
                return FX_FireBallUpdate_18(a1, a2, sub_48caa0, 0);
                break;
            }
        }
    }

    return AI_CombatTarget_2(a1, a2);
}

// Original IGI.EXE function: Named_Combat (VA 0x0048ACC0; static CFG gate PASS, CFG score 1.000).
#include "Named_Combat.h"
int32_t* Named_Combat(int32_t a1, int32_t* a2)

{
    char* v_10 = "Female Combat - Stand";
    int32_t v_14 = 0xffffffff;
    int32_t v_18 = a1;
    void* flagP1 = a2[0xa] + 8;
    FX_SmokeEmit_17(a1, flagP1);

    if (*(a1 + 0x3de4))
    {
        int32_t valA2 = a2[9];
        int32_t valA3;

        if (valA2)
        {
            valA3 = valA2(a1, a2);

            if (!valA3)
                return valA3;

            a2[9] = 0;
            return valA3;
        }

        if (!Locomotion_GetState(a1, 0))
        {
            void* valA5 = Locomotion_GetState(a1, 3);

            if (valA5)
                valA5 = AI_WriteChannel(a1, 3, -1f);

            char* v_10_3 = "Waiting for stand state";
            int32_t v_14_5 = 0xffffffff;
            int32_t v_18_2 = a1;
            return valA5;
        }

        valA3 = FX_FragmentSimulate_18(a1, flagP1) + 1;

        if (valA3 > 8)
            return valA3;

        switch (valA3)
        {
            case 0:
            {
                char* v_10_6 = "Waiting for patrol command";
                int32_t v_14_8 = 0xffffffff;
                int32_t v_18_10 = a1;
                return valA3;
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
                AI_UpdatePatrol_3(a1 + 0x3e88, a1);
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

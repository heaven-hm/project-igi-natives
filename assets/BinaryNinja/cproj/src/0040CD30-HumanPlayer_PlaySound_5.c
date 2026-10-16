#include "gi_platform.h"
#include "0040CD30-HumanPlayer_PlaySound_5.h"
int32_t* HumanPlayer_PlaySound_5(void* a1, int32_t a2)

{
    AI_UpdatePatrol_21(a1, AI_CheckHearing_21(a1));
    AI_AlertAllies_20(a1);
    void* valA2 = a2 - 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x7bc)) = 0;

    switch (valA2)
    {
        case nullptr:
        {
            AI_FireWeapon_18(AI_CombatTarget_21(a1));
            AI_SelectTarget_20(a1);
            return AI_UpdatePatrol_21(a1, nullptr);
            break;
        }
        case 1:
        {
            Env_CheckAmbientArea_6(AI_CombatTarget_21(a1));
            AI_SelectTarget_20(a1);
            return AI_UpdatePatrol_21(a1, nullptr);
            break;
        }
        case 2:
        {
            void* valA6 = AI_CombatTarget_21(a1);

            if (!Env_InitLadder_9(valA6))
            {
                Env_ScanViewCone_9(valA6);
                HumanPlayer_ApplyRecoil_4(valA6, a1);
                AI_SelectTarget_20(a1);
                return AI_UpdatePatrol_21(a1, nullptr);
            }

            valA2 = Env_InitLadder_9(valA6);

            if (valA2)
            {
                valA2 = Env_TriggerAlarm_9(valA6);

                if (valA2)
                {
                    void* tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x2f0));
                    (*(int32_t*)(uintptr_t)(a1 + 0x2f8)) = (*(int32_t*)(uintptr_t)(a1 + 0x2fc));
                    (*(int32_t*)(uintptr_t)(a1 + 0x2fc)) = 0x1e;
                    int32_t valA9 = *(tmpD + 0x78);
                    (*(int32_t*)(uintptr_t)(a1 + 0x300)) = valA9;
                    return valA9(a1 + 0x2ec, a1);
                }
            }
            break;
        }
        case 3:
        {
            void* objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x2f0));
            (*(int32_t*)(uintptr_t)(a1 + 0x2f8)) = (*(int32_t*)(uintptr_t)(a1 + 0x2fc));
            (*(int32_t*)(uintptr_t)(a1 + 0x2fc)) = 0x1f;
            int32_t valA12 = *(objC1 + 0x7c);
            (*(int32_t*)(uintptr_t)(a1 + 0x300)) = valA12;
            return valA12(a1 + 0x2ec, a1);
            break;
        }
        case 4:
        {
            void* valA14 = (*(int32_t*)(uintptr_t)(a1 + 0x2f0));
            (*(int32_t*)(uintptr_t)(a1 + 0x2f8)) = (*(int32_t*)(uintptr_t)(a1 + 0x2fc));
            (*(int32_t*)(uintptr_t)(a1 + 0x2fc)) = 0x20;
            int32_t valA15 = *(valA14 + 0x80);
            (*(int32_t*)(uintptr_t)(a1 + 0x300)) = valA15;
            return valA15(a1 + 0x2ec, a1);
            break;
        }
        case 5:
        {
            void* tmpD2 = (*(int32_t*)(uintptr_t)(a1 + 0x2f0));
            (*(int32_t*)(uintptr_t)(a1 + 0x2f8)) = (*(int32_t*)(uintptr_t)(a1 + 0x2fc));
            (*(int32_t*)(uintptr_t)(a1 + 0x2fc)) = 0x21;
            int32_t valA17 = *(tmpD2 + 0x84);
            (*(int32_t*)(uintptr_t)(a1 + 0x300)) = valA17;
            return valA17(a1 + 0x2ec, a1);
            break;
        }
        case 6:
        {
            void* objC3 = (*(int32_t*)(uintptr_t)(a1 + 0x2f0));
            (*(int32_t*)(uintptr_t)(a1 + 0x2f8)) = (*(int32_t*)(uintptr_t)(a1 + 0x2fc));
            (*(int32_t*)(uintptr_t)(a1 + 0x2fc)) = 0x22;
            int32_t valA20 = *(objC3 + 0x88);
            (*(int32_t*)(uintptr_t)(a1 + 0x300)) = valA20;
            return valA20(a1 + 0x2ec, a1);
            break;
        }
        case 8:
        {
            int32_t valA28 = Vehicle_UpdateCockpit_10(AI_CombatTarget_21(a1));

            if (!valA28)
            {
                (*(int32_t*)(uintptr_t)(a1 + 0xd93)) = 1;
                return valA28;
            }

            (*(int32_t*)(uintptr_t)(a1 + 0xda0)) = 1;
            return valA28;
            break;
        }
        case 9:
        {
            (*(int32_t*)(uintptr_t)(a1 + 0xd78)) = 1;
            break;
        }
        case 0xa:
        {
            (*(int32_t*)(uintptr_t)(a1 + 0xd90)) = 1;
            break;
        }
        case 0xb:
        {
            void* valA22 = (*(int32_t*)(uintptr_t)(a1 + 0x2f0));
            (*(int32_t*)(uintptr_t)(a1 + 0x2f8)) = (*(int32_t*)(uintptr_t)(a1 + 0x2fc));
            (*(int32_t*)(uintptr_t)(a1 + 0x2fc)) = 0x23;
            int32_t valA23 = *(valA22 + 0x8c);
            (*(int32_t*)(uintptr_t)(a1 + 0x300)) = valA23;
            return valA23(a1 + 0x2ec, a1);
            break;
        }
        case 0xc:
        {
            void* tmpD4 = (*(int32_t*)(uintptr_t)(a1 + 0x2f0));
            (*(int32_t*)(uintptr_t)(a1 + 0x2f8)) = (*(int32_t*)(uintptr_t)(a1 + 0x2fc));
            (*(int32_t*)(uintptr_t)(a1 + 0x2fc)) = 0x24;
            int32_t valA25 = *(tmpD4 + 0x90);
            (*(int32_t*)(uintptr_t)(a1 + 0x300)) = valA25;
            return valA25(a1 + 0x2ec, a1);
            break;
        }
    }

    return valA2;
}

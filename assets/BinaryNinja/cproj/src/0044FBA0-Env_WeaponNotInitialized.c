#include "gi_platform.h"
#include "0044FBA0-Env_WeaponNotInitialized.h"
void Env_WeaponNotInitialized(void* a1)

{
    void* ctxB = (*(int32_t*)(uintptr_t)(a1 + 0x14));
    int32_t* i = (*(int32_t*)(uintptr_t)(ctxB + 8));

    if (!*i || !i)
        return;

    do
    {
        int32_t valA1 = Weapon_ComputeAccuracy_5();
        int16_t v_1c_1 = valA1;
        valA1 = i[7];
        int32_t valA;
        int32_t objC1;
        valA = TaskType_IsDerivedFrom(valA1, v_1c_1);

        if (valA)
        {
            int32_t* valA2;
            float* tmpD;
            valA2 = HumanPlayer_LoadParameters_13(valA, tmpD, objC1, i);

            if (valA2)
            {
                valA = valA2[0x184];

                if (valA >= 0)
                {
                    if (valA <= 2)
                    {
                        (*(int32_t*)(uintptr_t)(a1 + 0x3dfc)) = 1;
                        (*(int32_t*)(uintptr_t)(a1 + 0x3e00)) = *valA2;
                        valA = Script_ExecuteLevelScript_12(ctxB + 0x4c4, nullptr, i);
                    }
                    else if (valA == 4)
                    {
                        tmpD = *(SoundSys_EvaluateTrigger_18(&valA2[0x187]) + 0x2d4);
                        long double x87_r7_2 = *tmpD * 30.0f;
                        (*(int32_t*)(uintptr_t)(a1 + 0x3dfd)) = 1;
                        (*(int32_t*)(uintptr_t)(a1 + 0x3e08)) = x87_r7_2;
                        (*(int32_t*)(uintptr_t)(a1 + 0x3e04)) = *valA2;
                    }
                }
            }
            else
            {
                int32_t v_20_2 = Script_EvaluateCondition_4(ctxB);
                valA = Warning_Show("Weapon not initialized, human #%d");
            }
        }

        i = *i;

        if (!i)
            break;

        if (!*i)
            break;
    } while (i);
}

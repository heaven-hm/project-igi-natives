#include "gi_platform.h"
#include "004593C0-AI_CheckHearing_12.h"
void* AI_CheckHearing_12(void* a1, int32_t* a2)

{
    void* srcS = a2;
    void* flagP = (*(int32_t*)(uintptr_t)(srcS + 0x800));
    int32_t v_8 = 0x1a;
    int32_t v_4 = 0x18;
    a2 = 0xffffffff;
    void* valA = Table_GetAt(srcS + 0x4c4, 0);

    if (valA)
    {
        Script_ParseEnumInt32_13(valA);
        Script_ExecuteLevelScript_12(srcS + 0x4c4, nullptr, nullptr);
    }

    Script_EvaluateCondition_12(srcS);
    (*(int32_t*)(uintptr_t)(srcS + 0x33d)) = 0;
    (*(int32_t*)(uintptr_t)(srcS + 0x696)) = 1;
    int32_t ctxB1 = (*(int32_t*)(uintptr_t)(srcS + 0x2e8));
    int32_t valA1 = FX_FragmentSimulate_14(srcS + 0x254, ctxB1);

    if (!flagP)
    {
    label_45945a: ;
        uint32_t valA3 = Sys_FreeMemory_14(Level_SetMission_5(), 2);
        int32_t objC1 = (*(int32_t*)(uintptr_t)(srcS + 0xd1c));

        if (objC1 >= 0)
        {
            if (objC1 <= 1)
            {
                long double fpu0;
                int32_t valA5 = AI_AlertAllies_16(fpu0, srcS, srcS + 0xd20);
                char f0_1 = valA5;
                valA5 = -(valA5);
                a2 = valA5 - valA5 + 0x1c;
            }
            else if (objC1 == 2)
            {
                if (ctxB1 == 0xf || ctxB1 == 0x10)
                    a2 = *(valA1 + (valA3 << 2) + 8);
                else
                    a2 = (&v_8)[valA3];
            }
        }
    }
    else
    {
        int32_t* flagP1 = *(flagP + 0x3ad0);

        if (flagP1 == 0xffffffff)
            goto label_45945a;

        a2 = flagP1;

        if (flagP1 == 0xffffffff)
            goto label_45945a;
    }

    Bones_PlayAnimation(srcS + 0x68, 0, a2, 0, 0.0f);
    Soldier_DeathFallSolver(srcS + 0xd38, srcS, (*(int32_t*)(uintptr_t)(srcS + 0xcf8)), a2);
    Human_ViewCam(srcS, 3);
    AI_MoveToNode_22((*(int32_t*)(uintptr_t)(srcS + 0x4ec)));
    AI_TakeCover_20(srcS);
    AI_TakeCover_21(srcS, "ai_death_", 4);
    void* result = FX_TrailUpdate_15(srcS);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_459680;
    return result;
}

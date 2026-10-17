// Original IGI.EXE function: AI_CombatTarget_9 (VA 0x004567C0; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatTarget_9.h"
struct status_msg* AI_CombatTarget_9(void* a1, int32_t* a2)

{
    void* srcS = a2;
    void* flagP = *(srcS + 0x800);
    int32_t v_8 = 0xe;
    int32_t v_4 = 0xc;
    a2 = 0xffffffff;
    void* valA = Table_GetAt(srcS + 0x4c4, 0);

    if (valA)
    {
        Script_ParseEnumInt32_13(valA);
        Script_ExecuteLevelScript_12(srcS + 0x4c4, nullptr, nullptr);
    }

    Script_EvaluateCondition_12(srcS);
    *(srcS + 0x33d) = 0;
    *(srcS + 0x696) = 1;
    int32_t ctxB1 = *(srcS + 0x2e8);
    int32_t valA1 = FX_FragmentSimulate_14(srcS + 0x254, ctxB1);

    if (!flagP)
    {
    label_45685a:
        uint32_t valA3 = Sys_FreeMemory_14(Level_SetMission_5(), 2);
        int32_t objC1 = *(srcS + 0xd08);

        if (objC1 >= 0)
        {
            if (objC1 <= 1)
            {
                long double fpu0;
                int32_t valA5 = AI_AlertAllies_16(fpu0, srcS, srcS + 0xd10);
                char f0_1 = valA5;
                valA5 = -(valA5);
                a2 = valA5 - valA5 + 0x10;
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
            goto label_45685a;

        a2 = flagP1;

        if (flagP1 == 0xffffffff)
            goto label_45685a;
    }

    Bones_PlayAnimation(srcS + 0x68, 0, a2, 0, 0f);
    Soldier_DeathFallSolver(srcS + 0xd28, srcS, *(srcS + 0xcf8), a2);
    Human_ViewCam(srcS, 3);
    AI_MoveToNode_22(*(srcS + 0x4ec));
    AI_TakeCover_20(srcS);
    struct status_msg* result = AI_TakeCover_21(srcS, "ai_death_", 4);
    *(a1 + 0x14) = sub_456920;
    return result;
}

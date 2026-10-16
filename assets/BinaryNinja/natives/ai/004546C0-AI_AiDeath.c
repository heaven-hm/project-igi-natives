#include "AI_AiDeath.h"
void* AI_AiDeath(void* a1, void* a2)

{
    void* flagP = *(a2 + 0x800);
    void* valA = Table_GetAt(a2 + 0x4c4, 0);

    if (valA)
    {
        Script_ParseEnumInt32_13(valA);
        Script_ExecuteLevelScript_12(a2 + 0x4c4, nullptr, nullptr);
    }

    Script_EvaluateCondition_12(a2);
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 1;
    void* valA2 = FX_FragmentSimulate_14(a2 + 0x254, *(a2 + 0x2e8));
    int32_t* dstD1;

    if (!flagP)
        dstD1 = *(valA2 + 8);
    else
    {
        int32_t* flagP1 = *(flagP + 0x3ad0);

        if (flagP1 == 0xffffffff)
            dstD1 = *(valA2 + 8);
        else
        {
            dstD1 = flagP1;

            if (dstD1 == 0xffffffff)
                dstD1 = *(valA2 + 8);
        }
    }

    Bones_PlayAnimation(a2 + 0x68, 0, dstD1, 0, 0f);
    Soldier_DeathFallSolver(a2 + 0xd38, a2, *(a2 + 0xcf8), dstD1);
    Human_ViewCam(a2, 3);
    AI_MoveToNode_22(*(a2 + 0x4ec));
    AI_TakeCover_20(a2);
    AI_TakeCover_21(a2, "ai_death_", 4);
    void* result = FX_TrailUpdate_15(a2);
    *(a1 + 0x14) = sub_4547b0;
    return result;
}

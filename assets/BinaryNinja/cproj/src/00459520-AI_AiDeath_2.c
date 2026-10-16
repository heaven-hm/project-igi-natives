#include "gi_platform.h"
#include "00459520-AI_AiDeath_2.h"
void* AI_AiDeath_2(void* a1, void* a2)

{
    void* valA = Table_GetAt(a2 + 0x4c4, 0);

    if (valA)
    {
        Script_ParseEnumInt32_13(valA);
        Script_ExecuteLevelScript_12(a2 + 0x4c4, nullptr, nullptr);
    }

    Script_EvaluateCondition_12(a2);
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x696)) = 1;
    Bones_PlayAnimation(a2 + 0x68, 0, 0x1d, 0, 0.0f);
    Soldier_DeathFallSolver(a2 + 0xd38, a2, (*(int32_t*)(uintptr_t)(a2 + 0xcf8)), 0x1d);
    Human_ViewCam(a2, 3);
    AI_MoveToNode_22((*(int32_t*)(uintptr_t)(a2 + 0x4ec)));
    AI_TakeCover_20(a2);
    AI_TakeCover_21(a2, "ai_death_", 4);
    void* result = FX_TrailUpdate_15(a2);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_459680;
    return result;
}

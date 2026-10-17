// IGI native provenance: Soldier_DeathStateB - 0x0045C650 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045C650-Soldier_DeathStateB.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Soldier_DeathStateB.h"
void* Soldier_DeathStateB(void* context, void* param_2)

{
    void* data_val = Table_GetAt(param_2 + 0x4c4, 0);

    if (data_val)
    {
        Script_ParseEnumInt32_13(data_val);
        Script_ExecuteLevelScript_12(param_2 + 0x4c4, nullptr, nullptr);
    }

    Script_EvaluateCondition_12(param_2);
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 1;
    Bones_PlayAnimation(param_2 + 0x68, 0, 0x19, 0, 0.0f);
    Soldier_DeathFallSolver(param_2 + 0xd38, param_2, *(param_2 + 0xcf8), 0x19);
    Human_ViewCam(param_2, 3);
    AI_MoveToNode_22(*(param_2 + 0x4ec));
    AI_TakeCover_20(param_2);
    AI_TakeCover_21(param_2, "ai_death_", 4);
    void* result = FX_TrailUpdate_15(param_2);
    *(context + 0x14) = sub_45c700;
    return result;
}

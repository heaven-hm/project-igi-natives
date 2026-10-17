// IGI native provenance: HumanAI_Process - 0x0044FFC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044FFC0-HumanAI_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Process.h"
int32_t* HumanAI_Process(void* context)

{
    int32_t* data_val = *(context + 0x3e4c);

    if (data_val)
    {
        Qtask_UpdateList(data_val);
        *(context + 0x3e4c) = 0;
    }

    int32_t* data_1 = *(context + 0x3c70);

    if (data_1)
        Qvm_Cleanup(data_1);

    int32_t* entity_val = *(context + 0x3ea0);

    if (entity_val)
    {
        int32_t data_2 = *(context + 0x3ea4);
        AI_MoveToNode_4(entity_val, data_2, data_2);
    }

    Env_UpdateCameraLens_13(context);
    AI_CombatTarget(context);
    void* data_3 = *(context + 0x3ab0);

    if (data_3)
        AI_CombatTarget_5(data_3);

    void* data_4 = *(context + 0x3ab4);

    if (data_4)
        AI_CombatTarget_5(data_4);

    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_6 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_10 = *(((data_6 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_10)
            data_10(context);
    }

    int32_t* result = *(context + 0x8fc);

    for (int32_t* i = *result; i; i = *i)
    {
        AI_CombatTarget_2(context, result);
        result = i;
    }

    result = *(context + 0x3a28);

    if (!result)
        return result;

    return FX_TrailUpdate_13(context + 0x15f8);
}

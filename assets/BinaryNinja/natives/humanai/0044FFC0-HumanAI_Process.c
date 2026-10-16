#include "HumanAI_Process.h"
int32_t* HumanAI_Process(void* a1)

{
    int32_t* valA = *(a1 + 0x3e4c);

    if (valA)
    {
        Qtask_UpdateList(valA);
        *(a1 + 0x3e4c) = 0;
    }

    int32_t* valA1 = *(a1 + 0x3c70);

    if (valA1)
        Qvm_Cleanup(valA1);

    int32_t* objC = *(a1 + 0x3ea0);

    if (objC)
    {
        int32_t valA2 = *(a1 + 0x3ea4);
        AI_MoveToNode_4(objC, valA2, valA2);
    }

    Env_UpdateCameraLens_13(a1);
    AI_CombatTarget(a1);
    void* valA3 = *(a1 + 0x3ab0);

    if (valA3)
        AI_CombatTarget_5(valA3);

    void* valA4 = *(a1 + 0x3ab4);

    if (valA4)
        AI_CombatTarget_5(valA4);

    if (Script_EvaluateCondition_4(a1) >= 0)
    {
        int32_t valA6 = Script_SpawnNewTask_6();
        int32_t objC1 = 0;
        objC1 = *(a1 + 0x1c);
        int32_t valA10 = *(((valA6 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA10)
            valA10(a1);
    }

    int32_t* result = *(a1 + 0x8fc);

    for (int32_t* i = *result; i; i = *i)
    {
        AI_CombatTarget_2(a1, result);
        result = i;
    }

    result = *(a1 + 0x3a28);

    if (!result)
        return result;

    return FX_TrailUpdate_13(a1 + 0x15f8);
}

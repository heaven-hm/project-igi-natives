// IGI native provenance: AI_CheckHearing_12 - 0x004593C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004593C0-AI_CheckHearing_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckHearing_12.h"
void* AI_CheckHearing_12(void* context, int32_t* param_2)

{
    void* source_val = param_2;
    void* flagP = *(source_val + 0x800);
    int32_t item_8 = 0x1a;
    int32_t item_4 = 0x18;
    param_2 = 0xffffffff;
    void* data_val = Table_GetAt(source_val + 0x4c4, 0);

    if (data_val)
    {
        Script_ParseEnumInt32_13(data_val);
        Script_ExecuteLevelScript_12(source_val + 0x4c4, nullptr, nullptr);
    }

    Script_EvaluateCondition_12(source_val);
    *(source_val + 0x33d) = 0;
    *(source_val + 0x696) = 1;
    int32_t context_1 = *(source_val + 0x2e8);
    int32_t data_1 = FX_FragmentSimulate_14(source_val + 0x254, context_1);

    if (!flagP)
    {
    label_45945a:
        uint32_t data_3 = Sys_FreeMemory_14(Level_SetMission_5(), 2);
        int32_t entity_1 = *(source_val + 0xd1c);

        if (entity_1 >= 0)
        {
            if (entity_1 <= 1)
            {
                long double fpu0;
                int32_t data_5 = AI_AlertAllies_16(fpu0, source_val, source_val + 0xd20);
                char f0_1 = data_5;
                data_5 = -(data_5);
                param_2 = data_5 - data_5 + 0x1c;
            }
            else if (entity_1 == 2)
            {
                if (context_1 == 0xf || context_1 == 0x10)
                    param_2 = *(data_1 + (data_3 << 2) + 8);
                else
                    param_2 = (&item_8)[data_3];
            }
        }
    }
    else
    {
        int32_t* flagP1 = *(flagP + 0x3ad0);

        if (flagP1 == 0xffffffff)
            goto label_45945a;

        param_2 = flagP1;

        if (flagP1 == 0xffffffff)
            goto label_45945a;
    }

    Bones_PlayAnimation(source_val + 0x68, 0, param_2, 0, 0.0f);
    Soldier_DeathFallSolver(source_val + 0xd38, source_val, *(source_val + 0xcf8), param_2);
    Human_ViewCam(source_val, 3);
    AI_MoveToNode_22(*(source_val + 0x4ec));
    AI_TakeCover_20(source_val);
    AI_TakeCover_21(source_val, "ai_death_", 4);
    void* result = FX_TrailUpdate_15(source_val);
    *(context + 0x14) = sub_459680;
    return result;
}

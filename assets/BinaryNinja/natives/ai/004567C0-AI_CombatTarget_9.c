// Original IGI.EXE function: AI_CombatTarget_9 (VA 0x004567C0; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatTarget_9.h"
struct status_msg* AI_CombatTarget_9(void* context, int32_t* param_2)

{
    void* source_val = param_2;
    void* flagP = *(source_val + 0x800);
    int32_t item_8 = 0xe;
    int32_t item_4 = 0xc;
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
    label_45685a:
        uint32_t data_3 = Sys_FreeMemory_14(Level_SetMission_5(), 2);
        int32_t entity_1 = *(source_val + 0xd08);

        if (entity_1 >= 0)
        {
            if (entity_1 <= 1)
            {
                long double fpu0;
                int32_t data_5 = AI_AlertAllies_16(fpu0, source_val, source_val + 0xd10);
                char f0_1 = data_5;
                data_5 = -(data_5);
                param_2 = data_5 - data_5 + 0x10;
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
            goto label_45685a;

        param_2 = flagP1;

        if (flagP1 == 0xffffffff)
            goto label_45685a;
    }

    Bones_PlayAnimation(source_val + 0x68, 0, param_2, 0, 0.0f);
    Soldier_DeathFallSolver(source_val + 0xd28, source_val, *(source_val + 0xcf8), param_2);
    Human_ViewCam(source_val, 3);
    AI_MoveToNode_22(*(source_val + 0x4ec));
    AI_TakeCover_20(source_val);
    struct status_msg* result = AI_TakeCover_21(source_val, "ai_death_", 4);
    *(context + 0x14) = sub_456920;
    return result;
}

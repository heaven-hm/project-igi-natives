// Original IGI.EXE function: AI_AiDeath (VA 0x004546C0; static CFG gate PASS, CFG score 1.000).
#include "AI_AiDeath.h"
void* AI_AiDeath(void* context, void* param_2)

{
    void* flagP = *(param_2 + 0x800);
    void* data_val = Table_GetAt(param_2 + 0x4c4, 0);

    if (data_val)
    {
        Script_ParseEnumInt32_13(data_val);
        Script_ExecuteLevelScript_12(param_2 + 0x4c4, nullptr, nullptr);
    }

    Script_EvaluateCondition_12(param_2);
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 1;
    void* data_2 = FX_FragmentSimulate_14(param_2 + 0x254, *(param_2 + 0x2e8));
    int32_t* dest_1;

    if (!flagP)
        dest_1 = *(data_2 + 8);
    else
    {
        int32_t* flagP1 = *(flagP + 0x3ad0);

        if (flagP1 == 0xffffffff)
            dest_1 = *(data_2 + 8);
        else
        {
            dest_1 = flagP1;

            if (dest_1 == 0xffffffff)
                dest_1 = *(data_2 + 8);
        }
    }

    Bones_PlayAnimation(param_2 + 0x68, 0, dest_1, 0, 0.0f);
    Soldier_DeathFallSolver(param_2 + 0xd38, param_2, *(param_2 + 0xcf8), dest_1);
    Human_ViewCam(param_2, 3);
    AI_MoveToNode_22(*(param_2 + 0x4ec));
    AI_TakeCover_20(param_2);
    AI_TakeCover_21(param_2, "ai_death_", 4);
    void* result = FX_TrailUpdate_15(param_2);
    *(context + 0x14) = sub_4547b0;
    return result;
}

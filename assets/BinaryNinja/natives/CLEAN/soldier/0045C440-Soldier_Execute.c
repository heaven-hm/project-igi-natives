// IGI native provenance: Soldier_Execute - 0x0045C440 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045C440-Soldier_Execute.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Soldier_Execute.h"
void* Soldier_Execute(void* context, int32_t* param_2)

// Sig: void Soldier_Execute(void* context, Soldier* soldierPtr)
// Note: Executes/initializes a SOLDIER AI entity in the level. Params: context
// = task/context object (2nd arg is the soldier ptr - verified: source_val=[stack_ptr+0x1C]
// after prologue). The function reads soldier-struct fields +0x800 (ptr),
// +0x4C4 and +0x254 (sub-object bases passed to spawner 0x4F2060), +0xD1C, then
// installs a per-soldier callback (0x45C700) into the created object at +0x14
// and routes through 0x48A330. Referenced via soldier-task VTABLE at .data
// 0x53EC90 (not called directly). SOLDIER STRUCT LAYOUT (recovered from the
// 0x45C190-0x45CA50 vtable family): +0x68 name/string area; +0x254
// patrol/waypoint sub-struct (field +0x94 used); +0x2EC param ptr slot; +0x33D
// flag byte; +0x4C4 object ref; +0x696 active/enable flag (0=off, 1=on); +0x800
// ptr; +0xD0C id (0xFFFFFFFF = unset); +0xD14 dword; +0xD1C ptr. Sibling vtable
// methods: 0x45C190, 0x45C1C0, 0x45C2E0, 0x45C330, 0x45C5A0, 0x45C650,
// 0x45C750, 0x45C8B0, 0x45CA50 (same struct, enable/disable/reset semantics).
{
    void* source_val = param_2;
    void* flagP = *(source_val + 0x800);
    int32_t item_8 = 0x17;
    int32_t item_4 = 0x16;
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
    label_45c4da:
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
                void* data_6 = data_5 - data_5;
                data_6 &= 0xd5;
                param_2 = data_6 + 0x47;
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
            goto label_45c4da;

        param_2 = flagP1;

        if (flagP1 == 0xffffffff)
            goto label_45c4da;
    }

    Bones_PlayAnimation(source_val + 0x68, 0, param_2, 0, 0.0f);
    Soldier_DeathFallSolver(source_val + 0xd38, source_val, *(source_val + 0xcf8), param_2);
    Human_ViewCam(source_val, 3);
    AI_MoveToNode_22(*(source_val + 0x4ec));
    AI_TakeCover_20(source_val);
    AI_TakeCover_21(source_val, "ai_death_", 4);
    void* result = FX_TrailUpdate_15(source_val);
    *(context + 0x14) = sub_45c700;
    return result;
}

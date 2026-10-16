#include "Soldier_Execute.h"
void* Soldier_Execute(void* a1, int32_t* a2)

// Sig: void Soldier_Execute(void* context, Soldier* soldierPtr)
// Note: Executes/initializes a SOLDIER AI entity in the level. Params: context
// = task/context object (2nd arg is the soldier ptr - verified: srcS=[esp+0x1C]
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
    void* srcS = a2;
    void* flagP = *(srcS + 0x800);
    int32_t v_8 = 0x17;
    int32_t v_4 = 0x16;
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
    label_45c4da:
        uint32_t valA3 = Sys_FreeMemory_14(Level_SetMission_5(), 2);
        int32_t objC1 = *(srcS + 0xd1c);

        if (objC1 >= 0)
        {
            if (objC1 <= 1)
            {
                long double fpu0;
                int32_t valA5 = AI_AlertAllies_16(fpu0, srcS, srcS + 0xd20);
                char f0_1 = valA5;
                valA5 = -(valA5);
                void* valA6 = valA5 - valA5;
                valA6 &= 0xd5;
                a2 = valA6 + 0x47;
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
            goto label_45c4da;

        a2 = flagP1;

        if (flagP1 == 0xffffffff)
            goto label_45c4da;
    }

    Bones_PlayAnimation(srcS + 0x68, 0, a2, 0, 0f);
    Soldier_DeathFallSolver(srcS + 0xd38, srcS, *(srcS + 0xcf8), a2);
    Human_ViewCam(srcS, 3);
    AI_MoveToNode_22(*(srcS + 0x4ec));
    AI_TakeCover_20(srcS);
    AI_TakeCover_21(srcS, "ai_death_", 4);
    void* result = FX_TrailUpdate_15(srcS);
    *(a1 + 0x14) = sub_45c700;
    return result;
}

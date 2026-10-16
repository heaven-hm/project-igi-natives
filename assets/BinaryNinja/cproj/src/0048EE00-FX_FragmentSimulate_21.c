#include "gi_platform.h"
#include "0048EE00-FX_FragmentSimulate_21.h"
int32_t FX_FragmentSimulate_21(int32_t a1, int32_t* a2)

{
    int32_t* flagP1 = a2[0xa] + 8;
    void* valA2 = Table_GetAt((*(int32_t*)(uintptr_t)(a1 + 0x14)) + 0x4c4, 0);
    int32_t v_24 = flagP1[1];
    int32_t v_28 = *flagP1;
    char* v_2c = "Fire At Task - %d, %d";
    int32_t v_30 = 0xffffffff;
    int32_t v_34 = a1;
    int32_t valA4 = flagP1[1];
    flagP1[1] = valA4 - 1;

    if (valA4 < 0 || !valA2)
        return AI_CombatTarget_2(a1, a2);

    int32_t v_8;
    Script_ParseEnumReal32_13(valA2, &v_8);
    int32_t valA5 = v_8;

    if (!valA5)
    {
        valA5 = flagP1[4];

        if (valA5)
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x3c94)) = 0x3f800000;
            return valA5;
        }

        Script_SpawnNewTask_13(valA2, 1);
        *(flagP1 + 0x11) = 0;
    }

    int32_t objC1 = *flagP1;
    void* valA6 = Script_ExecuteLevelScript_4(objC1);
    void* srcS1 = valA6;

    if (!srcS1)
    {
        int32_t v_1c_2 = *flagP1;
        Warning_Show("HumanAI - FireAtTask, task id #%d not defined");
        return AI_CombatTarget_2(a1, a2);
    }

    valA6 = g_548638;
    objC1 = *(srcS1 + 0x1c);

    if (!TaskType_IsDerivedFrom(objC1, valA6))
    {
        Warning_Show("FireAtTask target not based on qobj tasktype");
        return AI_CombatTarget_2(a1, a2);
    }

    memcpy(a1 + 0x3e88, srcS1 + 0x20, 0x18);
    char valA11;

    if (!*(flagP1 + 0x11))
    {
        Combat_BeginBurst(a1, 0);
        *(flagP1 + 0x11) = 1;
        valA11 = *(flagP1 + 0x11);
    }

    if (*(flagP1 + 0x11) || valA11)
    {
        int32_t valA12 = flagP1[3];

        if (valA12 >= 0)
        {
            flagP1[3] = valA12 - 1;
            return valA12 - 1;
        }

        valA11 = Combat_RunFire(a1);

        if (valA11)
        {
            int32_t tmpD2 = flagP1[2];
            *(flagP1 + 0x11) = 0;
            flagP1[3] = tmpD2;
        }
    }

    return valA11;
}

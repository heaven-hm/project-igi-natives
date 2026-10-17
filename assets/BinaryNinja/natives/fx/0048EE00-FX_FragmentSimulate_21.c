// IGI native provenance: FX_FragmentSimulate_21 - 0x0048EE00 - CFG score 97.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048EE00-FX_FragmentSimulate_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FragmentSimulate_21.h"
int32_t FX_FragmentSimulate_21(int32_t context, int32_t* param_2)

{
    int32_t* flagP1 = param_2[0xa] + 8;
    void* data_2 = Table_GetAt(*(context + 0x14) + 0x4c4, 0);
    int32_t item_24 = flagP1[1];
    int32_t item_28 = *flagP1;
    char* item_2c = "Fire At Task - %d, %d";
    int32_t item_30 = 0xffffffff;
    int32_t item_34 = context;
    int32_t data_4 = flagP1[1];
    flagP1[1] = data_4 - 1;

    if (data_4 < 0 || !data_2)
        return AI_CombatTarget_2(context, param_2);

    int32_t item_8;
    Script_ParseEnumReal32_13(data_2, &item_8);
    int32_t data_5 = item_8;

    if (!data_5)
    {
        data_5 = flagP1[4];

        if (data_5)
        {
            *(context + 0x3c94) = 0x3f800000;
            return data_5;
        }

        Script_SpawnNewTask_13(data_2, 1);
        *(flagP1 + 0x11) = 0;
    }

    int32_t entity_1 = *flagP1;
    void* data_6 = Script_ExecuteLevelScript_4(entity_1);
    void* source_1 = data_6;

    if (!source_1)
    {
        int32_t item_1c_2 = *flagP1;
        Warning_Show("HumanAI - FireAtTask, task id #%d not defined");
        return AI_CombatTarget_2(context, param_2);
    }

    data_6 = g_548638;
    entity_1 = *(source_1 + 0x1c);

    if (!TaskType_IsDerivedFrom(entity_1, data_6))
    {
        Warning_Show("FireAtTask target not based on qobj tasktype");
        return AI_CombatTarget_2(context, param_2);
    }

    memcpy(context + 0x3e88, source_1 + 0x20, 0x18);
    char data_11;

    if (!*(flagP1 + 0x11))
    {
        Combat_BeginBurst(context, 0);
        *(flagP1 + 0x11) = 1;
        data_11 = *(flagP1 + 0x11);
    }

    if (*(flagP1 + 0x11) || data_11)
    {
        int32_t data_12 = flagP1[3];

        if (data_12 >= 0)
        {
            flagP1[3] = data_12 - 1;
            return data_12 - 1;
        }

        data_11 = Combat_RunFire(context);

        if (data_11)
        {
            int32_t temp_2 = flagP1[2];
            *(flagP1 + 0x11) = 0;
            flagP1[3] = temp_2;
        }
    }

    return data_11;
}

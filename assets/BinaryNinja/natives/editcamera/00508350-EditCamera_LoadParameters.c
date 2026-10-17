// IGI native provenance: EditCamera_LoadParameters - 0x00508350 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00508350-EditCamera_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditCamera_LoadParameters.h"
int32_t* EditCamera_LoadParameters(void* context)

{
    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_1 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_5 = *(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_5)
            data_5(context);
    }

    int32_t* data_6 = *(context + 0x9c);

    if (data_6)
    {
        int32_t* data_7 = *data_6;

        if (data_7)
            QTask_FindType(data_7);

        Qtask_UpdateList(*(context + 0x9c));
    }

    int32_t* data_8 = *(context + 0xa0);

    if (data_8)
    {
        int32_t* data_9 = *data_8;

        if (data_9)
            QTask_FindType(data_9);

        Qtask_UpdateList(*(context + 0xa0));
    }

    int32_t* result = *(context + 0xa4);

    if (!result)
        return result;

    int32_t* data_11 = *result;

    if (data_11)
        QTask_FindType(data_11);

    return Qtask_UpdateList(*(context + 0xa4));
}

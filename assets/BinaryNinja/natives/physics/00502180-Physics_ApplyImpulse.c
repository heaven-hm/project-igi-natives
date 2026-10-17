// IGI native provenance: Physics_ApplyImpulse - 0x00502180 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00502180-Physics_ApplyImpulse.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_ApplyImpulse.h"
long double Physics_ApplyImpulse(float context, int32_t param_2)

{
    void* data_val = Script_ExecuteLevelScript_4(context);
    int32_t i = 0;
    context = 0.0f;

    if (!data_val)
        return 0.0f;

    int32_t* data_1 = QTask_DeleteTask_2(data_val, g_a7a620);

    if (data_1)
    {
        while (i != param_2 + 1)
        {
            void* entity_1 = data_1[0x3c];

            if (entity_1)
                context = context + *(entity_1 + 0xf8);

            entity_1 = g_a7a620;
            i += 1;
            data_1 = QTask_TriggerEvent_2(data_1, entity_1);

            if (!data_1)
                break;
        }
    }

    return context;
}

// IGI native provenance: Physics_SimulateRigidBody - 0x005020C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005020C0-Physics_SimulateRigidBody.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_SimulateRigidBody.h"
long double Physics_SimulateRigidBody(float context)

{
    void* data_val = Script_ExecuteLevelScript_4(context);
    context = 0.0f;

    if (!data_val)
        return 0.0f;

    for (int32_t* i = QTask_DeleteTask_2(data_val, g_a7a620); i;
        i = QTask_TriggerEvent_2(i, g_a7a620))
    {
        void* entity_1 = i[0x3c];

        if (entity_1)
            context = context + *(entity_1 + 0xf8);
    }

    return context;
}

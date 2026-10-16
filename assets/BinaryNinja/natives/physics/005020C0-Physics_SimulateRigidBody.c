#include "Physics_SimulateRigidBody.h"
long double Physics_SimulateRigidBody(float a1)

{
    void* valA = Script_ExecuteLevelScript_4(a1);
    a1 = 0f;

    if (!valA)
        return 0f;

    for (int32_t* i = QTask_DeleteTask_2(valA, g_a7a620); i;
        i = QTask_TriggerEvent_2(i, g_a7a620))
    {
        void* objC1 = i[0x3c];

        if (objC1)
            a1 = a1 + *(objC1 + 0xf8);
    }

    return a1;
}

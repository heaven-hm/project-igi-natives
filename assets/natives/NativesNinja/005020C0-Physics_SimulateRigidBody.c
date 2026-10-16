#include "005020C0-Physics_SimulateRigidBody.h"
/* 0x005020c0 Physics_SimulateRigidBody full linked: callers=3 callees=3 */
long double sub_5020c0(float a1)

{
    void* eax = sub_4f1030(a1);
    a1 = 0f;

    if (!eax)
        return 0f;

    for (int32_t* i = QTask_DeleteTask_2(eax, g_a7a620); i;
        i = QTask_TriggerEvent_2(i, g_a7a620))
    {
        void* ecx_1 = i[0x3c];

        if (ecx_1)
            a1 = a1 + *(ecx_1 + 0xf8);
    }

    return a1;
}

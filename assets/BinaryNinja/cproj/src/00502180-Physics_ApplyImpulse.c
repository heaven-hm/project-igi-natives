#include "gi_platform.h"
#include "00502180-Physics_ApplyImpulse.h"
long double Physics_ApplyImpulse(float a1, int32_t a2)

{
    void* valA = Script_ExecuteLevelScript_4(a1);
    int32_t i = 0;
    a1 = 0.0f;

    if (!valA)
        return 0.0f;

    int32_t* valA1 = QTask_DeleteTask_2(valA, g_a7a620);

    if (valA1)
    {
        while (i != a2 + 1)
        {
            void* objC1 = valA1[0x3c];

            if (objC1)
                a1 = a1 + *(objC1 + 0xf8);

            objC1 = g_a7a620;
            i += 1;
            valA1 = QTask_TriggerEvent_2(valA1, objC1);

            if (!valA1)
                break;
        }
    }

    return a1;
}

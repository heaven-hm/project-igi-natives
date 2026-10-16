#include "00502180-Physics_ApplyImpulse.h"
/* 0x00502180 Physics_ApplyImpulse full linked: callers=4 callees=3 */
long double sub_502180(float a1, int32_t a2)

{
    void* eax = sub_4f1030(a1);
    int32_t i = 0;
    a1 = 0f;

    if (!eax)
        return 0f;

    int32_t* eax_1 = QTask_DeleteTask_2(eax, g_a7a620);

    if (eax_1)
    {
        while (i != a2 + 1)
        {
            void* ecx_1 = eax_1[0x3c];

            if (ecx_1)
                a1 = a1 + *(ecx_1 + 0xf8);

            ecx_1 = g_a7a620;
            i += 1;
            eax_1 = QTask_TriggerEvent_2(eax_1, ecx_1);

            if (!eax_1)
                break;
        }
    }

    return a1;
}

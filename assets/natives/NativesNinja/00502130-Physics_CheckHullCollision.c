#include "00502130-Physics_CheckHullCollision.h"
/* 0x00502130 Physics_CheckHullCollision full linked: callers=3 callees=3 */
void* sub_502130(int32_t a1)

{
    void* eax = sub_4f1030(a1);
    int32_t esi = 0;

    if (!eax)
        return eax;

    for (int32_t* i = QTask_DeleteTask_2(eax, g_a7a620); i;
            i = QTask_TriggerEvent_2(i, g_a7a620))
        esi += 1;

    return esi;
}

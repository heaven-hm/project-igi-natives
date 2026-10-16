#include "Menu_CaraiErrorInGraphDNo_2.h"
int32_t* Menu_CaraiErrorInGraphDNo_2(int32_t* a1, void* a2, int32_t a3, void* a4)

{
    Physics_ApplyImpulse_8(&a1, a2, a1);
    int32_t* valA = a1;

    if (valA)
    {
        int32_t objC1 = *valA;

        if (objC1 != a3)
        {
            int32_t* valA1 = Physics_CheckHullCollision_8(a2, objC1, a3);

            if (valA1)
                return Script_ExecuteLevelScript_23(a2, *valA1);

            int32_t v_c_3 = a3;
            int32_t v_10_3 = *a1;
            int32_t v_14_2 = *(a4 + 0x20);
            Warning_Show("CarAI: Error in graph %d. No link between nodes %d and %d.");
            return a1;
        }
    }

    return valA;
}

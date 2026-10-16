#include "gi_platform.h"
#include "00425B80-Menu_CaraiErrorInGraphDNo.h"
double* Menu_CaraiErrorInGraphDNo(double* a1, void* a2, int32_t* a3, int32_t a4, void* a5)

{
    double* result = Physics_ApplyImpulse_8(&a3, a2, a3);
    int32_t* objC = a3;

    if (!objC)
        return result;

    int32_t valA = *objC;

    if (valA == a4)
        return Script_CallNativeHandler_23(a1, objC);

    int32_t* valA1 = Physics_CheckHullCollision_8(a2, valA, a4);

    if (valA1)
        return Script_CallNativeHandler_23(a1, Script_ExecuteLevelScript_23(a2, *valA1));

    int32_t v_c_3 = a4;
    int32_t v_10_3 = *a3;
    int32_t v_14_3 = (*(int32_t*)(uintptr_t)(a5 + 0x20));
    return Warning_Show("CarAI: Error in graph %d. No link between nodes %d and %d.");
}

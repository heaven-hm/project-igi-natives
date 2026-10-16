#include "Container_Init.h"
int32_t Container_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Container", 0x20, QTask_OpenEvent_2(), 0);
    g_a7a7bc = valA1;
    QTask_TriggerEvent(valA1, 1, sub_488700);
    int32_t valA2 = DynObj_FindSymbol_6();
    int32_t v_8 = valA2;
    valA2 = g_a7a7bc;
    QTask_RemoveEventCallback(valA2, v_8, sub_4e0890);
    int32_t valA3 = DynObj_CreateMagicObject_6();
    QTask_RemoveEventCallback(g_a7a7bc, valA3, sub_4879e0);
    int32_t valA4 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_a7a7bc, valA4, sub_487e20);
    int32_t valA5 = DynObj_UpdateDynTree_12();
    int32_t v_8_3 = valA5;
    valA5 = g_a7a7bc;
    return QTask_RemoveEventCallback(valA5, v_8_3, sub_487d90);
}

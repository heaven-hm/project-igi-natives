// Original IGI.EXE function: Container_Init (VA 0x00505C90; static CFG gate PASS, CFG score 1.000).
#include "Container_Init.h"
int32_t Container_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Container", 0x20, QTask_OpenEvent_2(), 0);
    g_a7a7bc = data_1;
    QTask_TriggerEvent(data_1, 1, sub_488700);
    int32_t data_2 = DynObj_FindSymbol_6();
    int32_t item_8 = data_2;
    data_2 = g_a7a7bc;
    QTask_RemoveEventCallback(data_2, item_8, sub_4e0890);
    int32_t data_3 = DynObj_CreateMagicObject_6();
    QTask_RemoveEventCallback(g_a7a7bc, data_3, sub_4879e0);
    int32_t data_4 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_a7a7bc, data_4, sub_487e20);
    int32_t data_5 = DynObj_UpdateDynTree_12();
    int32_t item_8_3 = data_5;
    data_5 = g_a7a7bc;
    return QTask_RemoveEventCallback(data_5, item_8_3, sub_487d90);
}

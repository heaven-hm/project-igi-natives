// Original IGI.EXE function: Shadow_Init (VA 0x004E0950; static CFG gate PASS, CFG score 1.000).
#include "Shadow_Init.h"
int32_t Shadow_Init()

{
    int32_t item_4 = 0;
    g_a5e36c = TaskType_Register("Shadow", 0x124, QTask_OpenEvent_2(), 0);
    int32_t data_2 = DynObj_FindSymbol_6();
    int32_t item_8 = data_2;
    data_2 = g_a5e36c;
    QTask_RemoveEventCallback(data_2, item_8, Shadow_LoadParameters);
    QTask_TriggerEvent(g_a5e36c, 1, AIGraph_LoadParameters);
    return QTask_TriggerEvent(g_a5e36c, 2, sub_4e09c0);
}

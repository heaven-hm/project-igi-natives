// Original IGI.EXE function: MagicObjContainer_Init (VA 0x004E0840; static CFG gate PASS, CFG score 1.000).
#include "MagicObjContainer_Init.h"
int32_t MagicObjContainer_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("MagicObjContainer", 0x24, QTask_OpenEvent_2(), 0);
    g_a5e364 = valA1;
    QTask_TriggerEvent(valA1, 1, sub_488700);
    int32_t valA2 = DynObj_FindSymbol_6();
    int32_t v_8 = valA2;
    valA2 = g_a5e364;
    return QTask_RemoveEventCallback(valA2, v_8, sub_4e0890);
}

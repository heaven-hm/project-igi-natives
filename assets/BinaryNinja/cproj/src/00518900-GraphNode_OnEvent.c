#include "gi_platform.h"
#include "00518900-GraphNode_OnEvent.h"
uint32_t GraphNode_OnEvent()

{
    DynObj_CreateMagicObject_4(g_a801fc);
    int16_t objC = g_54ec9c;
    g_a801fc = 0;
    return QTask_CloseEvent_2(objC);
}

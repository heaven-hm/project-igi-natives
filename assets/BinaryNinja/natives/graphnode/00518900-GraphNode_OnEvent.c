// Original IGI.EXE function: GraphNode_OnEvent (VA 0x00518900; static CFG gate PASS, CFG score 1.000).
#include "GraphNode_OnEvent.h"
uint32_t GraphNode_OnEvent()

{
    DynObj_CreateMagicObject_4(g_a801fc);
    int16_t entity_val = g_54ec9c;
    g_a801fc = 0;
    return QTask_CloseEvent_2(entity_val);
}

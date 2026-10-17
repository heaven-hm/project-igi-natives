// IGI native provenance: GraphNode_OnEvent - 0x00518900 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00518900-GraphNode_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GraphNode_OnEvent.h"
uint32_t GraphNode_OnEvent()

{
    DynObj_CreateMagicObject_4(g_a801fc);
    int16_t entity_val = g_54ec9c;
    g_a801fc = 0;
    return QTask_CloseEvent_2(entity_val);
}

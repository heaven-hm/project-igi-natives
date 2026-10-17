// IGI native provenance: GraphNode_LoadParameters - 0x00518890 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00518890-GraphNode_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GraphNode_LoadParameters.h"
void* GraphNode_LoadParameters(void* context)

{
    void* result = Script_ExecuteLevelScript_23(*(context + 0x14), *(context + 0x38));
    void* result_1 = result;
    void* item_14 = context;
    return result;
}

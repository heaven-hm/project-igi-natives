// IGI native provenance: AI_MoveToNode - 0x00450CC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450CC0-AI_MoveToNode.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_MoveToNode.h"
int32_t AI_MoveToNode()

{
    char result = g_53c924;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_53c924 = result;
    }

    return result;
}

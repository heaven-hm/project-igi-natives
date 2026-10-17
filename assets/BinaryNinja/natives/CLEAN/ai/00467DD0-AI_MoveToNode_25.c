// IGI native provenance: AI_MoveToNode_25 - 0x00467DD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00467DD0-AI_MoveToNode_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_MoveToNode_25.h"
int32_t AI_MoveToNode_25()

{
    char result = g_53f584;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0x181);
        g_53f584 = result;
    }

    return result;
}

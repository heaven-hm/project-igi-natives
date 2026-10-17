// IGI native provenance: AI_SelectTarget_17 - 0x00460C10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00460C10-AI_SelectTarget_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_SelectTarget_17.h"
int32_t AI_SelectTarget_17()

{
    char result = g_53f315;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_53f315 = result;
    }

    return result;
}

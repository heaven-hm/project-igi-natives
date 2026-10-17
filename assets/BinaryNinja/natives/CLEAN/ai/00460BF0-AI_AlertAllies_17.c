// IGI native provenance: AI_AlertAllies_17 - 0x00460BF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00460BF0-AI_AlertAllies_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_AlertAllies_17.h"
int32_t AI_AlertAllies_17()

{
    char result = g_53f314;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_53f314 = result;
    }

    return result;
}

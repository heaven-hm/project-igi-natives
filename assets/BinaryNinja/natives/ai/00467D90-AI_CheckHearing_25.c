// IGI native provenance: AI_CheckHearing_25 - 0x00467D90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00467D90-AI_CheckHearing_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckHearing_25.h"
int32_t AI_CheckHearing_25()

{
    char result = g_53f582;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0x181);
        g_53f582 = result;
    }

    return result;
}

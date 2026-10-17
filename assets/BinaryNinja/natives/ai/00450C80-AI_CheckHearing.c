// IGI native provenance: AI_CheckHearing - 0x00450C80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450C80-AI_CheckHearing.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckHearing.h"
int32_t AI_CheckHearing()

{
    char result = g_53c922;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_53c922 = result;
    }

    return result;
}

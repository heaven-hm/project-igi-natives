// IGI native provenance: QTask_LinkEventHandler_3 - 0x00401F80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401F80-QTask_LinkEventHandler_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_LinkEventHandler_3.h"
int32_t QTask_LinkEventHandler_3(int32_t context)

{
    int32_t result = ~context;
    g_567c5c &= result;
    return result;
}

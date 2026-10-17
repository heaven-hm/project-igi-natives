// IGI native provenance: QTask_LinkEventHandler_2 - 0x00401AE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401AE0-QTask_LinkEventHandler_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_LinkEventHandler_2.h"
int32_t* QTask_LinkEventHandler_2(void* context)

{
    int32_t entity_3 = g_567c40;
    int32_t* result = *(g_567c3c + (entity_3 << 2)) * g_567c48 + g_567c38;
    *(g_567c4c + result) = entity_3;
    g_567c40 += 1;
    *result = context;
    *(context + 0x18) += 1;
    return result;
}

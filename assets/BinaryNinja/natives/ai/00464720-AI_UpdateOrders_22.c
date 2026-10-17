// IGI native provenance: AI_UpdateOrders_22 - 0x00464720 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00464720-AI_UpdateOrders_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateOrders_22.h"
int32_t AI_UpdateOrders_22(int32_t context)

{
    memset(context + 0x120, 0, 0x18);
    return context;
}

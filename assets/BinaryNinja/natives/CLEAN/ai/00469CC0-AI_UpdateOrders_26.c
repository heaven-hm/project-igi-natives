// IGI native provenance: AI_UpdateOrders_26 - 0x00469CC0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00469CC0-AI_UpdateOrders_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateOrders_26.h"
double* AI_UpdateOrders_26(void* context, void* param_2)

{
    int32_t entity_val = 0;
    int32_t item_8 = 0;
    entity_val = *(param_2 + 0x1c);
    double item_58[0xa];
    (*((entity_val << 2) + &g_a994e0))(param_2, &item_58);
    return AI_AlertAllies_26(context, &item_58);
}

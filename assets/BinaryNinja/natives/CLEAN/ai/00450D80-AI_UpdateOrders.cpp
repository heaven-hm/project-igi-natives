// IGI native provenance: AI_UpdateOrders - 0x00450D80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450D80-AI_UpdateOrders.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateOrders.h"
int32_t AI_UpdateOrders(void* context, int32_t param_2, int32_t param_3)

{
    int32_t item_1c = param_2;
    int32_t item_4 = 0;
    int32_t item_8 = 0;
    int32_t item_c = 0;
    int32_t item_14 = param_3;
    return AI_TakeCover(context, &item_1c);
}

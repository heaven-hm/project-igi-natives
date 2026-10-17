// Original IGI.EXE function: AI_UpdateOrders_26 (VA 0x00469CC0; static CFG gate FAIL, CFG score 0.833).
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

// Original IGI.EXE function: AI_UpdateOrders (VA 0x00450D80; static CFG gate PASS, CFG score 1.000).
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

// Original IGI.EXE function: AI_UpdateOrders_23 (VA 0x004658A0; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateOrders_23.h"
int32_t AI_UpdateOrders_23(int32_t* context, void* param_2)

{
    *context = *(param_2 + 0xfc);
    context[1] = *(param_2 + 0x108);
    int32_t result = *(param_2 + 0x114);
    context[2] = result;
    return result;
}

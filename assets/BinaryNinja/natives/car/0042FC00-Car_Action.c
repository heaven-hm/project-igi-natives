// Original IGI.EXE function: Car_Action (VA 0x0042FC00; static CFG gate FAIL, CFG score 0.667).
#include "Car_Action.h"
void** Car_Action(void* context, void** param_2)

{
    int32_t data_val = 0;
    data_val = *(context + 0x1c);
    (*((data_val << 2) + &g_a970e0))(context);
    *param_2 = context + 0x20;
    param_2[1] = context + 0x6dc;
    param_2[2] = context + 0x708;
    return param_2;
}

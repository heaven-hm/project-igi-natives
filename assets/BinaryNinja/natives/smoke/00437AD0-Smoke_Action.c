// Original IGI.EXE function: Smoke_Action (VA 0x00437AD0; static CFG gate FAIL, CFG score 0.667).
#include "Smoke_Action.h"
void* Smoke_Action(void* context, int32_t* param_2)

{
    float* entity_val = param_2[1];
    double item_20 = entity_val[2] * *(context + 0x140) + entity_val[1] * *(context + 0x138) + *entity_val * *(context + 0x130);
    double item_18 = entity_val[5] * *(context + 0x140) + entity_val[4] * *(context + 0x138) + entity_val[3] * *(context + 0x130);
    double item_10 = entity_val[8] * *(context + 0x140) + entity_val[7] * *(context + 0x138) + entity_val[6] * *(context + 0x130);
    memcpy(context + 0x40, &item_20, 0x18);
    *(context + 0x40) = **param_2 + *(context + 0x40);
    *(context + 0x48) = *(*param_2 + 8) + *(context + 0x48);
    *(context + 0x50) = *(*param_2 + 0x10) + *(context + 0x50);
    return context;
}

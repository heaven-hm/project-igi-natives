// Original IGI.EXE function: AI_SelectTarget_28 (VA 0x0046B7D0; static CFG gate PASS, CFG score 1.000).
#include "AI_SelectTarget_28.h"
void* AI_SelectTarget_28(void* context, float param_2, int32_t param_3)

{
    *(context + 0x78) = param_2;
    *(context + 0x7c) = param_3;
    *(context + 0x5c) = param_2;
    *(context + 0x60) = param_3;
    return context;
}

// Original IGI.EXE function: AI_SelectTarget_22 (VA 0x00464770; static CFG gate PASS, CFG score 1.000).
#include "AI_SelectTarget_22.h"
void* AI_SelectTarget_22(void* context, float param_2, int32_t param_3, int32_t param_4, int32_t param_5)

{
    *(context + 0x1dc) = param_3;
    *(context + 0x1d4) = param_4;
    *(context + 0x1d0) = param_2;
    *(context + 0x1e0) = param_5;
    return context;
}

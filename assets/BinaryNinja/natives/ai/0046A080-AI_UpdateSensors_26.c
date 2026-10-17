// Original IGI.EXE function: AI_UpdateSensors_26 (VA 0x0046A080; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateSensors_26.h"
void* AI_UpdateSensors_26(void* context, int32_t param_2, int32_t param_3)

{
    *(context + 0x7c) = param_3;
    *(context + 0x78) = param_2;
    return context;
}

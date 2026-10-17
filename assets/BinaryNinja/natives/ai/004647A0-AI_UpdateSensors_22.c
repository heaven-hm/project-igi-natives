// Original IGI.EXE function: AI_UpdateSensors_22 (VA 0x004647A0; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateSensors_22.h"
void* AI_UpdateSensors_22(void* context, float param_2, int32_t param_3)

{
    *(context + 0x1d0) = param_2;
    *(context + 0x1dc) = param_3;
    *(context + 0x1cc) = param_2;
    *(context + 0x1d8) = param_3;
    return context;
}

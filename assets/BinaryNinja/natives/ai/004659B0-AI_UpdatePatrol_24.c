// Original IGI.EXE function: AI_UpdatePatrol_24 (VA 0x004659B0; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdatePatrol_24.h"
void* AI_UpdatePatrol_24(void* context, float param_2)

{
    *(context + 0x1c4) = param_2;
    *(context + 0x1c8) = 0;
    return context;
}

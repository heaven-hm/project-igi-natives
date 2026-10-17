// Original IGI.EXE function: AI_AlertAllies_23 (VA 0x004658D0; static CFG gate FAIL, CFG score 0.667).
#include "AI_AlertAllies_23.h"
void* AI_AlertAllies_23(void* context, int32_t param_2, int32_t param_3)

{
    *(context + 0x13a) = 1;
    memcpy(context + 0x140, param_2, 0x18);
    memcpy(context + 0x158, param_3, 0x28);
    return context;
}

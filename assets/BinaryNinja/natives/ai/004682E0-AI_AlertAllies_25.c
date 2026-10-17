// Original IGI.EXE function: AI_AlertAllies_25 (VA 0x004682E0; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_25.h"
int32_t AI_AlertAllies_25(void* context, int32_t param_2)

{
    *(context + 0x20) = param_2;
    return param_2;
}

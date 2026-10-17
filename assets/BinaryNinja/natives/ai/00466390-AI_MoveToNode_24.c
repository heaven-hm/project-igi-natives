// Original IGI.EXE function: AI_MoveToNode_24 (VA 0x00466390; static CFG gate PASS, CFG score 1.000).
#include "AI_MoveToNode_24.h"
int32_t AI_MoveToNode_24(int32_t context, int32_t param_2, int32_t param_3)

{
    *(context + (param_2 << 2) + 0x74) = param_3;
    return param_3;
}

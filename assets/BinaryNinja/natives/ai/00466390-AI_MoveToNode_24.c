// Original IGI.EXE function: AI_MoveToNode_24 (VA 0x00466390; static CFG gate PASS, CFG score 1.000).
#include "AI_MoveToNode_24.h"
int32_t AI_MoveToNode_24(int32_t a1, int32_t a2, int32_t a3)

{
    *(a1 + (a2 << 2) + 0x74) = a3;
    return a3;
}

// Original IGI.EXE function: AI_MoveToNode_15 (VA 0x0045BF60; static CFG gate PASS, CFG score 1.000).
#include "AI_MoveToNode_15.h"
int32_t AI_MoveToNode_15(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45bf90;
    return result;
}

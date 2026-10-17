// Original IGI.EXE function: AI_MoveToNode_3 (VA 0x004522A0; static CFG gate PASS, CFG score 1.000).
#include "AI_MoveToNode_3.h"
int32_t* AI_MoveToNode_3(void* a1, int32_t a2, double* a3, char a4)

{
    *(a1 + 0x3ec8) = 0x40490fdb;
    *(a1 + 0x3ecc) = 0x40490fdb;
    return AI_ExpandRoute(a1, a2, a3, a4);
}

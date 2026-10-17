// Original IGI.EXE function: AI_MoveToNode_3 (VA 0x004522A0; static CFG gate PASS, CFG score 1.000).
#include "AI_MoveToNode_3.h"
int32_t* AI_MoveToNode_3(void* context, int32_t param_2, double* param_3, char param_4)

{
    *(context + 0x3ec8) = 0x40490fdb;
    *(context + 0x3ecc) = 0x40490fdb;
    return AI_ExpandRoute(context, param_2, param_3, param_4);
}

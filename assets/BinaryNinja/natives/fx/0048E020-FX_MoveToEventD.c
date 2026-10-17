// Original IGI.EXE function: FX_MoveToEventD (VA 0x0048E020; static CFG gate PASS, CFG score 1.000).
#include "FX_MoveToEventD.h"
int32_t FX_MoveToEventD(int32_t a1, int32_t* a2)

{
    double* srcS1 = a2[0xa] + 8;

    if (!*(srcS1 + 0x1c))
        AI_AlertAllies_3(a1);
    else
        AI_SelectTarget_3(a1);

    int32_t v_10_1 = srcS1[3];
    char* v_14 = "Move to event %d";
    int32_t v_18 = 0xffffffff;
    int32_t v_1c = a1;
    char result = AI_MoveToNode_3(a1, srcS1[3], srcS1, 1);

    if (!result)
        return result;

    return AI_CombatTarget_2(a1, a2);
}

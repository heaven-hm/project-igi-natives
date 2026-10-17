// Original IGI.EXE function: FX_MoveToEventD (VA 0x0048E020; static CFG gate PASS, CFG score 1.000).
#include "FX_MoveToEventD.h"
int32_t FX_MoveToEventD(int32_t context, int32_t* param_2)

{
    double* source_1 = param_2[0xa] + 8;

    if (!*(source_1 + 0x1c))
        AI_AlertAllies_3(context);
    else
        AI_SelectTarget_3(context);

    int32_t item_10_1 = source_1[3];
    char* item_14 = "Move to event %d";
    int32_t item_18 = 0xffffffff;
    int32_t item_1c = context;
    char result = AI_MoveToNode_3(context, source_1[3], source_1, 1);

    if (!result)
        return result;

    return AI_CombatTarget_2(context, param_2);
}

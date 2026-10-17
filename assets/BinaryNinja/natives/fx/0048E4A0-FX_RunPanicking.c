// Original IGI.EXE function: FX_RunPanicking (VA 0x0048E4A0; static CFG gate PASS, CFG score 1.000).
#include "FX_RunPanicking.h"
int32_t FX_RunPanicking(void* context, int32_t* param_2)

{
    char* item_10 = "Run panicking";
    int32_t item_14 = 0xffffffff;
    void* item_18 = context;
    void* source_1 = param_2[0xa] + 8;

    if (*(source_1 + 0x20) != 0xffffffff)
    {
        AI_WriteChannel(context, 5, 1.0f);
        char result = AI_MoveToNode_3(context, *(source_1 + 0x20), context + 0x3eb0, 0);

        if (!result)
            return result;

        *(context + 0x3de8) = 0xffffffff;
    }

    return AI_CombatTarget_2(context, param_2);
}

// Original IGI.EXE function: FX_RunPanicking (VA 0x0048E4A0; static CFG gate PASS, CFG score 1.000).
#include "FX_RunPanicking.h"
int32_t FX_RunPanicking(void* a1, int32_t* a2)

{
    char* v_10 = "Run panicking";
    int32_t v_14 = 0xffffffff;
    void* v_18 = a1;
    void* srcS1 = a2[0xa] + 8;

    if (*(srcS1 + 0x20) != 0xffffffff)
    {
        AI_WriteChannel(a1, 5, 1f);
        char result = AI_MoveToNode_3(a1, *(srcS1 + 0x20), a1 + 0x3eb0, 0);

        if (!result)
            return result;

        *(a1 + 0x3de8) = 0xffffffff;
    }

    return AI_CombatTarget_2(a1, a2);
}

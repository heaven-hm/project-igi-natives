// Original IGI.EXE function: FX_TrailUpdate_20 (VA 0x0048E870; static CFG gate PASS, CFG score 1.000).
#include "FX_TrailUpdate_20.h"
int32_t* FX_TrailUpdate_20(void* context)

{
    void* data_val = *(context + 0x3ab0);

    if (data_val)
    {
        AI_CombatTarget_5(data_val);
        *(context + 0x3ab0) = 0;
    }

    int32_t* result = *(context + 0x3ab4);

    if (result)
    {
        result = AI_CombatTarget_5(result);
        *(context + 0x3ab4) = 0;
    }

    return result;
}

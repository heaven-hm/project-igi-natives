// Original IGI.EXE function: AI_CombatTarget_2 (VA 0x00450FF0; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatTarget_2.h"
int32_t* AI_CombatTarget_2(void* context, int32_t* param_2)

{
    int32_t data_val = param_2[8];

    if (data_val)
        data_val(context, param_2);

    int32_t* result = Camera_ApplyHandiCam_33(param_2);
    param_2[0xb] = 0;
    int32_t* source_1 = param_2[0xa];

    if (!source_1)
        return result;

    return AI_CheckHearing_2(context, source_1);
}

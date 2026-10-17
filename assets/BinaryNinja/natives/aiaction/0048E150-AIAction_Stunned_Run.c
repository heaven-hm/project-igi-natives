// Original IGI.EXE function: AIAction_Stunned_Run (VA 0x0048E150; static CFG gate PASS, CFG score 1.000).
#include "AIAction_Stunned_Run.h"
int32_t* AIAction_Stunned_Run(void* context, int32_t* param_2)

{
    char* item_18 = "Stunned";
    int32_t item_1c = 0xffffffff;
    void* item_20 = context;
    float* source_1 = param_2[0xa] + 8;

    if (source_1[1] < 0)
        source_1[1] = Frames_GetUpdateCounter() - *source_1 * -30.0f;

    if (Frames_GetUpdateCounter() > source_1[1])
        return AI_CombatTarget_2(context, param_2);

    void* result = Locomotion_GetState(context, 3);

    if (result)
        return result;

    return AI_WriteChannel(context, 3, 38.0f);
}

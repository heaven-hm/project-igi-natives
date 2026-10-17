// Original IGI.EXE function: Physics_CheckHullCollision (VA 0x00502130; static CFG gate PASS, CFG score 1.000).
#include "Physics_CheckHullCollision.h"
void* Physics_CheckHullCollision(int32_t context)

{
    void* data_val = Script_ExecuteLevelScript_4(context);
    int32_t source_val = 0;

    if (!data_val)
        return data_val;

    for (int32_t* i = QTask_DeleteTask_2(data_val, g_a7a620); i;
            i = QTask_TriggerEvent_2(i, g_a7a620))
        source_val += 1;

    return source_val;
}

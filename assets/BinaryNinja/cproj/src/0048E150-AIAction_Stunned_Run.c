#include "gi_platform.h"
#include "0048E150-AIAction_Stunned_Run.h"
int32_t* AIAction_Stunned_Run(void* a1, int32_t* a2)

{
    char* v_18 = "Stunned";
    int32_t v_1c = 0xffffffff;
    void* v_20 = a1;
    float* srcS1 = a2[0xa] + 8;

    if (srcS1[1] < 0)
        srcS1[1] = Frames_GetUpdateCounter() - *srcS1 * -30.0f;

    if (Frames_GetUpdateCounter() > srcS1[1])
        return AI_CombatTarget_2(a1, a2);

    void* result = Locomotion_GetState(a1, 3);

    if (result)
        return result;

    return AI_WriteChannel(a1, 3, 38.0f);
}

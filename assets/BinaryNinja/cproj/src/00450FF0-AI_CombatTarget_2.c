#include "gi_platform.h"
#include "00450FF0-AI_CombatTarget_2.h"
int32_t* AI_CombatTarget_2(void* a1, int32_t* a2)

{
    int32_t valA = a2[8];

    if (valA)
        valA(a1, a2);

    int32_t* result = Camera_ApplyHandiCam_33(a2);
    a2[0xb] = 0;
    int32_t* srcS1 = a2[0xa];

    if (!srcS1)
        return result;

    return AI_CheckHearing_2(a1, srcS1);
}

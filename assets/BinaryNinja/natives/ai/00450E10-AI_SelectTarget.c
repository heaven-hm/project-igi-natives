#include "AI_SelectTarget.h"
void* AI_SelectTarget(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t* valA = AI_ActionstackFull(g_5bda58);
    valA[1] = 0;
    *valA = 0;
    int32_t tmpD = g_5bda64;
    valA[6] = 0;
    valA[2] = tmpD;
    valA[4] = a3;
    valA[7] = 0;
    valA[8] = 0;
    valA[9] = 0;
    valA[5] = a1;
    valA[0xa] = a2;
    valA[0xb] = 1;
    return Camera_SetFieldOfView_33(g_5bda5c, valA);
}

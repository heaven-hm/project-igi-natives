// Original IGI.EXE function: FX_ExplosionSpawn_21 (VA 0x0048EB60; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_21.h"
int32_t* FX_ExplosionSpawn_21(void* a1, int32_t* a2)

{
    float* srcS1 = a2[0xa] + 8;
    uint32_t valA = Frames_GetUpdateCounter();
    int32_t v_18 = srcS1[1] - valA;
    char* v_1c = "Fall flat - %d";
    int32_t v_20 = 0xffffffff;
    void* v_24 = a1;
    AI_WriteChannel(a1, 2, 1f);

    if (srcS1[1] < 0)
        srcS1[1] = Frames_GetUpdateCounter() - *srcS1 * -30f;

    int32_t* result = Frames_GetUpdateCounter();

    if (result <= srcS1[1])
        return result;

    return AI_CombatTarget_2(a1, a2);
}

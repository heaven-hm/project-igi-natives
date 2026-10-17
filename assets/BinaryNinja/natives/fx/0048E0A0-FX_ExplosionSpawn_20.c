// Original IGI.EXE function: FX_ExplosionSpawn_20 (VA 0x0048E0A0; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_20.h"
int32_t* FX_ExplosionSpawn_20(void* a1, int32_t* a2)

{
    void* srcS1 = a2[0xa] + 8;
    uint32_t valA = Frames_GetUpdateCounter();
    int32_t v_18 = *(srcS1 + 0x1c) - valA;
    char* v_1c = "Look at event, %d";
    int32_t v_20 = 0xffffffff;
    void* v_24 = a1;

    if (*(srcS1 + 0x1c) < 0)
        *(srcS1 + 0x1c) = Frames_GetUpdateCounter() - *(srcS1 + 0x18) * -30f;

    int32_t* result = AI_UpdateOrders_3(a1, srcS1, 0.0349065848f, 0);

    if (result)
    {
        result = Frames_GetUpdateCounter();

        if (result > *(srcS1 + 0x1c))
            return AI_CombatTarget_2(a1, a2);
    }

    return result;
}

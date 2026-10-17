// Original IGI.EXE function: FX_ExplosionSpawn_21 (VA 0x0048EB60; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_21.h"
int32_t* FX_ExplosionSpawn_21(void* context, int32_t* param_2)

{
    float* source_1 = param_2[0xa] + 8;
    uint32_t data_val = Frames_GetUpdateCounter();
    int32_t item_18 = source_1[1] - data_val;
    char* item_1c = "Fall flat - %d";
    int32_t item_20 = 0xffffffff;
    void* item_24 = context;
    AI_WriteChannel(context, 2, 1.0f);

    if (source_1[1] < 0)
        source_1[1] = Frames_GetUpdateCounter() - *source_1 * -30.0f;

    int32_t* result = Frames_GetUpdateCounter();

    if (result <= source_1[1])
        return result;

    return AI_CombatTarget_2(context, param_2);
}

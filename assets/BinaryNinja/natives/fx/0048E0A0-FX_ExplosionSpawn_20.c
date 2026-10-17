// Original IGI.EXE function: FX_ExplosionSpawn_20 (VA 0x0048E0A0; static CFG gate PASS, CFG score 1.000).
#include "FX_ExplosionSpawn_20.h"
int32_t* FX_ExplosionSpawn_20(void* context, int32_t* param_2)

{
    void* source_1 = param_2[0xa] + 8;
    uint32_t data_val = Frames_GetUpdateCounter();
    int32_t item_18 = *(source_1 + 0x1c) - data_val;
    char* item_1c = "Look at event, %d";
    int32_t item_20 = 0xffffffff;
    void* item_24 = context;

    if (*(source_1 + 0x1c) < 0)
        *(source_1 + 0x1c) = Frames_GetUpdateCounter() - *(source_1 + 0x18) * -30.0f;

    int32_t* result = AI_UpdateOrders_3(context, source_1, 0.0349065848f, 0);

    if (result)
    {
        result = Frames_GetUpdateCounter();

        if (result > *(source_1 + 0x1c))
            return AI_CombatTarget_2(context, param_2);
    }

    return result;
}

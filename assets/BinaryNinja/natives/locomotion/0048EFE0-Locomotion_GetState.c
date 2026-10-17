// Original IGI.EXE function: Locomotion_GetState (VA 0x0048EFE0; static CFG gate PASS, CFG score 1.000).
#include "Locomotion_GetState.h"
int32_t Locomotion_GetState(void* context, int32_t param_2)

{
    int32_t result = AI_CheckSector_18(*(context + 0x14));
    int32_t entity_2 = *(*((*(context + 0x3d38) << 2) + &g_541658) + (param_2 << 2));

    if (entity_2 != 0xffffffff)
    {
        result = result == entity_2;
        return result;
    }

    result = 0;
    return result;
}

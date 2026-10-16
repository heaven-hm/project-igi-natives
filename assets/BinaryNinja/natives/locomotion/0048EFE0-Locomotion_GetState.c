#include "Locomotion_GetState.h"
int32_t Locomotion_GetState(void* a1, int32_t a2)

{
    int32_t result = AI_CheckSector_18(*(a1 + 0x14));
    int32_t objC2 = *(*((*(a1 + 0x3d38) << 2) + &g_541658) + (a2 << 2));

    if (objC2 != 0xffffffff)
    {
        result = result == objC2;
        return result;
    }

    result = 0;
    return result;
}

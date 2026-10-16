#include "FX_StandThrowingGrenade.h"
int32_t FX_StandThrowingGrenade(void* a1)

{
    char* v_8 = "Stand - Throwing grenade";
    int32_t v_c = 0xffffffff;
    void* v_10 = a1;

    if (!Locomotion_GetState(a1, 0))
        return 1;

    void* result = AI_WriteChannel(a1, 8, 1f);
    result = 0;
    return result;
}

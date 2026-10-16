#include "gi_platform.h"
#include "0048D830-FX_StandRollLeft.h"
bool FX_StandRollLeft(void* a1)

{
    char* v_8 = "Stand - Roll left";
    int32_t v_c = 0xffffffff;
    void* v_10 = a1;
    (*(int32_t*)(uintptr_t)(a1 + 0x3c7c)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x3df4)) = 1;
    return Locomotion_GetState(a1, 1);
}

#include "gi_platform.h"
#include "0048D870-FX_StandRollRight.h"
bool FX_StandRollRight(void* a1)

{
    char* v_8 = "Stand - Roll right";
    int32_t v_c = 0xffffffff;
    void* v_10 = a1;
    (*(int32_t*)(uintptr_t)(a1 + 0x3c80)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a1 + 0x3df4)) = 0xffffffff;
    return Locomotion_GetState(a1, 1);
}

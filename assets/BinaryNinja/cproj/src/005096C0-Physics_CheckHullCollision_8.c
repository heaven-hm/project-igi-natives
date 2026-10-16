#include "gi_platform.h"
#include "005096C0-Physics_CheckHullCollision_8.h"
void* Physics_CheckHullCollision_8(void* a1, int32_t a2, int32_t a3)

{
    if (!(*(int32_t*)(uintptr_t)(a1 + 0xb8)))
        return 0;

    int32_t* valA1 = Physics_InterpolateWaypoint_8(a1, a2, a3);
    int32_t valA3 = *valA1 + 1;
    int32_t valA4 = -(valA3);
    return (valA4 - valA4) & valA1;
}

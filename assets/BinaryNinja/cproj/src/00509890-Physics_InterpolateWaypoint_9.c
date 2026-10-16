#include "gi_platform.h"
#include "00509890-Physics_InterpolateWaypoint_9.h"
int32_t Physics_InterpolateWaypoint_9(void* a1, int32_t a2)

{
    int32_t result = a2;
    result = (*(int32_t*)(uintptr_t)(a1 + 0x30)) & result;
    return result;
}

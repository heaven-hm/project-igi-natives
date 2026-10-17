// Original IGI.EXE function: Physics_InterpolateWaypoint_9 (VA 0x00509890; static CFG gate PASS, CFG score 1.000).
#include "Physics_InterpolateWaypoint_9.h"
int32_t Physics_InterpolateWaypoint_9(void* a1, int32_t a2)

{
    int32_t result = a2;
    result = *(a1 + 0x30) & result;
    return result;
}

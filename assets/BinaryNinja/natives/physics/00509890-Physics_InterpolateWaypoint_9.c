// Original IGI.EXE function: Physics_InterpolateWaypoint_9 (VA 0x00509890; static CFG gate PASS, CFG score 1.000).
#include "Physics_InterpolateWaypoint_9.h"
int32_t Physics_InterpolateWaypoint_9(void* context, int32_t param_2)

{
    int32_t result = param_2;
    result = *(context + 0x30) & result;
    return result;
}

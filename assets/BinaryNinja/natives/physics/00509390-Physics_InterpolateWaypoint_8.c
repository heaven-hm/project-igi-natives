// Original IGI.EXE function: Physics_InterpolateWaypoint_8 (VA 0x00509390; static CFG gate PASS, CFG score 1.000).
#include "Physics_InterpolateWaypoint_8.h"
int32_t Physics_InterpolateWaypoint_8(void* context, int32_t param_2, int32_t param_3)

{
    return *(context + 0xb8) + ((*(context + 0x58) * param_3 + param_2) << 3);
}

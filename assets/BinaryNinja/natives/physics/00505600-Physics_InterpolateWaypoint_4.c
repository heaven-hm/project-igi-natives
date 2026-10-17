// Original IGI.EXE function: Physics_InterpolateWaypoint_4 (VA 0x00505600; static CFG gate PASS, CFG score 1.000).
#include "Physics_InterpolateWaypoint_4.h"
struct status_msg* Physics_InterpolateWaypoint_4(void* context)

{
    int32_t kind;
    kind = g_54e708;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    result->head[0xb] = 0;
    result->head[0xc] = 0;
    result->head[0xd] = 0;
    result->head[0xe] = 0;
    result->head[0xf] = 0;
    result->head[0x10] = 0;
    return result;
}

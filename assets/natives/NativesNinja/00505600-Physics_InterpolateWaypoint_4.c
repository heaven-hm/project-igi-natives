#include "00505600-Physics_InterpolateWaypoint_4.h"
/* 0x00505600 Physics_InterpolateWaypoint_4 full linked: callers=3 callees=1 */
struct status_msg* sub_505600(void* a1)

{
    int32_t kind;
    kind = g_54e708;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[0xb] = 0;
    result->head[0xc] = 0;
    result->head[0xd] = 0;
    result->head[0xe] = 0;
    result->head[0xf] = 0;
    result->head[0x10] = 0;
    return result;
}

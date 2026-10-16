#include "00509890-Physics_InterpolateWaypoint_9.h"
/* 0x00509890 Physics_InterpolateWaypoint_9 full linked: callers=2 callees=0 */
int32_t sub_509890(void* a1, int32_t a2)

{
    int32_t result = a2;
    result = *(a1 + 0x30) & result;
    return result;
}

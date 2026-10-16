#include "00509390-Physics_InterpolateWaypoint_8.h"
/* 0x00509390 Physics_InterpolateWaypoint_8 full linked: callers=2 callees=0 */
int32_t sub_509390(void* a1, int32_t a2, int32_t a3)

{
    return *(a1 + 0xb8) + ((*(a1 + 0x58) * a3 + a2) << 3);
}

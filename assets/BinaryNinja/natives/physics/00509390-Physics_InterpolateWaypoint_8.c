#include "Physics_InterpolateWaypoint_8.h"
int32_t Physics_InterpolateWaypoint_8(void* a1, int32_t a2, int32_t a3)

{
    return *(a1 + 0xb8) + ((*(a1 + 0x58) * a3 + a2) << 3);
}

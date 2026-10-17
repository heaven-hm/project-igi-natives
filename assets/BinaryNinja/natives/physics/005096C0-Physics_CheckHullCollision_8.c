// Original IGI.EXE function: Physics_CheckHullCollision_8 (VA 0x005096C0; static CFG gate PASS, CFG score 1.000).
#include "Physics_CheckHullCollision_8.h"
void* Physics_CheckHullCollision_8(void* context, int32_t param_2, int32_t param_3)

{
    if (!*(context + 0xb8))
        return 0;

    int32_t* data_1 = Physics_InterpolateWaypoint_8(context, param_2, param_3);
    int32_t data_3 = *data_1 + 1;
    int32_t data_4 = -(data_3);
    return (data_4 - data_4) & data_1;
}

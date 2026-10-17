// Original IGI.EXE function: Physics_CalculateSplineLength_4 (VA 0x005055D0; static CFG gate PASS, CFG score 1.000).
#include "Physics_CalculateSplineLength_4.h"
int32_t Physics_CalculateSplineLength_4(void* context, int32_t param_2)

{
    uint32_t data_val = EditRigidObjAttachedToBone_OnTick();
    int32_t temp_val = 0;
    temp_val = *(context + 0x1c);
    return (*(((data_val * 0x180 + temp_val) << 2) + &g_a96ae0))(context, param_2);
}

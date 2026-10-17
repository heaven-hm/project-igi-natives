// Original IGI.EXE function: AI_UpdateSensors (VA 0x00450E70; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateSensors.h"
int32_t AI_UpdateSensors(void* context, int32_t* param_2)

{
    AI_CheckSector(context);
    param_2[1] = 0;
    *param_2 = 0;
    Camera_ApplyLineFilter_33(context + 0x8fc, param_2);
    param_2[3] = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0f) * 0.200000003f * 30.0f;
    return param_2[5](context, param_2);
}

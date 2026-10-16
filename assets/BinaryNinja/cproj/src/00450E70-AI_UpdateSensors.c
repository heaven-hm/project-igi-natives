#include "gi_platform.h"
#include "00450E70-AI_UpdateSensors.h"
int32_t AI_UpdateSensors(void* a1, int32_t* a2)

{
    AI_CheckSector(a1);
    a2[1] = 0;
    *a2 = 0;
    Camera_ApplyLineFilter_33(a1 + 0x8fc, a2);
    a2[3] = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0f) * 0.200000003.0f * 30.0f;
    return a2[5](a1, a2);
}

#include "Env_TriggerAlarm_13.h"
int32_t Env_TriggerAlarm_13(void* a1, void** a2)

{
    Camera_ApplyHandiCam_33(a2);
    int32_t* valA = a2[0xb];

    if (valA)
    {
        Qtask_UpdateList(valA);
        a2[0xb] = 0;
    }

    int32_t* valA1 = a2[0xa];

    if (valA1)
    {
        Qtask_UpdateList(valA1);
        a2[0xa] = 0;
    }

    a2[1] = 0;
    *a2 = nullptr;
    Camera_SetFieldOfView_33(a1 + 0x810, a2);
    int32_t result = *(a1 + 0x8e0) - 1;
    *(a1 + 0x8e0) = result;
    return result;
}

#include "gi_platform.h"
#include "00450F10-AI_UpdatePatrol_2.h"
int32_t AI_UpdatePatrol_2(void* a1, void* a2)

{
    void* flagP = a1;
    char ctxB = 0;
    AI_CheckSector(flagP);
    int32_t* i_1 = (*(int32_t*)(uintptr_t)(a2 + 8));
    int32_t result = 0;

    for (int32_t* i = i_1[1]; i; i = i[1])
    {
        if (!ctxB)
        {
            ctxB = 1;
            a1 = i_1[4];
        }

        i_1[4] = a1;
        int32_t tmpD2 = *(i_1[1] + 4);
        i_1[1] = 0;
        *i_1 = 0;
        int32_t* v_24_1;
        int32_t* v_20_1;

        if (tmpD2)
        {
            v_20_1 = flagP + 0x8fc;
            Camera_ApplyLineFilter_33(v_20_1, i_1);
            v_24_1 = Level_SetMission_5();
            i_1[3] = (Sys_AllocateMemory_14(v_24_1) + 1.0f) * 0.200000003.0f * 30.0f;
        }
        else
        {
            v_20_1 = flagP + 0x8fc;
            Camera_ApplyLineFilter_33(v_20_1, i_1);
            v_24_1 = Level_SetMission_5();
            i_1[3] = (Sys_AllocateMemory_14(v_24_1) + 1.0f) * 0.200000003.0f * 30.0f;
        }

        result = i_1[5](flagP, i_1, v_24_1, v_20_1, i_1);
        i_1 = i;
    }

    return result;
}

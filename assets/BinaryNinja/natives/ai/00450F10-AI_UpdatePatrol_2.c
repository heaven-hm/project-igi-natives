// Original IGI.EXE function: AI_UpdatePatrol_2 (VA 0x00450F10; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdatePatrol_2.h"
int32_t AI_UpdatePatrol_2(void* context, void* param_2)

{
    void* flagP = context;
    char context_val = 0;
    AI_CheckSector(flagP);
    int32_t* i_1 = *(param_2 + 8);
    int32_t result = 0;

    for (int32_t* i = i_1[1]; i; i = i[1])
    {
        if (!context_val)
        {
            context_val = 1;
            context = i_1[4];
        }

        i_1[4] = context;
        int32_t temp_2 = *(i_1[1] + 4);
        i_1[1] = 0;
        *i_1 = 0;
        int32_t* item_24_1;
        int32_t* item_20_1;

        if (temp_2)
        {
            item_20_1 = flagP + 0x8fc;
            Camera_ApplyLineFilter_33(item_20_1, i_1);
            item_24_1 = Level_SetMission_5();
            i_1[3] = (Sys_AllocateMemory_14(item_24_1) + 1.0f) * 0.200000003f * 30.0f;
        }
        else
        {
            item_20_1 = flagP + 0x8fc;
            Camera_ApplyLineFilter_33(item_20_1, i_1);
            item_24_1 = Level_SetMission_5();
            i_1[3] = (Sys_AllocateMemory_14(item_24_1) + 1.0f) * 0.200000003f * 30.0f;
        }

        result = i_1[5](flagP, i_1, item_24_1, item_20_1, i_1);
        i_1 = i;
    }

    return result;
}

// Original IGI.EXE function: Level_SetMission_6 (VA 0x00416F40; static CFG gate PASS, CFG score 1.000).
#include "Level_SetMission_6.h"
int32_t* Level_SetMission_6()

{
    if (StatusScreen_Get())
        StatusList_Clear(*(StatusScreen_Get() + 0x4e4));

    void* valA2 = **(g_57babc + 0x54);

    if (valA2)
        QTask_CleanupTypes(valA2);

    int32_t* result;

    for (int32_t* i = 0xc0; i < 0xd0; i = &i[1])
    {
        result = *(i + g_57babc);

        if (result)
        {
            result = Qtask_UpdateList(result);
            *(i + g_57babc) = 0;
        }
    }

    return result;
}

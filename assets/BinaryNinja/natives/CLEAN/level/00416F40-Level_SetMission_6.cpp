// IGI native provenance: Level_SetMission_6 - 0x00416F40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00416F40-Level_SetMission_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Level_SetMission_6.h"
int32_t* Level_SetMission_6()

{
    if (StatusScreen_Get())
        StatusList_Clear(*(StatusScreen_Get() + 0x4e4));

    void* data_2 = **(g_57babc + 0x54);

    if (data_2)
        QTask_CleanupTypes(data_2);

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

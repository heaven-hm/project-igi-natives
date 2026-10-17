// Original IGI.EXE function: Gun_Setup (VA 0x00478840; static CFG gate PASS, CFG score 1.000).
#include "Gun_Setup.h"
int32_t Gun_Setup(void* context)

{
    DynObj_TryingToRemoveUnrigi(Qtask_GetList(), context);
    Weapon_CycleFireMode_5(context);
    int32_t* data_2 = **(context + 0x130);

    if (data_2)
        Weapon_UpdateZoom_6(data_2, 1);

    Qtask_UpdateList(*(context + 0x130));
    int32_t* data_3 = *(context + 0x194);

    if (data_3)
    {
        int32_t* dest_1 = *data_3;
        Qtask_UpdateList(data_3);

        if (dest_1)
            QTask_FindType(dest_1);
    }

    int32_t* data_4 = *(context + 0x190);

    if (data_4)
        Qtask_UpdateList(data_4);

    return QTask_FindType(*(context + 0xe8));
}

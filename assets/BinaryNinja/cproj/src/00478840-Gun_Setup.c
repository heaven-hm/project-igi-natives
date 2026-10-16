#include "gi_platform.h"
#include "00478840-Gun_Setup.h"
int32_t Gun_Setup(void* a1)

{
    DynObj_TryingToRemoveUnrigi(Qtask_GetList(), a1);
    Weapon_CycleFireMode_5(a1);
    int32_t* valA2 = *(*(int32_t*)(uintptr_t)(a1 + 0x130));

    if (valA2)
        Weapon_UpdateZoom_6(valA2, 1);

    Qtask_UpdateList((*(int32_t*)(uintptr_t)(a1 + 0x130)));
    int32_t* valA3 = (*(int32_t*)(uintptr_t)(a1 + 0x194));

    if (valA3)
    {
        int32_t* dstD1 = *valA3;
        Qtask_UpdateList(valA3);

        if (dstD1)
            QTask_FindType(dstD1);
    }

    int32_t* valA4 = (*(int32_t*)(uintptr_t)(a1 + 0x190));

    if (valA4)
        Qtask_UpdateList(valA4);

    return QTask_FindType((*(int32_t*)(uintptr_t)(a1 + 0xe8)));
}

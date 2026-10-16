#include "gi_platform.h"
#include "0047C3D0-GunShot_Process.h"
void* GunShot_Process(void* a1)

{
    int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0x6c));

    if (valA)
    {
        Qtask_UpdateList(valA);
        (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = 0;
    }

    int32_t* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x70));

    if (valA1)
    {
        Qtask_UpdateList(valA1);
        (*(int32_t*)(uintptr_t)(a1 + 0x70)) = 0;
    }

    return DynObj_RemoveSymbol_7(Level_StartMission_4(), a1, 0);
}

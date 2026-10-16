#include "gi_platform.h"
#include "004788D0-Weapon_CycleFireMode_5.h"
int32_t Weapon_CycleFireMode_5(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xf0));

    if (result)
    {
        result = DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
        (*(int32_t*)(uintptr_t)(a1 + 0xf0)) = 0;
    }

    return result;
}

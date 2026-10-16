#include "gi_platform.h"
#include "0046C3C0-GenericPickup_LoadParameters.h"
int32_t GenericPickup_LoadParameters(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x119));

    if (result)
    {
        result = (*(int32_t*)(uintptr_t)(a1 + 0x11a));

        if (result)
        {
            Sound_EventTrigger("pickup", nullptr, 0);
            Render_SetupLighting_14(a1);
            result = DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
            (*(int32_t*)(uintptr_t)(a1 + 0x11a)) = 0;
        }
    }

    return result;
}

// Original IGI.EXE function: GenericPickup_LoadParameters (VA 0x0046C3C0; static CFG gate PASS, CFG score 1.000).
#include "GenericPickup_LoadParameters.h"
int32_t GenericPickup_LoadParameters(void* a1)

{
    char result = *(a1 + 0x119);

    if (result)
    {
        result = *(a1 + 0x11a);

        if (result)
        {
            Sound_EventTrigger("pickup", nullptr, 0);
            Render_SetupLighting_14(a1);
            result = DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
            *(a1 + 0x11a) = 0;
        }
    }

    return result;
}

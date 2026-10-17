// IGI native provenance: GenericPickup_LoadParameters - 0x0046C3C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046C3C0-GenericPickup_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GenericPickup_LoadParameters.h"
int32_t GenericPickup_LoadParameters(void* context)

{
    char result = *(context + 0x119);

    if (result)
    {
        result = *(context + 0x11a);

        if (result)
        {
            Sound_EventTrigger("pickup", nullptr, 0);
            Render_SetupLighting_14(context);
            result = DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
            *(context + 0x11a) = 0;
        }
    }

    return result;
}

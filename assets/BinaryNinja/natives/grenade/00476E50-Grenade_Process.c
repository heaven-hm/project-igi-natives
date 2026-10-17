// IGI native provenance: Grenade_Process - 0x00476E50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00476E50-Grenade_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Grenade_Process.h"
int32_t Grenade_Process(void* context)

{
    int32_t* data_val = *(context + 0x72c);

    if (data_val)
    {
        Qtask_UpdateList(data_val);
        *(context + 0x72c) = 0;
    }

    Script_ParseEnumString_28(context);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
    return DynObj_TryingToRemoveUnrigi(Level_CheckQTaskID_4(), context);
}

// Original IGI.EXE function: Grenade_Process (VA 0x00476E50; static CFG gate PASS, CFG score 1.000).
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

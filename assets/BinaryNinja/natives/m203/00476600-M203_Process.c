// IGI native provenance: M203_Process - 0x00476600 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00476600-M203_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "M203_Process.h"
int32_t* M203_Process(void* context)

{
    DynObj_TryingToRemoveUnrigi(Level_CheckQTaskID_4(), context);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
    int32_t* data_2 = *(context + 0x114);

    if (data_2)
    {
        Qtask_UpdateList(data_2);
        *(context + 0x114) = 0;
    }

    int32_t* result = *(context + 0x118);

    if (result)
    {
        result = Qtask_UpdateList(result);
        *(context + 0x118) = 0;
    }

    return result;
}

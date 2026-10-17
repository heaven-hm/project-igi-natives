// IGI native provenance: Fence_Process - 0x0043FE50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043FE50-Fence_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Fence_Process.h"
char* Fence_Process(void* context)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), context);
    DynObj_TryingToRemoveUnrigi(Level_LoadLevel_4(), context);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
    return Script_CallNativeHandler_6(context + 0x120);
}

// IGI native provenance: ComputerHilight_LoadParameters - 0x00468570 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00468570-ComputerHilight_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerHilight_LoadParameters.h"
void* ComputerHilight_LoadParameters(void* context)

{
    Script_CallNativeHandler_6(context + 0x38);
    DynObj_TryingToRemoveUnrigi(g_5bdc80, context);
    void* result = *(context + 0x88);

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        *(context + 0x88) = 0;
    }

    return result;
}

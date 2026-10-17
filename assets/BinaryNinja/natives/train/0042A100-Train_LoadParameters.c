// IGI native provenance: Train_LoadParameters - 0x0042A100 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042A100-Train_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Train_LoadParameters.h"
int32_t Train_LoadParameters(void* context)

{
    Script_EvaluateCondition_16(context);
    void* data_val = *(context + 0x14);

    if (*(data_val + 0x1c) == g_57bcb8)
        *(data_val + 0x778) -= 1;

    Script_CallNativeHandler_6(context + 0x890);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
    return DynObj_CreateMagicObject_4(*(context + 0x884));
}

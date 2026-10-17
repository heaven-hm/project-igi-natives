// IGI native provenance: Plane_Process - 0x00433790 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00433790-Plane_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Plane_Process.h"
int32_t* Plane_Process(void* context)

{
    Script_EvaluateCondition_16(context);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
    DynObj_CreateMagicObject_4(*(context + 0x828));
    Script_CallNativeHandler_6(context + 0x838);
    return Vehicle_UpdateCockpit_3(context);
}

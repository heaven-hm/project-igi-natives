// IGI native provenance: Heli_Process - 0x00431AE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00431AE0-Heli_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Heli_Process.h"
int32_t* Heli_Process(void* context)

{
    Script_EvaluateCondition_16(context);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), context);
    DynObj_CreateMagicObject_4(*(context + 0x748));
    Vehicle_InitPlane_2(context);
    Script_CallNativeHandler_6(context + 0x758);
    Script_CallNativeHandler_6(context + 0x7a8);
    Script_CallNativeHandler_6(context + 0x7f8);
    DynObj_TryingToRemoveUnrigi(Level_InitSprites_4(), context);
    return FX_TrailUpdate_13(context + 0x8c0);
}
